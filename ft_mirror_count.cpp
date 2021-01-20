#include "mid_f.h"

int ft_mirror_count(int value)
{
    int counter = 0;
    for (int i = 0; i < value; i++)
    {
        if (ft_mirror_num(i))
        {
            counter++;
        }
    }
    return counter;
}
