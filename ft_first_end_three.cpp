#include "mid_f.h"

void ft_first_end_three(string str)
{
    if (ft_len(str) <= 5)
    {
        for (int i = 0; i < ft_len(str); i++)
        {
            cout << str[0];
        }
    }
    else
    {
        string s1 = "";
        string s2 = "";
        for (int i = 0; i < 3; i++)
        {
            s1+=str[i];
        }
        s2 += str[ft_len(str)-3];
        s2 += str[ft_len(str)-2];
        s2 += str[ft_len(str)-1];
        string s0 = s1 + s2;
        cout << s0;
    }

}
