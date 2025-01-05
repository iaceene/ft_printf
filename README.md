# ft_printf

## Description

`ft_printf` is a custom implementation of the standard C library function `printf`. This project is part of the 42 curriculum and aims to develop a better understanding of how formatted output works in C. The project requires implementing a function that produces output according to a specified format string, with support for various format specifiers.

## Features
- Support for basic format specifiers (`%c`, `%s`, `%d`, `%i`, `%u`, `%x`, `%X`, etc.)
- Implementation of optional flags, width, and precision for formatting.
- Handle of the following conversion types:
  - `%c`: Character
  - `%s`: String
  - `%d` / `%i`: Signed integer
  - `%u`: Unsigned integer
  - `%x` / `%X`: Unsigned hexadecimal (lowercase / uppercase)
  - `%p`: Pointer address
  - `%%`: Literal percent sign

## Objective
The goal of this project is to:
- Implement a minimalistic `printf` function from scratch.
- Work with variadic functions to handle a variable number of arguments.
- Explore how format specifiers and formatting options are handled in the C language.

## Getting Started

### Prerequisites
- Basic knowledge of C programming and memory management.
- A working installation of a C compiler (e.g., GCC or Clang).

### Installation
1. Clone the repository:
   ```bash
   git clone https://github.com/iaceene/ft_printf.git
   cd ft_printf
2. Compile the program using Makefile (if provided):
```bash
  make
```
### Usage
- Once the project is compiled, you can use the ft_printf function in your C programs by including the header file:
```c
#include "ft_printf.h"
You can then call the function in a similar way to printf, but using your own custom implementation:
```
```c
ft_printf("Hello, %s!\n", "world");
ft_printf("Hex: %x\n", 255);
ft_printf("Pointer: %p\n", &some_variable);
```
Example
```c
#include "ft_printf.h"

int main(void) {
    ft_printf("Character: %c\n", 'A');
    ft_printf("String: %s\n", "Hello, World!");
    ft_printf("Decimal: %d\n", 123);
    ft_printf("Hexadecimal: %x\n", 255);
    return 0;
}
```

Output:
```bash
Character: A
String: Hello, World!
Decimal: 123
Hexadecimal: ff
```
