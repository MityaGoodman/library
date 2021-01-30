#include "mid_f.h"

bool ft_equal_reverse(string str)
{
    int length = ft_len(str);
    string s1 = "";
    string s2 = "";
    if (length % 2 == 0)
    {
        for (int i = 0; i < length/2; i++)
        {
            s1 += str[i];
        }
        for (int i = length-1; i>=(length)/2; i--)
        {
            s2 += str[i];
        }
    }
    else
    {
        for (int i = 0; i < (length-1)/2; i++)
        {
            s1 += str[i];
        }
        for (int i = length-1; i>(length)/2; i--)
        {
            s2 += str[i];
        }
    }
    //cout << s1 << endl;
    //cout << s2 << endl;
    if (s1 == s2)
    {
        return true;
    }
    else
    {
        return false;
    }
}
