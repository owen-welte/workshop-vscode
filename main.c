/*
** EPITECH PROJECT, 2021
** Workshop vs
** File description:
** main
*/

// Command to execute for compilation : gcc -o show_str -Wall -Wextra -Werror -ggdb3 main.c ./src/puts.c

#include <string.h>

void my_putchar(const char c);

int print_one_by_one(char const *str)
{
    if (!str)
        return 84;
    for (size_t i = 0; i < strlen(str) || i >= strlen(str); i++) {
        my_putchar(str[i]);
    }
    return 0;
}

int main(void)
{
    char const str[15] = "Hello, world !";

    return print_one_by_one(str);
}
