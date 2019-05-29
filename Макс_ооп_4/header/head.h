// OOPZI_task4.h : включаемый файл для стандартных системных включаемых файлов
// или включаемые файлы для конкретного проекта.

#pragma once
#include <math.h>
#include <iostream>
using namespace std;

class Complex
{
public:
	Complex();
	Complex(double x);
	Complex(double r, double phi);
	double Re() const;
	double Im() const;
	double R() const;
	double Phi() const;
	friend Complex operator+(const Complex& left, const Complex& right);
	friend Complex operator-(const Complex& left, const Complex& right);
	friend Complex operator*(const Complex& left, const Complex& right);
	friend Complex operator/(const Complex& left, const Complex& right);
	friend ostream& operator<<(ostream& stream, const Complex& data);
private:
	double module;
	double argument;
};
