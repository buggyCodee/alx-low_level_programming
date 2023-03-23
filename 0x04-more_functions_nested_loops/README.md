# 0x04. C - More functions, more nested loops

## Resources

- [Nested while loops](https://www.youtube.com/watch?v=Z3iGeQ1gIss)
- [C - Functions](http://www.tutorialspoint.com/cprogramming/c_functions.htm)
- [Learning to Program in C (Part 06)](https://www.youtube.com/watch?v=qMlnFwYdqIw) (stop at 14:00)
- [What is the purpose of a function prototype?](https://www.geeksforgeeks.org/what-is-the-purpose-of-a-function-prototype/)
- [C - Header Files](https://www.tutorialspoint.com/cprogramming/c_header_files.htm) (stop before the “Once-Only Headers” paragraph)

## General

- What are nested loops and how to use them
- What is a function and how do you use functions
- What is the difference between a declaration and a definition of a function
- What is a prototype
- Scope of variables
- What are the `gcc` flags `-Wall -Werror -pedantic -Wextra -std=gnu89`
- What are header files and how to to use them with `#include`

## Requirements

### General

- Allowed editors: `vi`, `vim`, `emacs`
- All your files will be compiled on Ubuntu 20.04 LTS using `gcc`, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
- All your files should end with a new line
- A `README.md` file, at the root of the folder of the project is mandatory
- Your code should use the `Betty` style. It will be checked using [`betty-style.pl`](https://github.com/holbertonschool/Betty/blob/master/betty-style.pl) and [`betty-doc.pl`](https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl)
- You are not allowed to use global variables
- No more than 5 functions per file
- You are not allowed to use the standard library. Any use of functions like `printf`, `puts`, etc… is forbidden
- You are allowed to use [`_putchar`](https://github.com/holbertonschool/_putchar.c/blob/master/_putchar.c)
- You don’t have to push `_putchar.c`, we will use our file. If you do it won’t be taken into account
- In the following examples, the `main.c` files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own `main.c` files at compilation. Our `main.c` files might be different from the one shown in the examples
- The prototypes of all your functions and the prototype of the function `_putchar` should be included in your header file called `main.h`
- Don’t forget to push your header file

## Tasks

<details>
<summary><a href="./0-isupper.c">0. isupper</a></summary><br>

Write a function that checks for uppercase character.

- Prototype: `int _isupper(int c);`
- Returns `1` if `c` is uppercase
- Returns `0` otherwise

FYI: The standard library provides a similar function: `isupper`. Run `man isupper` to learn more.

```bash
julien@ubuntu:~/0x04$ cat 0-main.c
#include "main.h"
#include <stdio.h>

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
    char c;

    c = 'A';
    printf("%c: %d\n", c, _isupper(c));
    c = 'a';
    printf("%c: %d\n", c, _isupper(c));
    return (0);
}
julien@ubuntu:~/0x04$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-isupper.c -o 0-isuper
julien@ubuntu:~/0x04$ ./0-isuper 
A: 1
a: 0
julien@ubuntu:~/0x04$ 
```

</details>

<details>
<summary><a href="./1-isdigit.c">1. isdigit</a></summary><br>

Write a function that checks for a digit (`0` through `9`).

- Prototype: `int _isdigit(int c)`;
- Returns `1` if `c` is a digit
- Returns `0` otherwise

FYI: The standard library provides a similar function: `isdigit`. Run `man isdigit` to learn more.

```bash
julien@ubuntu:~/0x04$ cat 1-main.c 
#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char c;

    c = '0';
    printf("%c: %d\n", c, _isdigit(c));
    c = 'a';
    printf("%c: %d\n", c, _isdigit(c));
    return (0);
}
julien@ubuntu:~/0x04$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-isdigit.c -o 1-isdigit
julien@ubuntu:~/0x04$ ./1-isdigit 
0: 1
a: 0
julien@ubuntu:~/0x04$ 
```
</details>

<details>
<summary><a href="./2-mul.c">2. Collaboration is multiplication</a></summary><br>

Write a function that multiplies two integers.

- Prototype: `int mul(int a, int b);`
```bash
julien@ubuntu:~/0x04$ cat 2-main.c
#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    printf("%d\n", mul(98, 1024));
    printf("%d\n", mul(-402, 4096));
    return (0);
}
julien@ubuntu:~/0x04$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-mul.c -o 2-mul
julien@ubuntu:~/0x04$ ./2-mul 
100352
-1646592
julien@ubuntu:~/0x04$ 
```

</details>