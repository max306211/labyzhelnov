#include <math.h>
int findFirstElement(double eps)
{
	double end = 0;
	int u = 0;
	for (;;)
	{
		end += pow(-1., u) * ((u + 1) / (pow(2., u - 1)));
		++u;
		if (fabs(end) <= eps)
		{
			break;
		}
	}
	return u;
}