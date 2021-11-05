/*
** EPITECH PROJECT, 2021
** Workshop VS
** File description:
** puts
*/

#include <unistd.h>

void my_putchar(const char c)
{
    write(1, &c, 1);
}