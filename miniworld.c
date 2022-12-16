#include "miniworld.h"

int main()
{
    t_miniworld *world;
    world = (t_miniworld *)malloc(sizeof(t_miniworld));
    init(world);

    for(int week; week < 4; ++week)
    {
        // printf("day = %d", world->day);
        for(int i = 0; i < world->day; ++i)
        {
            photosynthesis(world);
            awake(world);
            if(i % 2 == 0)
                ft_move();
            if(i % 3 == 0)
            {
                --world->grass;
                printf("frog eating a grass, grass - , %d\n", world->grass);
            }
        }
        for(int j = 0; j < world->night; ++j)
        {
            sleep(world);
            if(j % 2 == 0)
            {
                ++world->grass;
                printf("grass - %d\n", world->grass);
            }
        }
    }
}