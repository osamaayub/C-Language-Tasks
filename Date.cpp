#include "Date.h"
#include<iostream>
using namespace std; 


Date::Date()
{
	day = 0;
	month = 0;
	year = 0;
}
Date::Date(int d, int m, int y)
{
	day = d;
	month = m;
	year = y;
}
void Date::Set_Day(int d)
{
	day = d;
}
void Date::Set_month(int m)
{
	month = m;
}
void Date::Set_Year(int y)
{
	year = y;
}
int Date::get_day()const
{
	return day;
}
int Date::get_month()const
{
	return month;
}
int Date::get_year()const
{
	return year;
}
void Date::display()
{
	cout << "Day" << day << endl;
	cout << "month" << month << endl;
	cout << "year" << year << endl;
}



