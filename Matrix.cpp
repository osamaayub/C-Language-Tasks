#include<iostream>
#include<fstream>
using namespace std;
void Read(int Matrix[][4], ifstream &fin);
void display(int Matrix[][4]);

int main()
{
	int Matrix[4][4] = { 0 };
	int array[4] = { 0 };
	ifstream fin;
	fin.open("input.txt", ios::in);
	if (!fin.is_open())
	{
		cout << "file not found" << endl;
	}
	else
	{
		Read(Matrix, fin);
		display(Matrix);
	}
	cout << "Enter the values in array:" << endl;
	for (int i = 0; i < 4; i++)
	{
		if (array[i] == -99)
		{
			break;
		}
		cin >> array[i];
	}
	fin.close();
	return 0;
}
void Read(int Matrix[][4], ifstream &fin)
{
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			fin >> Matrix[i][j];
		}
	}
}
void display(int Matrix[][4])
{
	cout << "Orignal array is:" << endl;
	for (int row = 0; row < 4; row++)
	{
		for (int col = 0; col < 4; col++)
		{
			cout << Matrix[row][col] << " ";
		}
		cout << endl;
	}
}
