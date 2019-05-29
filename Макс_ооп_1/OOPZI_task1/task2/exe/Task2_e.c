
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

#include <math.h>

float calc(float x, float y)
{
	return pow(cos(x) - cos(y), 2) - pow(sin(x) - sin(y), 2);
}
int main()
{
	float x, y;
	printf("Enter x: ");
	scanf("%f", &x);
	printf("Enter y: ");
	scanf("%f", &y);
	printf("f(%f,%f) = %f\n\r", x, y, calc(x, y));
	system("pause");
	return 0;

}