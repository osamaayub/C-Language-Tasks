[org 0x100]
jmp start


copyArray:
pusha 
mov bp,sp;copy the stack top address into base pointer
mov bx,[bp+20];address of array1
mov cx,[bp+22];size
mov si,[bp+18];address of array2

L1:
mov ax,[bx]
cmp ax,25600
JNA L3
jA L2

L3:
mov [si],ax
add bx,2
add si,2
Loop L1
L2:
mov word[si],0
loop L1

popa
ret 2



start:
push word[size]

mov bx,array1
push bx

mov dx,array2
push dx

call copyArray


end:
mov ax,0x4c00
int 21h

array1:dw 0xAB00,0X1200,0XEF00,0X6500,0X5A00,0X7700,0X7F00,0X6400,0X3F00,0X0900
size:dw 10
array2:dw 0,0,0,0,0,0,0,0,0,0