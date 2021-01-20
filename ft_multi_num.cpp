#include "mid_f.h"

int ft_multi_num(int value)
{
    int pr = 1;
    int _value = ft_abs(value);
    while (_value > 0)
    {
        pr *= _value % 10;
        _value /= 10;
    }
    return pr;
}
