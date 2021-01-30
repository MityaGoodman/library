#include "mid_f.h"

int ft_max_char_on_end(string str)
{
    int counter = 0;
    int counter_max = 0;
    int length = ft_len(str);
    for (int i = 0; i < length; i++)
    {
        if ((str[i] >= '0') && (str[i] <= '9'))
        {
            counter++;
        }
        else
        {
            if (counter > counter_max)
            {
                counter_max = counter;
                counter = 0;
            }
        }
    }
    return counter_max;
}
