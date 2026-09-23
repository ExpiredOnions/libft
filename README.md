*This project has been created as part of the 42 curriculum by <tchantas>.*

# libft

## Description

**libft** is the very first project of the 42 core curriculum. The goal is to build a
personal C library that re-implements a selection of standard C library functions
(from `<string.h>`, `<stdlib.h>`, `<ctype.h>`, etc.) from scratch, along with a set of
additional utility functions for string manipulation, memory handling, and singly
linked lists.

This library is meant to be reused as the foundation of virtually every future project
of the curriculum, so each function has to be implemented correctly, defensively (no
segfaults, no undefined behavior), and in strict compliance with the 42 Norm coding
style.

The project is split into three parts:

- **Libc functions**: re-implementations of standard functions such as `memset`,
  `strlen`, `strdup`, `atoi`, `isalpha`, etc.
- **Additional functions**: extra string/memory helpers not found in the standard C
  library, such as `ft_split`, `ft_strtrim`, `ft_itoa`, `ft_substr`, `ft_strjoin`,
  `ft_strmapi`, `ft_striteri`, `ft_calloc`, `ft_putnbr_fd`, etc.
- **Bonus functions**: a singly linked list implementation (`t_list`) with a full set
  of creation, insertion, iteration, mapping, and cleanup functions
  (`ft_lstnew`, `ft_lstadd_front`, `ft_lstadd_back`, `ft_lstsize`, `ft_lstlast`,
  `ft_lstdelone`, `ft_lstclear`, `ft_lstiter`, `ft_lstmap`).

## Instructions

### Compilation

The project is built with a `Makefile` that compiles all sources into a static
library, `libft.a`.

```sh
make        # compiles the sources and archives them into libft.a
make clean  # removes the object files (.o)
make fclean # removes the object files and libft.a
make re     # fclean + all
```

The library is compiled with `-Wall -Wextra -Werror`, so it must compile without
any warning or error.

### Usage

To use the library in your own project, include the header and link against the
compiled archive:

```sh
#include "libft.h"
```

```sh
cc -Wall -Wextra -Werror your_file.c -L. -lft -o your_program
```

(assuming `libft.h` and `libft.a` are in the current directory, or adjust `-I`/`-L`
paths accordingly).

## Detailed library description

All prototypes are declared in [libft.h](libft.h), and the `t_list` structure used by
the bonus part is defined there as well:

```c
typedef struct s_list
{
    void            *content;
    struct s_list   *next;
}                   t_list;
```

### Libc re-implementations

| Function | Description |
|---|---|
| `ft_isalpha` | Checks if a character is an alphabetic letter |
| `ft_isdigit` | Checks if a character is a digit |
| `ft_isalnum` | Checks if a character is alphanumeric |
| `ft_isascii` | Checks if a character is an ASCII character |
| `ft_isprint` | Checks if a character is printable |
| `ft_toupper` | Converts a lowercase letter to uppercase |
| `ft_tolower` | Converts an uppercase letter to lowercase |
| `ft_strlen` | Computes the length of a string |
| `ft_memset` | Fills a memory area with a constant byte |
| `ft_bzero` | Zeroes out a memory area |
| `ft_memcpy` | Copies a memory area |
| `ft_memmove` | Copies a memory area, safe for overlapping regions |
| `ft_strlcpy` | Copies a string, size-bounded (BSD-style) |
| `ft_strlcat` | Concatenates a string, size-bounded (BSD-style) |
| `ft_strchr` | Finds the first occurrence of a character in a string |
| `ft_strrchr` | Finds the last occurrence of a character in a string |
| `ft_strncmp` | Compares two strings up to `n` characters |
| `ft_memchr` | Finds the first occurrence of a byte in a memory area |
| `ft_memcmp` | Compares two memory areas |
| `ft_strnstr` | Finds a substring within a bounded-length string |
| `ft_atoi` | Converts a string to an `int` |
| `ft_calloc` | Allocates and zero-initializes memory |
| `ft_strdup` | Duplicates a string |

### Additional functions

| Function | Description |
|---|---|
| `ft_substr` | Extracts a substring from a string |
| `ft_strjoin` | Concatenates two strings into a newly allocated string |
| `ft_strtrim` | Trims specified leading/trailing characters from a string |
| `ft_split` | Splits a string into an array of strings using a delimiter |
| `ft_itoa` | Converts an `int` into a newly allocated string |
| `ft_strmapi` | Applies a function to each character of a string, building a new string |
| `ft_striteri` | Applies a function to each character of a string, in place, with its index |
| `ft_putchar_fd` | Outputs a character to a given file descriptor |
| `ft_putstr_fd` | Outputs a string to a given file descriptor |
| `ft_putendl_fd` | Outputs a string followed by a newline to a given file descriptor |
| `ft_putnbr_fd` | Outputs an `int` to a given file descriptor |

### Bonus: linked list

| Function | Description |
|---|---|
| `ft_lstnew` | Creates a new list node |
| `ft_lstadd_front` | Adds a node at the beginning of a list |
| `ft_lstadd_back` | Adds a node at the end of a list |
| `ft_lstsize` | Counts the number of nodes in a list |
| `ft_lstlast` | Returns the last node of a list |
| `ft_lstdelone` | Deletes a single node, freeing its content with a given function |
| `ft_lstclear` | Deletes and frees an entire list |
| `ft_lstiter` | Applies a function to each node's content |
| `ft_lstmap` | Creates a new list by applying a function to each node's content |

## AI usage

Parts of this project (documentation, debugging assistance, and code review) were
developed with the help of Claude Code, an AI coding assistant. All code was reviewed,
tested, and understood before being submitted.


