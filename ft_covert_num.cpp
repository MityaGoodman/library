#include "mid_f.h"

int ft_covert_num(int value, int sys)
{
    bool flag = true;
    if (value < 0)
    {
        value = -value;
        flag = false;
    }
    int num = 0;
    for (int i = 0; value > 0; i++)
    {
        num += (value % sys) * power(10,i);
        value /= sys;
    }
    if (!flag)
    {
        num = -num;
    }
    return num;
}
