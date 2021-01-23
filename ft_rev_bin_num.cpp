#include "mid_f.h"

int ft_rev_bin_num(int bin)
{
    int value = 0;
    int flag = true;
    if (bin < 0)
    {
        bin = -bin;
        flag = !flag;
    }
    int length = ft_len_num(bin);
    for (int i = 0; bin > 0; i++)
    {
        value += (bin % 10) * power(2,i);
        bin /= 10;
    }
    if (!flag)
    {
        value = -value;
    }
    return value;
}
