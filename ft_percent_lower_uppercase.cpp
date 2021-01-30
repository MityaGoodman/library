#include "mid_f.h"

double ft_percent_lower_uppercase(string str)
{

    double counter_small = 0;
    double counter_big = 0;
    double tmp;
    int length = ft_len(str);
    for (int i = 0; i < length; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z' && str[i] != ' ')
        {
            counter_big++;
        }
        else if (str[i] >= 'a' && str[i] <= 'z' && str[i] != ' ')
        {
            counter_small++;
        }
    }
    tmp = counter_big / counter_small * 100;
    return tmp;
}
