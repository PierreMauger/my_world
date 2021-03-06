/*
** EPITECH PROJECT, 2020
** my_world.c
** File description:
** 17/11/2020
*/

#include "my_world.h"

void destroy_map(void)
{
    engine_t *engine = get_engine();

    destroy_map_3d(GET_MAP_3D(engine));
    destroy_map_3d(GET_MAP_3D_BASE(engine));
    destroy_map_2d(GET_MAP_2D(engine));
    destroy_map_2d(GET_MAP_2D_BASE(engine));
    destroy_map_ver(GET_MAP_COLOR(engine));
    destroy_map_ver(GET_MAP_TEX(engine));
    destroy_map_ver(GET_MAP_ORIGIN(engine));
    destroy_map_ver(GET_MAP_LINES(engine));
    destroy_color_2d();
    destroy_texture_2d();
    free(engine->map);
}

void destroy_map_3d(int **map)
{
    engine_t *engine = get_engine();

    for (int i = 0; i < GET_SET_MX(engine); i++)
        free(map[i]);
    free(map);
}

void destroy_map_2d(sfVector2f **map)
{
    engine_t *engine = get_engine();

    for (int i = 0; i < GET_SET_MX(engine); i++)
        free(map[i]);
    free(map);
}

void destroy_map_ver(sfVertexArray ***map)
{
    for (int i = 0; map[i]; i++) {
        for (int j = 0; map[i][j]; j++)
            sfVertexArray_destroy(map[i][j]);
        free(map[i]);
    }
    free(map);
}
