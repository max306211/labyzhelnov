#include <math.h>
double summ(int n)
{
	double end = 0;
	for (int i = 0; i < n; i++)
	{
		end += pow(-1., i) * ((i + 1) / (pow(2., i - 1)));
	}
	return end;
}