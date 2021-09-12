#include "Complex_Number.h"
#include<iostream>
using namespace std;


Complex_Number::Complex_Number()
{
	Real = 0.0;
	Imaginary = 0.0;
}
Complex_Number::Complex_Number(double r, double I)
{
	Real = r;
	Imaginary = I;
}
void Complex_Number::Set_Real_Number(double real)
{
	Real = real;
}
void Complex_Number::Set_Imaginary_Number(double _Imaginary)
{
	Imaginary = _Imaginary;
}
double Complex_Number::get_real_no()const
{
	return Real;
}
double Complex_Number::get_Imaginary_no()const
{
	return Imaginary;
}
void Complex_Number::Display()
{
	cout << Real << "+" << Imaginary << "i" << endl;
}