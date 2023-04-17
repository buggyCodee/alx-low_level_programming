# 0x0E. C - Structures, typedef

<p align="center">
    <img src="../.imgs/0x0E-1.jpg" width="500" height="500">
</p>

## Resources

- [0x0d. Structures.pdf](../resources/alx/0x0d-Structures.pdf)
- [struct (C programming language)](https://en.wikipedia.org/wiki/Struct_(C_programming_language))
- [Documentation: structures](https://github.com/holbertonschool/Betty/wiki/Documentation:-Data-structures)
- [0x0d. Typedef and structures.pdf](../resources/alx/0x0d-Typedef-and-structures.pdf)
- [typedef](https://publications.gbdirect.co.uk//c_book/chapter8/typedef.html)
- __Programming in C__ by Stephen Kochan - *Chapter 8, Working with Structures p163-189*
- [The Lost Art of C Structure Packing](http://www.catb.org/esr/structure-packing/) (*Advanced - not mandatory*)


## Learning Objectives

### General

- What are structures, when, why and how to use them
- How to use `typedef`


## Requirements

### General

- Allowed editors: `vi`, `vim`, `emacs`
- All your files will be compiled on Ubuntu 20.04 LTS using `gcc`, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
- All your files should end with a new line
- A `README.md` file, at the root of the folder of the project is mandatory
- Your code should use the `Betty` style. It will be checked using [betty-style.pl](https://github.com/holbertonschool/Betty/blob/master/betty-style.pl) and [betty-doc.pl](https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl)
- You are not allowed to use global variables
- No more than 5 functions per file
- The only C standard library functions allowed are `printf`, `malloc`, `free` and `exit`.
- In the following examples, the `main.c` files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own `main.c` files at compilation. Our `main.c` files might be different from the one shown in the examples
- Don’t forget to push your header file
- All your header files should be include guarded



## Tasks

<details>
<summary><a href="./dog.h">0. Poppy</a></summary><br>

<p align="center">
    <img src="../.imgs/0x0E-2.jpg" width="450" height="563">
</p>

Define a new type `struct dog` with the following elements:

- `name`, type = `char *`
- `age`, type = `float`
- `owner`, type = `char *`

```bash
julien@ubuntu:~/0x0d. structures, typedef$ cat 0-main.c
#include <stdio.h>
#include "dog.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    struct dog my_dog;

    my_dog.name = "Poppy";
    my_dog.age = 3.5;
    my_dog.owner = "Bob";
    printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog.name, my_dog.age);
    return (0);
}
julien@ubuntu:~/0x0d. structures, typedef$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c -o a
julien@ubuntu:~/0x0d. structures, typedef$ ./a 
My name is Poppy, and I am 3.5 :) - Woof!
julien@ubuntu:~/0x0d. structures, typedef$ 
```

</details>
