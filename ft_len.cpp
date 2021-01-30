#include "mid_f.h"

int ft_len(string str)
{
    int counter = 0;
    for (int i = 0; str[i] > '\0'; i++)
    {
        counter++;
    }
    return counter;
}
