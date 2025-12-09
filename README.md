*This project has been created as part of the 42 curriculum by marekald.*

# ft_printf

## Description

ft_printf is a custom reimplementation of the standard C `printf` function. Its goal is to reproduce formatted output behavior while supporting a selected set of format specifiers. The project focuses on understanding variadic functions, efficient data conversion, and string manipulation in C.

The function parses a format string, detects format specifiers, extracts corresponding arguments, and prints them according to formatting rules.

## Supported Format Specifiers

| Specifier | Description |
|----------|-------------|
| `%c` | Prints a single character |
| `%s` | Prints a string of characters |
| `%p` | Prints a pointer address in hexadecimal format |
| `%d` | Prints a decimal (base 10) number |
| `%i` | Prints a signed decimal (base 10) number |
| `%u` | Prints an unsigned decimal (base 10) number |
| `%x` | Prints a number in lowercase hexadecimal format |
| `%X` | Prints a number in uppercase hexadecimal format |
| `%%` | Prints a percent sign |

## Instructions

### Compilation

Use the provided Makefile:
```
make       # Compile and create libftprintf.a
make clean # Remove object files
make fclean# Remove object files and the library
make re    # Rebuild everything
```

### Usage Example
```c
#include "ft_printf.h"

int main(void)
{
    ft_printf("Hello %s! Number: %d
", "World", 42);
    return 0;
}
```

Compile with the library:
```
cc main.c libftprintf.a -o test
```

## Technical Design

### Algorithm Choice

A lightweight parsing loop is used to traverse the format string. When a `%` character is detected, a small state machine identifies the following specifier and processes the appropriate argument.

This approach is efficient, avoids unnecessary resource usage, and supports modular extension.

### Data Structure & Function Justification

*Variadic arguments* are handled using `stdarg.h`:
- `va_list`
- `va_start`
- `va_arg`
- `va_end`

Functions are split based on responsibilities:
- `ft_putchar` for character output
- `ft_putstr` for string output
- `ft_putnbr_base` for integer/hexadecimal conversion

Key considerations:
- No dynamic allocation → avoids memory leaks
- Modular function design → easier debugging and maintenance
- Efficient base conversion using reusable logic

## Resources

References used during development:
- Linux man pages for `printf` behavior
- Documentation on variadic functions (`stdarg.h`)
- 42 school subject guidelines
- Popular testers such as Tripouille’s printfTester

## AI Usage

Artificial intelligence was used exclusively for:
- Structuring the README and improving clarity
- Formatting and English language refinement