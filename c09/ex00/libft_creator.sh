#!/bin/sh

gcc -Wall -Werror -Wextra -c ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c
ar rc libft.a ft_putchar.o ft_swap.o ft_putstr.o ft_strlen.o ft_strcmp.o
ranlib libft.a

# void ft_putchar(char c);
# void ft_swap(int *a, int *b);
# void ft_putstr(char *str);
# int ft_strlen(char *str);
# int ft_strcmp(char *s1, char *s2);