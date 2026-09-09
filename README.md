*This project has been created as part of the 42 curriculum by jkaithav.*

# Libft

## Description

Libft is the first project of the 42 core curriculum. The goal is to build a personal
C library, `libft.a`, containing reimplementations of a set of standard C library
functions (prefixed with `ft_`), plus a set of additional utility functions and a
singly linked list toolkit that are not part of the standard C library at all.

This library is meant to be reused as a foundation in later 42 projects, so every
function is written defensively: no unexpected crashes, no memory leaks, and
behavior that matches the documented `man` page for each libc function it mirrors.

The project is split into three parts:

- **Part 1 — Libc functions**: reimplementations of functions such as `strlen`,
  `memcpy`, `strncmp`, `atoi`, `calloc`, `strdup`, and the `is*`/character
  classification functions.
- **Part 2 — Additional functions**: string utilities not found in the standard
  library (`ft_substr`, `ft_strjoin`, `ft_strtrim`, `ft_split`, `ft_itoa`,
  `ft_strmapi`, `ft_striteri`) and file-descriptor output helpers
  (`ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`).
- **Part 3 — Linked lists**: a minimal singly linked list implementation (`t_list`)
  with the classic operations: `ft_lstnew`, `ft_lstadd_front`, `ft_lstadd_back`,
  `ft_lstsize`, `ft_lstlast`, `ft_lstdelone`, `ft_lstclear`, `ft_lstiter`, and
  `ft_lstmap`.

## Instructions

### Compilation

```bash
make        # builds libft.a
make clean  # removes object files
make fclean # removes object files and libft.a
make re     # fclean + all
```

The Makefile compiles every `.c` file with `-Wall -Wextra -Werror` using `cc`, and
archives the resulting object files into `libft.a` with `ar rcs`. No unnecessary
relinking occurs: only source files that changed are recompiled.

### Usage

Include the header and link against the archive when compiling your own project:

```bash
cc -Wall -Wextra -Werror your_program.c -L. -lft -o your_program
```

or, if you keep the library in a `libft/` subfolder inside another project:

```bash
cc your_program.c -Ilibft -Llibft -lft -o your_program
```

```c
#include "libft.h"

int main(void)
{
    char *s = ft_strjoin("Hello, ", "World!");
    ft_putendl_fd(s, 1);
    free(s);
    return (0);
}
```

## Library Description

| File | Function | Description |
|---|---|---|
| `ft_isalpha.c` | `ft_isalpha` | Checks for an alphabetic character |
| `ft_isdigit.c` | `ft_isdigit` | Checks for a digit (0-9) |
| `ft_isalnum.c` | `ft_isalnum` | Checks for an alphanumeric character |
| `ft_isascii.c` | `ft_isascii` | Checks for an ASCII character |
| `ft_isprint.c` | `ft_isprint` | Checks for a printable character |
| `ft_strlen.c` | `ft_strlen` | Returns the length of a string |
| `ft_memset.c` | `ft_memset` | Fills memory with a constant byte |
| `ft_bzero.c` | `ft_bzero` | Zeroes out a byte range |
| `ft_memcpy.c` | `ft_memcpy` | Copies memory area (no overlap) |
| `ft_memmove.c` | `ft_memmove` | Copies memory area (overlap-safe) |
| `ft_strlcpy.c` | `ft_strlcpy` | Size-bounded string copy |
| `ft_strlcat.c` | `ft_strlcat` | Size-bounded string concatenation |
| `ft_toupper.c` | `ft_toupper` | Converts a character to uppercase |
| `ft_tolower.c` | `ft_tolower` | Converts a character to lowercase |
| `ft_strchr.c` | `ft_strchr` | Locates a character in a string |
| `ft_strrchr.c` | `ft_strrchr` | Locates the last occurrence of a character |
| `ft_strncmp.c` | `ft_strncmp` | Compares two strings up to n bytes |
| `ft_memchr.c` | `ft_memchr` | Locates a byte in memory |
| `ft_memcmp.c` | `ft_memcmp` | Compares memory areas |
| `ft_strnstr.c` | `ft_strnstr` | Locates a substring in a bounded string |
| `ft_atoi.c` | `ft_atoi` | Converts a string to an integer |
| `ft_calloc.c` | `ft_calloc` | Allocates and zeroes memory |
| `ft_strdup.c` | `ft_strdup` | Duplicates a string |
| `ft_substr.c` | `ft_substr` | Extracts a substring from a string |
| `ft_strjoin.c` | `ft_strjoin` | Concatenates two strings into a new one |
| `ft_strtrim.c` | `ft_strtrim` | Trims leading/trailing characters from a set |
| `ft_split.c` | `ft_split` | Splits a string into an array by a delimiter |
| `ft_itoa.c` | `ft_itoa` | Converts an integer to a string |
| `ft_strmapi.c` | `ft_strmapi` | Applies a function to each char, building a new string |
| `ft_striteri.c` | `ft_striteri` | Applies a function to each char in place |
| `ft_putchar_fd.c` | `ft_putchar_fd` | Writes a character to a file descriptor |
| `ft_putstr_fd.c` | `ft_putstr_fd` | Writes a string to a file descriptor |
| `ft_putendl_fd.c` | `ft_putendl_fd` | Writes a string + newline to a file descriptor |
| `ft_putnbr_fd.c` | `ft_putnbr_fd` | Writes an integer to a file descriptor |
| `ft_lstnew.c` | `ft_lstnew` | Creates a new list node |
| `ft_lstadd_front.c` | `ft_lstadd_front` | Adds a node to the front of a list |
| `ft_lstsize.c` | `ft_lstsize` | Counts the nodes in a list |
| `ft_lstlast.c` | `ft_lstlast` | Returns the last node of a list |
| `ft_lstadd_back.c` | `ft_lstadd_back` | Adds a node to the back of a list |
| `ft_lstdelone.c` | `ft_lstdelone` | Frees one node and its content |
| `ft_lstclear.c` | `ft_lstclear` | Frees an entire list and its contents |
| `ft_lstiter.c` | `ft_lstiter` | Applies a function to each node's content |
| `ft_lstmap.c` | `ft_lstmap` | Builds a new list by applying a function to each node |

`libft.h` declares every prototype above along with the `t_list` structure used by
Part 3.

## Resources

- [The Open Group — C Library man pages](https://pubs.opengroup.org/onlinepubs/9699919799/idx/functions.html)
- Linux `man` pages (section 3) for each reimplemented function, e.g. `man 3 strlcpy`,
  `man 3 memmove`, `man 3 calloc`
- [42 Norm v4 documentation](https://github.com/42School/norminette) for coding style
  rules
- Beej's Guide to C Programming, for general pointer/memory-management refreshers

### AI usage

An AI assistant chatgbt was used during this project to:

- Write and run a manual test suite comparing outputs against the real libc functions
  where applicable, to catch edge cases before submission.
- Draft this readme 
