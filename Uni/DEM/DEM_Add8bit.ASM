data segment
num1 db 81h
num2 db 34h
result dw ? 
;define byte also== result db 00h
data ends

code segment

start: assume ds: data, cs: code
mov ax,data
mov ds,ax
mov ah,00h
mov al,num1
add al,num2
;add al,bl
;mov result,al

jnc down
inc ah
down:mov result,ax

mov ax,4c00h

int 21h

code ends
end start
