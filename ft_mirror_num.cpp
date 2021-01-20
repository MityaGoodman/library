#include "mid_f.h"

bool ft_mirror_num(int value)
{
    int _val = value;
    int temp = 0;
    while (value > 0)
    {
        int digit = value % 10;
        temp = temp * 10 + digit;
        value /= 10;
    }
    if (_val == temp)
    {
        return true;
    }
    else
    {
        return false;
    }
}
