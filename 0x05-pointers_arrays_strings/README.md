# 0x05. C - Pointers, arrays and strings

## Concepts

For this project, we expect you to look at these concepts:

<details><summary>Pointers and arrays</summary>

### Pointers

<p align="center">
    <img src="https://intranet.alxswe.com/images/contents/low_level_programming/projects/pointers.jpg">
</p>

__A pointer is a variable which contains a memory address.__

### Types and memory

Every time you declare a variable, the computer will reserve memory for this variable. The memory reserved will then store the value of the variable.
Depending on the type of the variable, the computer will reserve more or less memory. The size of each type is generally defined in bytes (1 byte = 8 bits, each bit being 0 or 1). The sizes of the types also depend on the computer you are using. Here are the sizes of the most common types on most 64-bit Linux machines:

- char -> 1 byte
- int -> 4 bytes
- float -> 4 bytes

To determine the size of those types on your computer, you can use the `sizeof` operator.

```bash
ubuntu@ip-172-31-63-244:~/julien$ cat 0-main.c
#include <stdio.h>

/**
 * main - using sizeof to dynamically determine the size of types char, int and float
 *
 * Return: Always 0.
 */
int main(void)
{
   int n; 

   printf("Size of type 'char' on my computer: %lu bytes\n", sizeof(char));
   printf("Size of type 'int' on my computer: %lu bytes\n", sizeof(int));
   printf("Size of type 'float' on my computer: %lu bytes\n", sizeof(float));
   printf("Size of type of my variable n on my computer: %lu bytes\n", sizeof(n));
   return (0);
}
ubuntu@ip-172-31-63-244:~/julien$ gcc -Wall -Wextra -Werror -pedantic -std=gnu89 0-main.c -o sizeof && ./sizeof
Size of type 'char' on my computer: 1 bytes
Size of type 'int' on my computer: 4 bytes
Size of type 'float' on my computer: 4 bytes
Size of type of my variable n on my computer: 4 bytes
```

The size of a type will determine how many different possible values a variable of this type can hold. For instance, a `char` variable could only hold 256 (2^8, 8 being the number of bits) different values: from -128 to 127. And because the size of `int` is 4 bytes, so 32 bits, an `int` variable can hold 2^32 different possible values.

When we declare a variable, the computer will reserve the right amount of space for the variable in the memory (depending on its type). The space reserved for the variable is its address. And when we assign a value to this variable, the computer will store this value at its address.

```c
char c;  
```

<p align="center">
    <img src="https://intranet.alxswe.com/images/contents/low_level_programming/projects/char_c_declaration.png">
</p>

In this example, we simply declare a variable `c` of type `char`. The address of `c` is `8`. At this stage, you have not assigned a value to your variable `c`. So you do not know its value. It depends on what this memory address was used for before. You should never assumed that it is 0.

```c
char c;  

c = 'H';  
```

When we assign the value `'H'` to `c`, then `'H'` is stored at `c`‘s address.

<p align="center">
    <img src="https://intranet.alxswe.com/images/contents/low_level_programming/projects/char_c_H.png">
</p>

But you know that a byte can only store numbers. So actually, the byte will not hold exactly the letter 'H', but its ascii code, which is `72` (man ascii). So it really looks like this in memory:

<p align="center">
    <img src="https://intranet.alxswe.com/images/contents/low_level_programming/projects/char_c_72.png">
</p>

Since integers are stored within four bytes of memory, the same example with an `int` variable would look like this:

```c
int n;  

n = 98;  
```

<p align="center">
    <img src="https://intranet.alxswe.com/images/contents/low_level_programming/projects/int_n_98.png">
</p>

In this example, the address of the variable `n` is the smallest address of its bytes, so in this example, `26`.
Note that you do not control the address where the variable is stored. In order to know what is the address of a variable, you can use the “address-of unary operator” `&`.

```bash
ubuntu@ip-172-31-63-244:~/julien$ cat 1-main.c
#include <stdio.h>

/**
 * main - addresses of variables
 *
 * Return: Always 0.
 */
int main(void)
{
   char c;
   int n;

   printf("Address of variable 'c': %p\n", &c);
   printf("Address of variable 'n': %p\n", &n);
   return (0);
}
ubuntu@ip-172-31-63-244:~/julien$ gcc 1-main.c -o address && ./address
Address of variable 'c': 0x7ffc370ef13b
Address of variable 'n': 0x7ffc370ef13c
```

Note that:

- You can use `%p` to print addresses (the values of pointers) with `printf`
- This example will not compile with our regular flags `-Wall -Wextra -Werror -pedantic -std=gnu89`.\
 You’ll learn why later


### Storing memory addresses

Now that we know how to get an address, we can store it in a… pointer! :)

A pointer is simply the address of a piece of data in memory. A pointer variable is a variable that stores the address of that piece of data. Like any other variable it needs to be declared. General form is:

`var_type *var;`

- The `*` tells that the variable `var` is a pointer…
- … that points to a var_type.
- The value of `var` will be a memory address holding a value of type `var_type`

```c
int *ptr;  
```

In this example, `ptr` is the name of the variable, of type “pointer to an integer”. Anything that is on the left of the last `*` before the name of the variable will give you the type that the pointer points to.

```c
/* ptr2 is a pointer to a char */  
char *ptr2  
```

Because a pointer is like any other variable, the computer will also reserve the right amount of memory for it to store its value. On most 64 bits machines, the size of pointers is 8 bytes.

```bash
ubuntu@ip-172-31-63-244:~/julien$ cat 2-main.c
#include <stdio.h>

/**
 * main - printing the size, in bytes, of a pointer
 *
 * Return: Always 0.
 */
int main(void)
{
   int *p;

   printf("Size of pointer: %lu\n", sizeof(p));
   return (0);
}
ubuntu@ip-172-31-63-244:~/julien$ gcc -Wall -Werror -pedantic -Wextra -std=gnu89 2-main.c -o psize && ./psize
Size of pointer: 8
```
<p align="center">
    <img src="https://intranet.alxswe.com/images/contents/low_level_programming/projects/p.png">
</p>

To get the address where a pointer is stored, you can use the same technique as for any other variable: use the `&` operator.

```bash
ubuntu@ip-172-31-63-244:~/julien$ cat 3-main.c
#include <stdio.h>

/**
 * main - printing the address of a pointer
 *
 * Return: Always 0.
 */
int main(void)
{
  int *p;

  printf("Address of variable 'p': %p\n", &p);
  return (0);
}
ubuntu@ip-172-31-63-244:~/julien$ gcc 3-main.c -o paddress && ./paddress
Address of variable 'p': 0x7ffc9efc0de8
```

Ok, now let’s store the address of a variable into a pointer.

```c
int n;
int *p; 

n = 98;
p = &n;  
```
Because `&n` gives us the address of the variable `n`, the variable `p` now holds the address of the variable `n`: `p` points to `n`. If the variable `n`’s address were 26, then the value of our pointer `p` would be 26.

<p align="center">
    <img src="https://intranet.alxswe.com/images/contents/low_level_programming/projects/p_n.png">
</p>

```bash
ubuntu@ip-172-31-63-244:~/julien$ cat 4-main.c
#include <stdio.h>

/**
 * main - storing the address of variable into a pointer
 *
 * Return: Always 0.
 */
int main(void)
{
  int n;
  int *p;

  n = 98;
  p = &n;
  printf("Address of 'n': %p\n", &n);
  printf("Value of 'p': %p\n", p);
  return (0);
}
ubuntu@ip-172-31-63-244:~/julien$ gcc 4-main.c -o pn && ./pn
Address of 'n': 0x7ffc6f64b6d4
Value of 'p': 0x7ffc6f64b6d4
```

Remember that a pointer can only point to a variable of the type it is supposed to point to. The following example is incorrect:

```c
char c;  
int *p;  

p = &c;  
```

### Dereferencing

You could argue that so far, we could have used an integer (or a `unsigned long int` that is also 8 bytes long on most 64 bits computers) to store an address, since it is a number. The real power of pointers is that they can manipulate values stored at the memory address they point to. This is called dereferencing. To do this, you can use the dereference operator `*`.

```bash
ubuntu@ip-172-31-63-244:~/julien$ cat 5-main.c
#include <stdio.h>

/**
 * main - derefencing pointers
 *
 * Return: Always 0.
 */
int main(void)
{
   int n;
   int *p;

   n = 98;
   p = &n;
   printf("Value of 'n': %d\n", n);
   printf("Address of 'n': %p\n", &n);
   printf("Value of 'p': %p\n", p);
   *p = 402;
   printf("Value of 'n': %d\n", n);
   return (0);
}
ubuntu@ip-172-31-63-244:~/julien$ gcc 5-main.c -o dereference && ./dereference
Value of 'n': 98
Address of 'n': 0x7ffd9c1969a4
Value of 'p': 0x7ffd9c1969a4
Value of 'n': 402
```

Let’s walk through this example:

- int *p;: * is used in the declaration: p is a pointer to an integer, and so, after dereferencing, *p is an integer.
- `p = &n;`: `&` takes the address of `n`. So now `p` == `&n`, so `*p == n`

At this point, the memory looks like this:

<p align="center">
    <img src="https://intranet.alxswe.com/images/contents/low_level_programming/projects/p_n.png">
</p>

- `*p = 402;`: equivalent to `n` = `402`, since `p` == `&n`. Now `*p` == `402` so `n` == `402`.

This is what it looks like after this statement in memory:

<p align="center">
    <img src="https://intranet.alxswe.com/images/contents/low_level_programming/projects/p_n_402.png">
</p>

This works exactly the same for other types:

```bash
ubuntu@ip-172-31-63-244:~/julien$ cat 6-main.c
#include <stdio.h>

/**
 * main - derefencing pointers, example with int and char types
 *
 * Return: Always 0.
 */
int main(void)
{
   int n;
   int *p;
   char c;
   char *pp;

   c = 'H';
   pp = &c;
   n = 98;
   p = &n;
   printf("Value of 'c': %d ('%c')\n", c, c);
   printf("Address of 'c': %p\n", &c);
   printf("Value of 'pp': %p\n", pp);
   printf("Value of 'n': %d\n", n);
   printf("Address of 'n': %p\n", &n);
   printf("Value of 'p': %p\n", p);
   *p = 402;
   *pp = 'o';
   printf("Value of 'n': %d\n", n);
   printf("Value of '*pp': %d\n", *pp);
   printf("Value of 'c': %d ('%c')\n", c, c);
   printf("Value of '*pp': %d ('%c')\n", *pp, *pp);
   return (0);
}
ubuntu@ip-172-31-63-244:~/julien$ gcc 6-main.c -o dereference2 && ./dereference2
Value of 'c': 72 ('H')
Address of 'c': 0x7ffe57e9cc7b
Value of 'pp': 0x7ffe57e9cc7b
Value of 'n': 98
Address of 'n': 0x7ffe57e9cc7c
Value of 'p': 0x7ffe57e9cc7c
Value of 'n': 402
Value of '*pp': 111
Value of 'c': 111 ('o')
Value of '*pp': 111 ('o')
```

Note that `*` has a different meaning depending on the context (declaring vs dereferencing pointers).

- at declaration, it is used to declare a variable of type pointer to something. Example: `int *n;`
- when used inside the code it is used to dereference pointers. Example `*n = 98;`

### Functions parameters are passed by value

When we call a function in C, parameters are copied.

```c
/**
 * modif_my_param - this function does not modify n
 * @m: a useless integer
 *
 * Return: nothing.
 */
void modif_my_param(int m)
{
   m = 402;
}

/**
 * main - parameters are passed by value
 *
 * Return: Always 0.
 */
int main(void)
{
   int n;

   n = 98;
   modif_my_param(n);
   return (0);
}
```

In this example, when we call the `modif_my_param` function, the value of n (98) is copied inside a new variable m, only available in the `modif_my_param` function. Here is what it looks like in memory before the line `m = 402;` is executed:

<p align="center">
    <img src="https://intranet.alxswe.com/images/contents/low_level_programming/projects/n_m.png">
</p>

After `m = 402;` the memory looks like this:

<p align="center">
    <img src="https://intranet.alxswe.com/images/contents/low_level_programming/projects/nm402.png">
</p>

When we leave the function `modif_my_param` the variable `m` is destroyed and does not exist anymore. Its value though, stays in memory until this space is used by the program for another variable or something else.

<p align="center">
    <img src="https://intranet.alxswe.com/images/contents/low_level_programming/projects/nomorem.png">
</p>

This rule applies to any type of variable. But since the values of pointers are addresses, it is possible to modify a variable from outside the function it is declared, using a pointer.

```bash
ubuntu@ip-172-31-63-244:~/julien$ cat 7-main.c
#include <stdio.h>

/**
 * modif_my_param - set the integer to 402
 * @m: a pointer the integer we want to set to 402
 *
 * Return: nothing
 */
void modif_my_param(int *m)
{
   printf("Value of 'm': %p\n", m);
   printf("Address of 'm': %p\n", &m);
   *m = 402;
}

/**
 * main - how to change the value of a variable from outside the function
 * it is declared in, using a pointer.
 *
 * Return: Always 0.
 */
int main(void)
{
   int n;
   int *p;

   p = &n;
   n = 98;
   printf("Value of 'n' before the call: %d\n", n);
   printf("Address of 'n': %p\n", &n);
   printf("Value of 'p': %p\n", p);
   printf("Address of 'p': %p\n", &p);
   modif_my_param(p);
   printf("Value of 'n' after the call: %d\n", n);
   return (0);
}
ubuntu@ip-172-31-63-244:~/julien$ gcc 7-main.c -o modify_param && ./modify_param
Value of 'n' before the call: 98
Address of 'n': 0x7ffd70432494
Value of 'p': 0x7ffd70432494
Address of 'p': 0x7ffd70432498
Value of 'm': 0x7ffd70432494
Address of 'm': 0x7ffd70432478
Value of 'n' after the call: 402
```

In this example, here is what happens: Before the call to the function `modif_my_param`, the memory looks like this:

<p align="center">
    <img src="https://intranet.alxswe.com/images/contents/low_level_programming/projects/before_call.png">
</p>

When we call the function `modif_my_param`, the value of `p` is stored in a new variable called `m`:

<p align="center">
    <img src="https://intranet.alxswe.com/images/contents/low_level_programming/projects/call.png">
</p>

Since `m` stores the same memory address, it points to the same address, and so both `p` and `m` now point to `n`. Therefore, when we execute the line `*m = 402;` we modify the value of `n` and `n` now holds `402`.

<p align="center">
    <img src="https://intranet.alxswe.com/images/contents/low_level_programming/projects/n402.png">
</p>

When we leave the function `modif_my_param`, the variable `m` is destroyed, but `n`’s value is still `402`:

<p align="center">
    <img src="https://intranet.alxswe.com/images/contents/low_level_programming/projects/exitfunction.png">
</p>

Using the same format, try to represent in memory what is happening at every step of the following program. When done, add some `printfs` and compile to verify your hypothesis.

```c
/**
 * modif_my_char_var - Solve me
 *
 * Return: nothing.
 */
void modif_my_char_var(char *cc, char ccc)  
{
   *cc = 'o';
   ccc = 'l';
}

/**
 * main - Solve me
 *
 * Return: Always 0.
 */
int main(void)
{
   char c;
   char *p;

   p = &c;
   c = 'H';
   modif_my_char_var(p, c);
   return (0);
}
```

### Arrays

Arrays in C are contiguous memory areas that hold a number of values of the same type. Unlike some other languages, in C, all elements of an array have the same type. To declare an array we use this syntax: `type var_name[number_of_elements];`, where `number_of_elements` is the number of elements of type `type` that we need.

```c
int t[5];
```

In this example we declare an array of 5 integers. The computer will reserve a continuous space for 5 integers in memory. In memory, it would look like something like this.

<p align="center">
    <img src="https://s3.amazonaws.com/alx-intranet.hbtn.io/uploads/medias/2020/9/f39bb24c846b2d92767d7c46531cea7dc3fb11d2.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Credential=AKIARDDGGGOUSBVO6H7D%2F20230328%2Fus-east-1%2Fs3%2Faws4_request&X-Amz-Date=20230328T030440Z&X-Amz-Expires=86400&X-Amz-SignedHeaders=host&X-Amz-Signature=3b41c59d1f36908db57bf9e17c38c164d11e1a716313399db574dff1cbb471d8">
</p>

We access the different elements of an array this way: `t[0]` will access the first element, `t[1]` the second element, and so on.

```bash
ubuntu@ip-172-31-63-244:~/julien$ cat 9-main.c
#include <stdio.h>

/**
 * main - Accessing the different elements of an array
 *
 * Return: Always 0.
 */
int main(void)
{
   int a[5];

   a[0] = 98;
   a[1] = 198;
   a[2] = 298;
   a[3] = 398;
   a[4] = 498;
   printf("Value of a[0]: %d\n", a[0]);
   printf("Value of a[1]: %d\n", a[1]);
   printf("Value of a[2]: %d\n", a[2]);
   printf("Value of a[3]: %d\n", a[3]);
   printf("Value of a[4]: %d\n", a[4]);
   printf("Address of 'a[0]': %p\n", &(a[0]));
   printf("Address of 'a[1]': %p\n", &(a[1]));
   printf("Address of 'a[2]': %p\n", &(a[2]));
   printf("Address of 'a[3]': %p\n", &(a[3]));
   printf("Address of 'a[4]': %p\n", &(a[4]));
   return (0);
}
ubuntu@ip-172-31-63-244:~/julien$ gcc 9-main.c -o array && ./array
Value of a[0]: 98
Value of a[1]: 198
Value of a[2]: 298
Value of a[3]: 398
Value of a[4]: 498
Address of 'a[0]': 0x7ffcbca77dd0
Address of 'a[1]': 0x7ffcbca77dd4
Address of 'a[2]': 0x7ffcbca77dd8
Address of 'a[3]': 0x7ffcbca77ddc
Address of 'a[4]': 0x7ffcbca77de0
```

Memory would look like this before exiting the `main` function:

<p align="center">
    <img src="https://intranet.alxswe.com/images/contents/low_level_programming/projects/endmain.png">
</p>

### Pointers vs Arrays

In C, __an array is NOT a pointer__, the variables we declare as arrays do not hold a memory address.

When we declare an array, we use a name to refer to it, but it is only a name. Array names are identifiers that identify the entire array object. They are not pointers to anything. That is why we can not change the value of a 'variable’ which is an array.

```bash
julien@ubuntu:~/c/$ cat 10-main.c
/**
 * main - You can not modify a 
 *
 * Return: Always 0.
 */
int main(void)
{
    int a[5];
    int b;
    int c[5];

    a = 0; /* nop */
    a = &b; /* nop */
    a = c; /* nop */
    return (0);
}
julien@ubuntu:~/c/ideas_tests$ gcc 10-main.c
10-main.c: In function ‘main’:
10-main.c:12:4: error: assignment to expression with array type
  a = 0; /* nop */
    ^
10-main.c:13:4: error: assignment to expression with array type
  a = &b; /* nop */
    ^
10-main.c:14:4: error: assignment to expression with array type
  a = c; /* nop */
    ^
julien@ubuntu:~/c$ 
```
</details>

<details><summary>Data Structures</summary>

### What is a data structure?

Data structures, as the term implies, are a way of structuring data in order to efficiently store, find, use, and create data, depending on the task at hand. If data is a plate of food, data structures are your utensils (algorithms would be how to effectively use those utensils in this analogy). Just as you will likely select a spoon to eat a bowl of soup rather than a knife, you will learn over time to select and properly use data structures which fit the nature of the data you are working with. When you begin learning basic data structures such as arrays and linked lists, you will start to conceptualize how data is stored, searched, and edited, and what these operations will contribute to the space/time complexity of your program at runtime (this will make more sense once you start to learn about Big O notation). As you continue to learn more complex data structures, you may notice that you need to think more abstractly and deliberately in order to properly implement them. But with patience and practice you will begin to see patterns emerge that will allow you to intuitively see which situation calls for which data structure, just as you know to pick up a spoon when you see a bowl of soup.

### References:
\
Basics (Read deep into either for explanations of common data structures):

[Tutorials Point](https://www.tutorialspoint.com/data_structures_algorithms/data_structures_basics.htm)

[Geeks for Geeks](https://www.geeksforgeeks.org/data-structures/)

How to Select the Appropriate Data Structure:

[Career Drill](https://www.careerdrill.com/blog/coding-interview/choosing-the-right-data-structure-to-solve-problems/)

</details>

<br><br>

<p align="center">
    <img src="https://s3.amazonaws.com/intranet-projects-files/holbertonschool-low_level_programming/216/IMG_2410.JPG">
</p>

<br>

## Resources

- [C - Arrays](https://www.tutorialspoint.com/cprogramming/c_arrays.htm)
- [C - Pointers](https://www.tutorialspoint.com/cprogramming/c_pointers.htm)
- [C - Strings](https://www.tutorialspoint.com/cprogramming/c_strings.htm)
- [Memory Layout](https://aticleworld.com/memory-layout-of-c-program/)


## Learning Objectives

### General

- What are pointers and how to use them
- What are arrays and how to use them
- What are the differences between pointers and arrays
- How to use strings and how to manipulate them
- Scope of variables

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


## More Info

You do not need to learn about pointers to functions, pointers to pointers, multidimensional arrays, arrays of structures, `malloc` and `free` - yet.


---

## Tasks


