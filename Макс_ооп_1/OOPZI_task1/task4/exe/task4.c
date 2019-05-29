#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

#include <math.h>

void calc();

float x, y, result;

int main()
{
	printf("Enter x: ");
	scanf("%f", &x);
	printf("Enter y: ");
	scanf("%f", &y);
	calc();
	printf("f(%f,%f) = %f\n\r", x, y, result);;
	system("pause");
	return 0;
}

void calc()
{
	result = pow(cos(x) - cos(y), 2) - pow(sin(x) - sin(y), 2);
}