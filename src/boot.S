; boot.S
; this file jumps into kernel_main() in main.c

bits 64

global _start

;kernel_main() fn from main
extern kernel_main


section .text
_start:

; Calling kernel funcion from main.c
call kernel_main

.hang:

hlt
jmp .hang
