*This project has been created as part of the 42 curriculum by mvelasqu.*

# ft_printf

## Description
ft_printf is a custom implementation of the standard C printf function.
It reproduces the behavior of printf by handling formatted output using variadic arguments and writing the result to standard output.

This project focuses on:

- Variadic functions (va_list)
- Parsing format strings
- Character and string manipulation
- Output counting and error handling

## Supported Conversions

|Specifier|Description|
|------|---|
|`%c`| Print a single character|
|`%s`| Print a string|
|`%p`| Print a pointer in hexadecimal format|
|`%d`| Print a decimal (base 10) number|
|`%i`| Print an integer in base 10|
|`%u`| Print an unsigned decimal (base 10) number|
|`%x`| Print a number in hexadecimal (base 16) number in lowercase|
|`%X`| Print a number in hexadecimal (base 16) number in uppercase|
|`%` | Print a percentage '%' symbol|

## 🔧 Instructions

### ✔️ Compilation
To compile the library:
```bash
make
```

To clean object files:
```bash
make clean
```

To remove objects + library:
```bash
make fclean
```

To recompile from scratch:
```bash
make re
```

### Usage

```bash
int ft_printf(const char *format,...)
```
### Usage Example
```bash
#include "ft_printf.h"

int main(void)
{
    ft_printf("Hello %s! Number: %d\n", "42", 2025);
    return (0);
}
```

Compile with:
```bash
cc main.c libftprintf.a
```

And in your source files:
```bash
#include "ft_printf.h"
```

## Notes

- Uses only allowed functions: write, va_start, va_arg, va_end
- No buffer usage — output is written directly
- Fully compliant with 42 Norminette

## Skills Learned

- Variadic argument handling
- Format parsing
- Modular C design
- Low-level I/O
- Replicating standard library behavior

## Status

✔️ Mandatory part completed

❌ Bonus part not implemented
