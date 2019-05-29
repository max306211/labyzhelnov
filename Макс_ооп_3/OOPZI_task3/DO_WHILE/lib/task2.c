#include <math.h>

double summ2(double eps)
{
	double end = 0, elem = 0;
	int u = 0;
	do
	{
		elem = pow(-1., u) * ((u + 1) / (pow(2., u - 1)));
		end += elem;
		++u;
	} while (fabs(elem) >= eps);
	return end;
}