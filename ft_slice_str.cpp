#include "mid_f.h"

string ft_slice_str(string str, int start, int end)
{
    string s = "";
    int length = ft_len(str);
    if (end > length)
    {
        end = length;
    }
    for (int i = start; i < end; i++)
    {
        s += str[i];
    }
    return s;
}
