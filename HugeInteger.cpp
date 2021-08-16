#include<iostream>
#include"HugeInteger.h"
using namespace std;
HugeInteger::HugeInteger()
{
	arry = new int[size];

}
 istream  &operator >>(istream &is, HugeInteger &obj)
{

	cout << "Please enter the number between 0-40" << endl;
	for (int i = 0; i < size; i++)
	{
		is >> obj.arry[i];
	}
	return is;
}
ostream &operator <<(ostream &os, const HugeInteger &obj)
{



	
	 os << endl;
	 for (int i = 0; i < size; i++)
	 {
		 os << obj.arry[i]<<"  ";
	 }
	 return os;
	 
 }

HugeInteger &HugeInteger::operator*(const HugeInteger &obj)
{
	HugeInteger *obj0 = new HugeInteger   ;
	for (int i = 0; i < size; i++)
	{
		
		(*obj0).arry[i] = this->arry[i] * obj.arry[i];

	}
	return (*obj0);

}
HugeInteger &HugeInteger::operator / ( const HugeInteger &obj)
{
	HugeInteger *obj0 = new HugeInteger;
	int temp = 0;
	for (int i = 0; i < size; i++)
	{
		if (this->arry[i] < obj.arry[i])
		{
			temp = obj.arry[i];
			obj.arry[i] = this->arry[i];
			this->arry[i] = temp;
			(*obj0).arry[i] = this->arry[i] / obj.arry[i];
		}
		else
		{


			(*obj0).arry[i] = this->arry[i] / obj.arry[i];
		}
	}
	return (*obj0);

}

 HugeInteger::~HugeInteger()
{
	 delete [] this->arry;
	 this->arry = nullptr;
}