#include "mid_f.h"

int ft_oct_num(int value)
{
    int oct = 0;
    bool flag = true;
    if (value < 0)
    {
        value = -value;
        flag = false;
    }
    for (int i = 0; value > 0; i++)
    {
        oct += (value % 8) * power(10,i);
        value /= 8;
    }
    if (!flag)
    {
        oct = -oct;
    }
    return oct;
}
