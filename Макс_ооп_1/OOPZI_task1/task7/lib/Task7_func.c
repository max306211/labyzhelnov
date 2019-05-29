#include <math.h>

#include "head.h"

float x, y, result;

void calc()

{

	printf("Enter x: ");

	scanf("%f", &x);

	printf("Enter y: ");

	scanf("%f", &y);

	result = pow(cos(x) - cos(y), 2) - pow(sin(x) - sin(y), 2);

}