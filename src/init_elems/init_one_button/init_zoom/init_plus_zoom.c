/*
** EPITECH PROJECT, 2020
** set_map.c
** File description:
** 17/11/2020
*/

#include "my_world.h"

void init_plus_zoom_rect(engine_t *engine, buttons_t *button,
sfVector2f rect_size)
{
    button->pos = (sfVector2f){
        GET_WINDOW_SIZE(engine).x - rect_size.x - MARGE,
        MARGE
    };
    sfRectangleShape_setPosition(button->rectangle, button->pos);
}

void init_plus_zoom_text(buttons_t *button,
sfVector2f rect_size)
{
    button->str_text = my_strdup("Increase Zoom");
    sfText_setString(button->text, button->str_text);
    sfText_setOrigin(button->text, (sfVector2f){
        sfText_getGlobalBounds(button->text).width / 2,
        sfText_getGlobalBounds(button->text).height / 2 + MARGE / 2
    });
    sfText_setPosition(button->text, (sfVector2f){
        button->pos.x + rect_size.x / 2,
        button->pos.y + rect_size.y / 2
    });
}

void init_plus_zoom(buttons_t *button)
{
    engine_t *engine = get_engine();
    sfVector2f rect_size = {0};

    rect_size = sfRectangleShape_getSize(button->rectangle);
    button->act_funct = increase_zoom;
    init_plus_zoom_rect(engine, button, rect_size);
    init_plus_zoom_text(button, rect_size);
}


