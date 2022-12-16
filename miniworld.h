#ifndef WORLD_H
#define WORLD_H

#include <stdio.h>
#include <stdlib.h>
typedef struct s_miniworld
{
    short day;
    short night;
    int oxygen;
    int grass;
}t_miniworld;

void    init(t_miniworld *world);
void    photosynthesis(t_miniworld *world);
void    ft_move();
void    sleep(t_miniworld *world);
void    awake(t_miniworld *world);

#endif