<p align="center">
	<img src="https://assets-global.website-files.com/64107f65f30b69371e3d6bfa/6480d9b63a806a1b35fec007_Holberton-p-500.png" style="margin:50px;"/>
</p>

# <p align="center">_printf</p>

## Welcome
A rebuild of the standard `printf` function in C. Our mision want a function capable of printing with the `%d`, `%c`, `%s`, and `%%` specifiers to standard output.

## The Holberton Way
Holberton students rarely rely on the C standard library, instead building our own functions and headers as we learn. Here you will see a variety of our builds put to use to build a simple re-imagining of `printf`.

### Supported Format Types

| Type  | Output |
|:-----:|:------:|
| c | single character |
| s | string |
| d | integer in decimal |
| i | integer |
| % | percent sign |


### Examples
It's an exemple 

```
#include "main.h"

/**
 * main - entry point of the program
 *
 * Return: always 0 (Success)
 */
int main(void)
{
        int positive_number = 59;
        int negative_number = -59;

        char character = 'A';
        char *string = " I am a Holberton student!";

        _printf("%c\n", character);
        _printf("%s\n", string);
        _printf("%%\n\n");

        _printf("This is the best school\n\n");

        _printf("%d\n", positive_number);
        _printf("%i\n\n", negative_number);

        return (0);
}
```

In this case the output is:

```
A
I am a Holberton student!
%

This is the best school

59
-59
```

## Built With

* [Ubuntu](https://ubuntu.com/)
* [GitHub](https://github.com/)
* [StackEdit](https://stackedit.io/)
* [RTFM](https://google.com/)

# Project Requirements
-   Allowed editors: `vi`, `vim`, `emacs`
-   All your files will be compiled on Ubuntu 20.04 LTS
-   Your programs and functions will be compiled with `gcc` using the optios `-Wall -Werror -Wextra -pedantic -std=gnu89`
-   All your files should end with a new line
-   A `README.md` file, at the root of the folder of the project is mandatory
-   Your code should use the `Betty` style. It will be checked using [betty-style.pl](https://github.com/holbertonschool/Betty/blob/master/betty-style.pl "betty-style.pl") and [betty-doc.pl](https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl "betty-doc.pl")
-   You are not allowed to use global variables
-   No more than 5 functions per file
-   In the following examples, the `main.c` files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own `main.c` files at compilation. Our `main.c` files might be different from the one shown in the examples
-   The prototypes of all your functions should be included in your header file called `holberton.h`
-   Don’t forget to push your header file
-   All your header files should be include guarded
-   Note that we will not provide the `_putchar` function for this project

### Prototype

#include "main.h"
```bash
int _printf(const char *format, ...);
```
### Compilation

```bash
-Wall -Werror -Wextra -pedantic -std=gnu89
```
### Return Value

* The number of characters printed.



 <p align="center">PRINTF</p>
        
The _printf() function prints formatted data to the standars output. It parses the format string and processes each conversion spesifier by calling the appropriate function to print the corresponding data type. Additional arguments after format are retrieved using va_list and va_start to access the variable arguments.


## Prototype

`int _printf(const char *format, ...);`
        
## Requirements

- Allowed editors: vim or emacs.
- All the files will be compiled on Ubuntu 20.04 LTS using gcc.
- The code should use the betty style.
- Global variables are not allowed.
- No more than 5 functions per file.
- The prototypes of all th functions should be included in the header file called main.h.
- The header files should be include guarded.

## Commande de compilation

```
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c
```
## Specifiers


| Specifier|  Description|
| -------- | -------- | 
|   %c    | print a single character | 
|   %s    | print a null-terminated string   | 
|   %%    | print a literal '%' character  | 
|   %d | print a decimal number|
|  %i   |print an integer number|

## Exemple

This is an exemple o teh printf function

```
#include "main.h"

/**
 * main - entry point of the program
 *
 * Return: always 0 (Success)
 */
int main(void)
{
        int positive_number = 59;
        int negative_number = -59;

        char character = 'A';
        char *string = " I am a Holberton student!";

        _printf("%c\n", character);
        _printf("%s\n", string);
        _printf("%%\n\n");

        _printf("This is the best school\n\n");

        _printf("%d\n", positive_number);
        _printf("%i\n\n", negative_number);

        return (0);
}
```

This is the output for this code.

```
A
I am a Holberton student!
%

This is the best school

59
-59
```

## man page

![](https://i.postimg.cc/k4w5dXyr/Capture-d-cran-du-2024-03-29-11-47-39.png)
        

## Flowchart

![](https://i.postimg.cc/hPh3TDh2/Capture-d-cran-du-2024-03-29-11-56-37.png) 


## Authors
* [**Anne Charlotte Wyffels**](https://github.com/acwffls)
* [**Said Zaier**](https://github.com/saidzaier10)
* [**Guillaume Sellier**](https://github.com/Guillom8967) 

## License

This project is licensed under the Holberton School Lille

## Acknowledgments

* RTFM
* Cohort 23
* Google 
* Adrien Millot 

