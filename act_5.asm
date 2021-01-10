[org 0x100]
jmp start_Main
clrscr:
pusha
mov ax,0xb800
mov es,ax
mov di,0
mov cx,2000
next_char:
mov word[es:di],0x0720
add di,2
loop next_char
popa
ret

print_string:
	PUSHA 
	MOV BP,SP
	MOV CX,[BP+18]  ; size of character array
	MOV DI,[BP+20]  ; offset top left of the screen
	MOV BX,[BP+22] ; address of Array
	MOV AX,0XB800;video Memory base address
	MOV ES,AX;point es to the video memory
	Label:
		MOV AL,[BX];load first character from char array
		MOV AH,0x5;attribute byte
		MOV WORD[ES:DI],AX
		ADD DI,2
		ADD BX,1
	LOOP Label
	POPA
RET 6 
Delay_Movement:
	PUSHA
	MOV CX,11
Label5:
	PUSH CX
	MOV CX,0XFFFF
	L2:
	LOOP L2 ;; iNNER LOOP 
	POP CX
LOOP Label5; OUTER LOOP
	POPA
RET		

start_Main:
	MOV DI,0
	MOV CX, 80 ;columns
	L2:	
		PUSH Array ; Char array address
		PUSH DI   ; offset where array will be printed
		PUSH word[size] ; Size of char array
		CALL print_string; This will print string on the scree at desired offset location
		CALL Delay_Movement;THis will cause the delay in movement of character Array
		CALL clrscr  ; this subroutine will clear the character's from the screen
		ADD DI,2;move till the next screen location
	LOOP L2
JMP start_Main;this is infinite loop condition

exit:
mov ax,0x4c00
int 21h
Array:db 'Osama_Ayub'
size:dw 10