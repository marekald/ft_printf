*This project has been created as part of the 42 curriculum by marekald.*

# Description
`ft_printf` es una implementación propia de la función estándar `printf()` en C.
Este proyecto forma parte del cursus de 42, y su objetivo es recrear la funcionalidad básica de `printf`, permitiendo imprimir diferentes tipos de datos usando una interfaz similar.

**Supported variables:**
-  `%c`            Imprime un carácter.
-  `%s`            Imprime una cadena.
-  `%p`            Imprime un puntero en hexadecimal.
-  `%d` / `%i`     Imprime un entero con signo.
-  `%u`            Imprime un entero sin signo.
-  `%x`            Imprime un número en hexadecimal (minúsculas).
-  `%X`            Imprime un número en hexadecimal (mayúsculas).
-  `%%`            Imprime el carácter `%`.

# Instructions

``` c
int ft_printf(const char *format, ...);
```

# Resources

## Usage examples

---
A detailed explanation and justification of the chosen algorithm and data structure must also be included