data segment
num1 dw 0ABCDh
num2 dw 1234h
result dw ?
Answer dw ?
data ends

code segment
start: assume ds: data, cs: code
mov ax,data
mov ds,ax
mov ax,num1
add ax,num2
mov result,ax
mov ax,4c00h
mov Answer,4c00h

int 21h
code ends
end start
