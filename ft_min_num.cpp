#include "mid_f.h"

int ft_min_num(int value)
{
    int _val = ft_abs(value);
    int minimum = 10;
    while (_val > 0)
    {
        if (_val % 10 < minimum)
        {
            minimum = _val % 10;
        }
        _val /= 10;
    }
    return minimum;
}
