#include "mid_f.h"

int ft_rev_oct_num(int oct)
{
    int value = 0;
    int flag = true;
    if (oct < 0)
    {
        oct = -oct;
        flag = !flag;
    }
    int length = ft_len_num(oct);
    for (int i = 0; oct > 0; i++)
    {
        value += (oct % 10) * power(8,i); // 65: 5 * 8 * 8
        oct /= 10;
    }
    if (!flag)
    {
        value = -value;
    }
    return value;
}
