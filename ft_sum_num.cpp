#include "mid_f.h"

int ft_sum_num(int value)
{
    int sum = 0;
    int _value = ft_abs(value);
    while (_value > 0)
    {
        sum += _value % 10;
        _value/=10;
    }
    return sum;
}
