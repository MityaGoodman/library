#include "mid_f.h"

int ft_find_str(string str1,string str2)
{
    bool flag = false;
    int length1 = ft_len(str1);
    int length2 = ft_len(str2);
    string s = "";
    int iter = -1;
    for (int i = 0; i < length1; i++)
    {
        s = "";
        for (int j = i; j < length2 + i; j++)
        {
            s += str1[j];
        }
        if ((s == str2) && (flag == false))
        {
            flag = true;
            iter = i;
        }
    }
    if (flag)
    {
        return iter;
    }
    else
    {
        return -1;
    }
}
