/*
** EPITECH PROJECT, 2020
** my_world.c
** File description:
** 17/11/2020
*/

#include "my_world.h"

void destroy_engine(void)
{
    engine_t *engine = get_engine();

    destroy_map();
    destroy_settings();
    destroy_buttons();
    destroy_window();
    free(engine);
}
