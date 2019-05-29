#include <math.h>
#include "head.h"
#include <iostream>
using namespace std;

Complex y(Complex z);
Complex tg(Complex z);

int main()
{
	double mod = 0, arg = 0;
	cout << "Enter module: ";
	cin >> mod;
	cout << "Enter argument: ";
	cin >> arg;
	Complex z = Complex(mod, arg);
	Complex result = y(z);
	cout << "z = " << z << "\r\ny(z) = " << result << "\r\n";
	system("pause");
	return 0;
}

Complex y(Complex z)
{
	return 2 + z * tg(z);
}

Complex tg(Complex z)
{
	double newre = sin(2 * z.Re()) / (cos(2 * z.Re()) + cosh(2 * z.Im()));
	double newim = sinh(2 * z.Im()) / (cos(2 * z.Re()) + cosh(2 * z.Im()));
	return Complex(sqrt(pow(newre, 2) + pow(newim, 2)), atan(newim / newre));
}

