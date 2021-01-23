#include "mid_f.h"

int ft_bin_num(int value)
{
    int bin = 0;
    bool flag = true;
    if (value < 0)
    {
        value = -value;
        flag = false;
    }
    for(int i = 0; value > 0; i++)
    {
        bin += (value % 2) * power(10,i);
        value /= 2;
    }
    if (flag == false)
    {
        bin = -bin;
    }
    return bin;
}
