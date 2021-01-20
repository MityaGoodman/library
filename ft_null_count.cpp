#include "mid_f.h"

 int ft_null_count(int value)
 {
     int _val = ft_abs(value);
     int counter = 0;
     while(_val > 0)
     {
         if (_val % 10 == 0)
         {
             counter++;
         }
         _val /= 10;
     }
     if (value == 0)
     {
         counter = 1;
     }
     return counter;
 }
