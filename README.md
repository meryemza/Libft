Libft

My own C library — 42 School Common Core

Libft is my first project at 42, where I recreated a set of functions from the C standard library and implemented additional utility functions from scratch.

The goal was to build a reusable static library while strengthening my understanding of C, memory management, pointers, strings, linked lists and Makefiles.


Compilation

Build the library
make

This generates:

libft.a
Build the bonus functions
make bonus
Remove object files
make clean
Remove object files and the library
make fclean
Rebuild everything
make re


Usage

Include the library header:

#include "libft.h"

Compile your program with libft.a:

cc main.c libft.a -o program

Run:

./program

Key Concepts

This project strengthened my understanding of:

C pointers and pointer arithmetic
Dynamic memory allocation
Memory manipulation
String handling
Linked-list data structures
Static libraries
Makefiles and build automation
Compiler flags
Edge cases and error handling
42 Norminette standards


