/*
** EPITECH PROJECT, 2020
** change_size.c
** File description:
** 17/11/2020
*/

#include "my_world.h"

void resize_map(void)
{
    engine_t *engine = get_engine();

    GET_MAP_3D(engine) = intdup_2d(GET_MAP_3D(engine));
    GET_MAP_3D_BASE(engine) = intdup_2d(GET_MAP_3D_BASE(engine));
    GET_MAP_2D(engine) = vectordup_2d(GET_MAP_2D(engine));
    GET_MAP_2D_BASE(engine) = vectordup_2d(GET_MAP_2D_BASE(engine));
    GET_COLOR_2D(engine) = color_dup_2d(GET_COLOR_2D(engine));
    GET_TEX_2D(engine) = texture_dup_2d(GET_TEX_2D(engine));
    GET_MAP_COLOR(engine) = vertexdup_2d();
    GET_MAP_TEX(engine) = vertexdup_2d();
    GET_MAP_LINES(engine) = linedup_2d();
    GET_MAP_ORIGIN(engine) = vertexdup_2d();
    calc_map_vec(GET_MAP_2D(engine), GET_MAP_3D(engine));
    calc_map_vec(GET_MAP_2D_BASE(engine), GET_MAP_3D_BASE(engine));
    init_map_color(GET_MAP_COLOR(engine), GET_MAP_2D(engine));
    init_map_tex(GET_MAP_TEX(engine), GET_MAP_2D(engine));
    init_map_tex(GET_MAP_ORIGIN(engine), GET_MAP_2D_BASE(engine));
    init_map_line();
}

void increase_map_x(void)
{
    engine_t *engine = get_engine();

    destroy_array();
    GET_SET_MX(engine) += 1;
    resize_map();
}

void decrease_map_x(void)
{
    engine_t *engine = get_engine();

    if (GET_SET_MX(engine) > 1) {
        destroy_array();
        GET_SET_MX(engine) -= 1;
        resize_map();
    }
}

void increase_map_y(void)
{
    engine_t *engine = get_engine();

    destroy_array();
    GET_SET_MY(engine) += 1;
    resize_map();
}

void decrease_map_y(void)
{
    engine_t *engine = get_engine();

    if (GET_SET_MY(engine) > 1) {
        destroy_array();
        GET_SET_MY(engine) -= 1;
        resize_map();
    }
}
