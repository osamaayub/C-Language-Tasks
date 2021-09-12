#pragma once
class Complex_Number
{
private:
	double Real;
	double Imaginary;
public:
	Complex_Number();
	Complex_Number(double r, double I);
	void Set_Real_Number(double real);
	void Set_Imaginary_Number(double Imaginary); 
	double get_real_no()const;
	double get_Imaginary_no()const;
	void Display();
};

