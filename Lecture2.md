#### had to continue from the other computer later

In languages like *C* you have to tell the computer what type of value is your variable going to store for example `int, float, string` also functions have to have what type of value they are going to return and what type is the argument like this:
```c
float discount (float price, int percentage){

    return price * (100-percentage) / 100;

}
```

If its not going to return anything or is not going to take any argument we set it to `void` : This function just makes a Visual change, it does not take any arguments and it does not return anything
```c
void meow (void){
  printf("meow");
}

```

this function does not return anything but it takes an argument that is an `int` which specifies how many time "meow" will be printed 
```c
void meow(int n){
  for(int i = 0; i<n; i++){
    printf("meow \n");
  }
}
```

## Header files
Header files are libraries that someone made, they are mainly functions grouped in a file, and they are called header files. 

```c
#include <cs50.h>
#include <stdio.h>
```
The `stdio.h` stands for standard input and output, there are functions like `printf` inside of it. The compiler wouldn't know what `printf` even mean if we don't `#include <stdio.h>`, the CS50 library also has special functions on it 
## Limited amount of bits
The computer can run out of bits so we have to specify long data types for example `long` has 64 bits and `int` only have 32 bits.

Its important that we consider these problems, so we don't run into more complicated ones, if a number is not precise in can even compound over time. 
## Conditions
Words like `if, else, for` are programing constructs they are a feature of the language like *C, JS, Python, etc.*, they are not functions.
## Constants
A constant is a variable that can not change, if you know a variable should not change you make it constant `const int n = 2` 
## Char
Char is used for single characters, for example when you want a yes or no answer you ask the user to enter Y or N, you store that with a char dtype `char answer = get_char("do you agree? ");`, the answer can only be a character. Char uses single quotes `'Y'`.
## Declarations, assignment and Initialization.
Declarations are when we dont assign a value to the declared variable `int number;`.

Assignment is when we assign a value to the variable after declaring it. Its not ok to specify the data type after declaring or initializing the variable
```c
int number;
number = 10;

```
Initialization takes both of the concepts above in one line 
```c
int number = 10;

```
