#include "mid_f.h"

int ft_max_num(int value)
{
    int _val = ft_abs(value);
    int maximum = -1;
    while (_val > 0)
    {
        if (_val % 10 > maximum)
        {
            maximum = _val % 10;
        }
        _val /= 10;
    }
    return maximum;
}
