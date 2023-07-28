section .data
	hello_msg db 'Hello, Holberton', 10

section .text
	global _start

_start:
    	;
	mov rax, 1;
	mov rdi, 1;
	mov rsi, hello_msg;
	mov rdx,15;
	syscall
	;
	mov rax, 60;
	xor rdi, rdi;
	syscall
