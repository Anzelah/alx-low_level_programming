        extern printf
        global main
main:
        mov rdi, fmt
        mov rsi, msg
        mov rax, 0
        call printf
        mov rax, 0
        ret

msg:    db "Hello, Holberton", 0
fmt:    db "%s", 0xa, 0
