# my_printf

## Description

`my_printf` is a custom implementation of the `printf` function in C, providing a flexible and customizable way to format and print data. It covers nearly all functionalities of the standard libc `printf`, allowing for formatted output to the console or other output streams.

## Epitech Context

This project was completed as one of the projects for first-year students at [École pour l'informatique et les nouvelles technologies (Epitech)](https://www.epitech.eu/). It serves as an exercise in understanding and implementing fundamental concepts in C programming and serves as a stepping stone for students to gain proficiency in system programming.

## Features

- Supports a subset of format specifiers similar to the standard `printf` function.
- Customizable and extensible for additional format specifiers.
- Compiled into a static library for easy integration into other projects.
- Easily usable via a Makefile for compilation.
- Includes unit tests using Criterion for testing functionality.

## Usage

1. **Clone the repository:**

    ```sh
    git clone https://github.com/your_username/my_printf.git
    ```

2. **Navigate to the project directory:**

    ```sh
    cd my_printf
    ```

3. **Compile the library using the provided Makefile:**

    ```sh
    make
    ```

4. This will generate a static library file named `libmy.a`.

5. **To use `my_printf` in your own project, include the `my_printf.h` header file:**

    ```c
    #include "my_printf.h"
    ```

6. **Link against the `libmy.a` library when compiling your project:**

    ```sh
    gcc -o my_project my_project.c -L/path/to/my_printf -lmy
    ```

7. **Now you can use the `my_printf` function in your code just like `printf`:**

    ```c
    my_printf("Hello, %s!\n", "world");
    ```

## Format Specifiers

`my_printf` supports the following format specifiers:

- `%c` - Character
- `%s` - String
- `%d`, `%i` - Signed integer
- `%u` - Unsigned integer
- `%x`, `%X` - Hexadecimal integer
- `%o` - Octal integer
- `%f`, `%F` - Floating point number
- `%e`, `%E` - Exponential notation

Additional format specifiers can be easily added by modifying the source code.

## Running Tests

- **To run unit tests, use the following command:**

    ```sh
    make tests_run
    ```

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.
