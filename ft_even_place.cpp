#include "mid_f.h"

string ft_even_place(string str)
{
    string s = "";
    int length = ft_len(str);
    for (int i = 0; i < length; i++)
    {
        if (i % 2 == 1)
        {
            s += str[i];
        }
    }
    return s;
}
