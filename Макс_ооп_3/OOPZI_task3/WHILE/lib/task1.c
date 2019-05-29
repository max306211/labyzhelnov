#include <math.h>

double summ(int n)
{
	double end = 0;
	int i = 0;
	while (i < n)
	{
		end += pow(-1., i) * ((i + 1) / (pow(2., i - 1)));
		i++;
	}
	return end;
}