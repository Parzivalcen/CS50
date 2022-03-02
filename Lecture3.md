# Lecture 02
## Compiling
Compiling is not actually just compiling is a process of four steps. 
- Preprocessing 
- Compiling 
- Assembling 
- linking

### Preprocessing
It reads the header files in your code, find them in the HDD or SDD and copy the functions on top of `main` to tell the compiler that these function will exist down in the code, this is done in the ram
### Compiling 
Compiling is the process of grabbing the code you wrote and converting it to assembly language. This is as low level as you can get before we actually get to zeroes and ones (binary). `subq xorl movl movabsq movb ` are basic instructions for the computer to do thing on memory and values.  
```c
..
main:                         # @main
    .cfi_startproc
# BB#0:
    pushq    %rbp
.Ltmp0:
    .cfi_def_cfa_offset 16
.Ltmp1:
    .cfi_offset %rbp, -16
    movq    %rsp, %rbp
.Ltmp2:
    .cfi_def_cfa_register %rbp
    subq    $16, %rsp
    xorl    %eax, %eax
    movl    %eax, %edi
    movabsq    $.L.str, %rsi
    movb    $0, %al
    callq    get_string
    movabsq    $.L.str.1, %rdi
    movq    %rax, -8(%rbp)
    movq    -8(%rbp), %rsi
    movb    $0, %al
    callq    printf
    ...
```
### Assembling 
Is the process of converting the assembly instructions to binary which the computer CPU can read directly 
### Linking
Link the libraries that we have *included* and are compiled with our compiled code 
## Debugger
A debugger allows you to run your program step by step