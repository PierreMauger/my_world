/*
** EPITECH PROJECT, 2020
** my_hunter.c
** File description:
** 17/11/2020
*/

#include "my_world.h"

int main(int argc, char **argv)
{
    if (argc > 2)
        return 84;
    srand(time(NULL));
    create_engine();
    init_elem();
    start_engine();
    destroy_engine();
    return 0;
}
