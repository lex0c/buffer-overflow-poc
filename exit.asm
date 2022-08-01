section text

global _start

_start:
  mov EAX, 1    ; exit 1
  mov EBX, 10   ; any parameter
  int 0x80      ; syscall

