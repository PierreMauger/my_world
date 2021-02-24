/*
** EPITECH PROJECT, 2020
** my_hunter.c
** File description:
** 17/11/2020
*/

#ifndef MY_WORLD_H
#define MY_WORLD_H

#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include <SFML/System.h>
#include <SFML/Audio.h>
#include <SFML/Config.h>
#include <sys/queue.h>
#include <stdbool.h>
#include <limits.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include "my.h"

#define nbr_int_settings 7

typedef struct buttons_s {
    LIST_ENTRY(buttons_s) entries;
    sfRectangleShape *rectangle;
    sfText *text;
    sfVector2f pos;
} buttons_t;

typedef struct {
    int zoom;
    int angle_x;
    int angle_y;
    int pos_x;
    int pos_y;
    int max_x;
    int max_y;
} settings_t;

typedef struct {
    settings_t *settings;
    LIST_HEAD(, buttons_s) buttons;
} engine_t;

// CREATE_COMPONENT
void create_settings(void);
void create_buttons(void);
engine_t *get_engine(void);

// DESTROY_COMPONENTS
void destroy_settings(void);
void destroy_buttons(void);

#endif // MY_WORLD_H
