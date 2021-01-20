#include "mid_f.h"

int ft_len_num(int value)
{
    int counter = 0;
    int _value = ft_abs(value);
    while (_value > 0)
    {
        _value/=10;
        counter++;
    }
    return counter;
}
