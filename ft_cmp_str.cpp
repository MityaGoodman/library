#include "mid_f.h"

string ft_cmp_str(string str1,string str2,int num)
{
    string s = "";
    int length1 = ft_len(str1);
    int length2 = ft_len(str2);
    for (int i = 0; i < num; i++)
    {
        s += str1[i];
    }
    s += str2;
    for (int i = num; i < length1; i++)
    {
        s += str1[i];
    }
    return s;
}
