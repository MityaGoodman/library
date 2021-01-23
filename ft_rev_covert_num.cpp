#include "mid_f.h"

int ft_rev_covert_num(int num, int sys)
{
    int value = 0;
    int flag = true;
    if (num < 0)
    {
        num = -num;
        flag = !flag;
    }
    int length = ft_len_num(num);
    for (int i = 0; num > 0; i++)
    {
        value += (num % 10) * power(sys,i); // 65: 5 * 8 * 8
        num /= 10;
    }
    if (!flag)
    {
        value = -value;
    }
    return value;
}
