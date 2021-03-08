/*
** EPITECH PROJECT, 2020
** my_world.c
** File description:
** 17/11/2020
*/

#include "my_world.h"

void get_molette(void)
{
    engine_t *engine = get_engine();

    if (engine->event.type == sfEvtMouseWheelScrolled) {
        if (engine->event.mouseWheelScroll.delta < 0)
            GET_SET_RAD(engine) += 10;
        if (engine->event.mouseWheelScroll.delta > 0)
            if (GET_SET_RAD(engine) - 10 > 0)
                GET_SET_RAD(engine) -= 10;
    }
}
