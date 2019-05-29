#include <math.h>
void print(int n, int k)
{
	double end = 0; int j = 1;
	int i = 0;
	do
	{
		end += pow(-1., i) * ((i + 1) / (pow(2., i - 1)));

		if (i == (k*j))
		{
			j++;
			i++;
			continue;
		}
		i++;
		printf("%lf ", end);
	} while (i <= n);
	printf("\n");
}