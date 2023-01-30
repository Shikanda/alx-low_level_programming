section .data
	message db "Hello Holberton", 0Ah

section .text
	global _start


_start:
	; write the message to stdout
	mov rax, 1	; system call for sys_write
	mov rdi, 1	; file descriptor 1 is stdout
	mov rsi, message ;pointer to message
	mov rdx, 9	;length of message
	syscall	; invoke the system call

	;exit the program
	mov rax, 60	;system call for sys_exit
	xor rdi, rdi	;return 0
	syscall		;invoke the system call
