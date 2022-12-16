#include "miniworld.h"
void init(t_miniworld *world)
{
    world->day = 10;
    world->night = 10;
    world->oxygen = 42;
    world->grass = 100;
}

void photosynthesis(t_miniworld *world)
{
    world->oxygen += 40;
    printf("oxygen - %d\n", world->oxygen);
}

void ft_move()
{
    if (rand() > 0.5)
        printf("frog move to the left\n");
    else
        printf("frog move to the right\n");
}

void sleep(t_miniworld *world)
{
    world->oxygen -= 10;
    printf("oxygen - %d\n", world->oxygen);
}

void awake(t_miniworld *world)
{
    world->oxygen -= 20;
    printf("oxygen - %d\n", world->oxygen);
}