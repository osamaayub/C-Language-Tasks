[org 0x100]
jmp start

start:
  mov  ax,0xb800   ; we are going to write the video memory directly
  mov   es,ax       ; using stosw we will write es:di so we need to initialize es first
  mov   di,0     ; setting offset so that we start at the center of the screen
  mov   cx,256      ; we have 256 character to display (cx is used for loop control)
  mov   al,0        ; starting with the first character of the ASCII table
  mov   ah,0x06      
L1:
  push  ax          ; push the current ASCII code onto the stack
  mov   ax,cx       ; current loop index for division
  mov   bl,32       ; will have 32 characters in a single line
  div   bl          ; divide the current loop index (256 - n) by 32
  cmp   ah,0
  jne   print_chr   ; jump if there were any remainder (so we are still in the same line)
  add   di,96       ; next line
print_chr:
  pop   ax          ; pop the current ASCII code from the stack
  mov [es:di],ax 
  add di,2  ; store ax at address es:di (so we print the current ASCII code)
  inc   al          ; move to the next ASCII code
  loop  L1  ; decrease cx and loop again

mov ax,0x4c00
int 21h