
# libft

A custom C **library** developed as part of the 42 school curriculum. This project re‑implements selected **standard C library functions**, includes additional utilities for string and memory handling, and supports **linked list operations**.
> The goal of the Libft project was to deepen my understanding of pointers, memory management, static libraries, and C coding standards, while building a library I can reuse across future projects.

## Technical specification  
**Language**: C (C99/C11)  
**Standard**: POSIX / 42 Norminette  
**Build System**: GNU Make  
**Memory**: Zero-leak policy (Valgrind/Leaks verified)  
**Compilation flags**: -Wall -Werror -Wextra

## Modules
### Standard C library re-implementation
Core memory and string manipulation utilities:
- **Memory Operations:** `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`.
- **String Manipulation:** `ft_strlen`, `ft_strlcpy`, `ft_strlcat`, `ft_strchr`, `ft_strrchr`, `ft_strnstr`, `ft_strncmp`.
- **Type Logic:** `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`, `ft_toupper`, `ft_tolower`.

### Extended utility functions
String transformation and I/O management:
- **Allocation:** `ft_substr`, `ft_strjoin`, `ft_strtrim`, `ft_split`, `ft_itoa`.
- **Functional Programming:** `ft_strmapi`, `ft_striteri`.
- **File Descriptor I/O:** `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`.

### Linked list manipulation routines
Using a `t_list` struct, simplification of linked list usage:
- **Operations:** `ft_lstnew`, `ft_lstadd_front`, `ft_lstsize`, `ft_lstlast`, `ft_lstadd_back`.
- **Memory Management:** `ft_lstdelone`, `ft_lstclear`, `ft_lstiter`, `ft_lstmap`.

## Build Instruction
The project produces a static library file `libft.a`.
```bash
git clone git@github.com:miluns/libft.git
cd libft

# Compile into a static library
make
