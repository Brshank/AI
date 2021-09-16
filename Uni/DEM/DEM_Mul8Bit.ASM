data segment
num1 dw 81h
num2 dw 34h
prodl dw ?
prodh dw ?
data ends

code segment
start: assume ds:data, cs:code
mov ax,data
mov ds,ax
mov ax,num1
mul num2
mov prodl,ax
mov prodh,dx
mov ax,4c00h
int 21h
code ends
end start

