#include "mid_f.h"

int ft_rev_num(int value)
{
    int length = ft_len_num(value);
    int num = 0;
    bool flag = true;
    if (value < 0)
    {
        value = -value;
        flag = false;
    }

    /*for (int i = length; i > 1;i--)
    {
        num += (value % 10) * power(10,i);
        value /= 10;
    }*/
    int i = length-1;
    while (value > 0)
    {
        num += (value % 10) * power(10,i);
        i--;
        value /= 10;
    }
    if (!flag)
    {
        num = -num;
    }
    return num;
}
