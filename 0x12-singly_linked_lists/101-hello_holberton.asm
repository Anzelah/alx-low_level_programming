        extern	printf
        global main
main:
        push    rbp
	mov	rdi,fmt
        call    printf

	pop	rbp

	mov	rax,0
	ret

fmt:    db "Hello, Holberton", 10, 0 
