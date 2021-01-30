#include "mid_f.h"

string ft_reverse_str(string str)
{
    string s = "";
    int length = ft_len(str);
    for (int i = length; i > -1; i--)
    {
        s += str[i];
    }
    return s;
}
