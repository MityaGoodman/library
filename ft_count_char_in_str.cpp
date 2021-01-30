#include "mid_f.h"

int ft_count_char_in_str(char ch,string str)
{
    int length = ft_len(str);
    int counter = 0;
    for (int i = 0; i < length; i++)
    {
        if (str[i] == ch)
        {
            counter++;
        }
    }
    return counter;
}
