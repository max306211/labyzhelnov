//Вариант 9
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>

int main()
{
	float x = 1, y = 1;
	float fx = pow(cos(x) - cos(y), 2) - pow(sin(x) - sin(y), 2);
	printf("f(%f,%f) = %f\n\r", x, y, fx);
	printf("Enter x: ");
	scanf("%f", &x);
	printf("Enter y: ");
	scanf("%f", &y);
	fx = pow(cos(x) - cos(y), 2) - pow(sin(x) - sin(y), 2);
	printf("f(%f,%f) = %f\n\r", x, y, fx);

	system("pause");
	return 0;
}
