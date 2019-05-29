#include <math.h>
extern float x, y, result;
void calc()
{
	result = pow(cos(x) - cos(y), 2) - pow(sin(x) - sin(y), 2);
}