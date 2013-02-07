; Program for printing hello world without using c library


section .text
    global _start           ;must be declared for linker (ld)

_start:                 
    mov edx,len 
    mov ecx,msg 
    mov ebx,1   
    mov eax,4   ;system call number for (sys_write)
    int 0x80    ;call kernel

    mov eax,1   ;system call number (sys_exit)
    int 0x80    ;call kernel

section .data

msg db  'Hello world!',0xa
len equ $ - msg         
