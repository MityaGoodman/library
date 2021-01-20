#include "mid_f.h"

int ft_sqrt(int value)
{
	int sq = -1;

	for (int i = 1; i < value / 2; i++)
	{
		if (i * i == value)
		{
			sq = i;
			return sq;
		}
	}
	return sq;
}
