#pragma once
class Date
{
private:
	int day;
	int month;
	int year;
public:
	Date();
	Date(int d, int m, int y);
	void Set_Day(int d);
	void Set_month(int m);
	void Set_Year(int y);
	int get_day()const;
	int get_month()const;
	int get_year()const;
	void display();
};

