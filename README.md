## Tasks

### Task 0: Basic `_printf` Implementation
Write a function `_printf` that produces output according to a given format string. Handle the conversion specifiers `c`, `s`, and `%`. The function should return the number of characters printed.

### Task 1: Handling Integer Conversion Specifiers
Extend `_printf` to handle the conversion specifiers `d` and `i` for printing integers. Don't worry about flags, field width, precision, or length modifiers.

### Task 2: Custom Binary Conversion Specifier
Implement a custom conversion specifier `%b` that converts an unsigned integer argument to binary.

### Task 3: Handling Additional Integer Conversion Specifiers
Extend `_printf` to handle the conversion specifiers `u`, `o`, `x`, and `X` for printing unsigned integers in different bases. No need to handle flags, field width, precision, or length modifiers.

### Task 4: Optimize Printing with Local Buffer
Use a local buffer of 1024 characters to minimize the number of calls to the `write` function.

### Task 5: Custom String Conversion Specifier
Implement a custom conversion specifier `%S` to print strings with non-printable characters represented as `\x` followed by their ASCII code in hexadecimal.

### Task 6: Pointer Address Conversion Specifier
Handle the conversion specifier `p` to print a pointer's address.

### Task 7: Handling Flags for Non-Custom Conversion Specifiers
Implement the flags `+`, space, and `#` for non-custom conversion specifiers.

### Task 8: Handling Length Modifiers
Handle the length modifiers `l` and `h` for the conversion specifiers `d`, `i`, `u`, `o`, `x`, and `X`.

### Task 9: Handling Field Width
Implement field width handling for non-custom conversion specifiers.

### Task 10: Handling Precision
Handle precision for non-custom conversion specifiers.

### Task 11: Handling Flag '0'
Implement flag `0` handling for non-custom conversion specifiers.

### Task 12: Handling Flag '-'
Implement flag `-` handling for non-custom conversion specifiers.

### Task 13: Custom Reversed String Conversion Specifier
Implement a custom conversion specifier `%r` to print the reversed string.

### Task 14: Custom Rot13 Conversion Specifier
Implement a custom conversion specifier `%R` to print the Rot13'ed string.

### Task 15: Comprehensive Implementation
Combine all the implemented options to work well together.

