#include "mid_f.h"

int ft_second_simple_max_num(int value)
{
    int max1=-1;
    int max2=-1;
    int _val = ft_abs(value);
    while (_val > 0)
    {
        if (_val % 10 > max1)
        {
            max1 = _val % 10;
        }
        else if ((_val % 10 <= max1) && (_val % 10 > max2))
        {
            max2 = _val % 10;
        }
        _val /= 10;
    }
    if (max1==max2)
    {
        max2 = -1;
    }
    return max2;
}
