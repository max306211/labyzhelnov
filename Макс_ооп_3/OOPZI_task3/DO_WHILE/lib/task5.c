#include <math.h>

int findFirstNegativeElement(double eps)
{
	double end = 0;
	int u = 0;
	do
	{
		end += pow(-1., u) * ((u + 1) / (pow(2., u - 1)));
		++u;
		if (fabs(end) <= eps
			& end < 0)
		{
			break;
		}
	} while (1);
	return u;
}