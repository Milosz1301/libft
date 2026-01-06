
# libft

**Core C Library | 42 Network Standard | High-Performance Implementation**

A robust, statically-linked library of C functions reimplementing standard library components and extending them with advanced data structures. Developed with a focus on memory efficiency, strict standards compliance, and technical precision.

---

## 🛠 Technical Specifications

| Requirement | Specification |
| :--- | :--- |
| **Language** | C (C99/C11) |
| **Standard** | POSIX / 42 Norminette |
| **Build System** | GNU Make |
| **Memory** | Zero-leak policy (Valgrind/Leaks verified) |
| **Strictness** | -Wall -Werror -Wextra |

---

## 📦 Modules

### 1. Standard Libc Implementation
High-efficiency versions of core functions from `<ctype.h>`, `<string.h>`, and `<stdlib.h>`.
- **Memory Operations:** `memset`, `bzero`, `memcpy`, `memmove`, `memchr`, `memcmp`.
- **String Manipulation:** `strlen`, `strlcpy`, `strlcat`, `strchr`, `strrchr`, `strnstr`, `strncmp`.
- **Type Logic:** `isalpha`, `isdigit`, `isalnum`, `isascii`, `isprint`, `toupper`, `tolower`.

### 2. Extended Utility Functions
Advanced logic for string transformation and I/O management.
- **Allocation:** `ft_substr`, `ft_strjoin`, `ft_strtrim`, `ft_split`, `ft_itoa`.
- **Functional Programming:** `ft_strmapi`, `ft_striteri`.
- **File Descriptor I/O:** `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`.

### 3. Data Structures (Linked Lists)
A comprehensive API for dynamic list management.
- **Operations:** `ft_lstnew`, `ft_lstadd_front`, `ft_lstsize`, `ft_lstlast`, `ft_lstadd_back`.
- **Memory Management:** `ft_lstdelone`, `ft_lstclear`, `ft_lstiter`, `ft_lstmap`.

---

## 🚀 Build Instructions

The project produces a static library file `libft.a`.

```bash
# Clone the repository
git clone [https://github.com/miluns/libft.git](https://github.com/miluns/libft.git) && cd libft

# Compile mandatory functions
make

# Compile with linked list support
make bonus

# Clean object files
make clean
