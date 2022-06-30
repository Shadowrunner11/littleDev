.globl _start
.section .text
_start:
    movq $11, %rdi
    #salir del programa
    movq $60, %rax
    syscall
