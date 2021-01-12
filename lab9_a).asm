
[org 0x100]
jmp start

str1 db 'Osama_Ayub'
start: 
mov ax, 0xb800; 
Mov es, ax;;segment address from where video memory starts. 
mov di,1000
mov cx,10	 
mov si, str1; 
mov ah,0x1A	 	; string length, 11 characters.  
 label: 	 	; Attribute byte for the characters to be displayed.  
Mov al,[si]; 	 	 	;reading the characters in al. 
Inc si 	 	 	 	; pointing to next character in string 
Mov [es:di],ax;  	 	; printing message on the screen, whole register of size word is written at 
Add di,2; 	 
cmp cx,10
jne skip
blink:
mov ah,0x9A
skip:
loop label
mov ax,0x9A
end: 
mov ax,0x4c00
int 21h