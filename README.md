# Libft

*This project has been created as part of the 42 curriculum by `Mezahir`.*

## 1. Description:

`Libft` is a C project that consists of creating a personal static library by reimplementing a set of functions from the C standard library and implementing additional utility functions from scratch.

The library provides functions for character handling, memory manipulation, string processing, conversions, and linked-list operations.

The goal of this project is to build a reusable C library while strengthening my understanding of C programming, pointers, memory management, strings, linked lists, and Makefiles.

## 2. Instructions:

### - Compilation :

Build the mandatory part of the library:

```bash
make
```

This generates the static library:

```text
libft.a
```

Build the bonus part:

```bash
make bonus
```

Remove object files:

```bash
make clean
```

Remove object files and the library:

```bash
make fclean
```

Rebuild everything:

```bash
make re
```

### - Usage :

Include the library header:

```c
#include "libft.h"
```

Compile your program with `libft.a`:

```bash
cc main.c libft.a -o program
```

Run the program:

```bash
./program
```
## 4. Key concepts:

This project strengthened my understanding of:

* C pointers and pointer arithmetic
* Dynamic memory allocation
* Memory manipulation
* String handling
* Linked-list data structures
* Static libraries
* Makefiles and build automation
* Compiler flags
* Edge cases and error handling
* 42 Norminette standards
