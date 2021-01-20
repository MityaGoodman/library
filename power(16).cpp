#include "mid_f.h"

int power(int num, int exponent)
{
	int pr = 1;
	for (int i = 0; i < exponent; i++)
	{
		pr *= num;
	}
	return pr;
}
