#include <math.h>
_Bool isInArea(double x, double y)
{
	//������� 10.
	/*	|////
	____|////
	////|////
	////|////
	*/
	if ((x<0)&(y>0))
	{
		return 0;
	}
	else
	{
		if (fabs(x) <= 1 & fabs(y) <= 1)
		{
			//����� �������� � �������
			return 1;
		}

	}
	return 0;
}