#include <math.h>
void print(int n, int k)
{
	double end = 0; int j = 1;
	for (int i = 0; i <= n; i++)
	{
		end += pow(-1., i) * ((i + 1) / (pow(2., i - 1)));

		if (i == (k*j))
		{
			j++;
			continue;
		}
		printf("%lf ",end);
	}
	printf("\n");
}
