#include "mid_f.h"

double ft_fabs(double value)
{
	if (value < 0)
	{
		return value * (-1.0);
	}
	else
	{
		return value;
	}
}

