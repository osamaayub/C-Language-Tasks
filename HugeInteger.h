#pragma once
#include <iostream>
using namespace std;


static const int size = 20;
//HugeInteger Class
class HugeInteger
{
public:
	HugeInteger(void); //constrctor
	void set_data(int *&ptr, const int size);

	void HugeInteger::input(int[size]); 
	void HugeInteger::output(void);

	bool isZero(void); 
	bool HugeInteger::Equal(HugeInteger other); 
	bool HugeInteger::Not_Equal(HugeInteger other); 
	bool HugeInteger::Greater_Than(HugeInteger other); 
	bool HugeInteger::Less_Than(HugeInteger other); 
	bool HugeInteger::Greater_Than_Equal(HugeInteger other); 
	bool HugeInteger::Less_Than_Equal(HugeInteger other); 

	HugeInteger HugeInteger::add(HugeInteger other); 
	HugeInteger HugeInteger::subtract(HugeInteger other); 
	HugeInteger HugeInteger::multiply(HugeInteger other); 
	HugeInteger HugeInteger::divide(HugeInteger other); 
	~HugeInteger(void); //destrctor
private:
	bool isPositive; //for suubstraction 
	int* hugeIntergerOne; //internal array
	
};