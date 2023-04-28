section .data
    message db 'Hello, Holberton', 0Ah ; string with a new line

section .text
    global main
    extern printf

main:
    push rbp
    mov rbp, rsp

    lea rdi, [message] ; load address of message into rdi
    xor eax, eax ; clear eax
    call printf ; call printf with message

    mov rsp, rbp
    pop rbp
    xor eax, eax ; clear eax
    ret ; return from main
