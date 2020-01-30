# FT_PRINTF

4th C project for 42 school

This project consists in recoding the printf function of the libc.

## SUMMARY

- Recoding printf
- How to use it

## Recoding Printf

Printf is a function that writes output to stdout according to a *format* [(see man)](https://linux.die.net/man/3/printf)

The aim of this project is to partially reproduce this function.

### ft_printf can handle
* c s p conversions
* d i o u x X conversions with flags hh, h, l and ll
* f conversion with the flags l and L
* %%
* flags #0-+ and space
* precision and minimum field width

**NB:** The function is merged with the [libft](https://github.com/Clemzerdu75/Libft), a project I made earlier in my cursus. At compilation, a library is created named **libftprintf.a**.

You will find more informations about the functions created especially for ft_printf in the `./inc/libft.h` file.

## How to use it ?

- Run: `make`
- Go to: `cd examples`
- Run: `gcc  main.c ../libftprintf.a` (there will be a few warnings, that's normal! We're testing some undefined behaviors of the printf function)
- Run `./a.out`

**NB:** This main contains multiple examples to show you the extend of this function's capabilities.
