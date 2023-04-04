        extern printf
        global main
main:
        mov edi, fmt
        mov eax, 0
        call printf
        mov ebx, 0
        mov eax, 1
        ret

fmt:    db 'Hello, Holberton', 0xA, 0
