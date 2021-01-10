[org 0x100]
;Intersection of two arrays and save in third array
jmp start

Intersection:
pusha
mov bp,sp

mov bx,[bp+18];address of array3
mov si,[bp+20];address of array2
mov di,[bp+22];address of array1
mov cx,[bp+24];size of arrays


mov ax,0
mov dx,0
L1:
mov ax,[di]
mov dx,[si]
cmp ax,dx
je L2
jne L3


L2:
mov [bx],ax

L3:
add si,2
add di,2
loop L1


popa
ret 3


start:
push word[size];save it on start
mov bx,array1
push bx
mov di,array2
push di
mov si,array3
push si
call Intersection

end:
mov ax,0x4c00
int 21h

array1:dw 0XE5,0X12,0XDD,0XAB,0X5A,0XC3,0X4A,0X46,0X76,0X87
array2:dw 0XAB,0X1,0XDD,0XCD,0X5A,0XC3,0X4A,0X65,0X76,0XEE
array3:dw 0,0,0,0,0,0,0,0,0,0,0
size:dw 10