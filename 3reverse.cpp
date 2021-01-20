#include "mid_f.h"

int chislo(int a)
{
	return a % 10 * 100 + a / 10 % 10 * 10 + a / 100;
}

