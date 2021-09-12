#include<iostream>
#include<fstream>
using namespace std;
void read(int array[][4], ifstream &fin);
void display(int array[][4]);
void Rotate_2d_array(int array[][4], int Matrix[][4]);
void output(int Matrix[][4],ofstream &fout);
int main()
{
	
	int array[4][4] = { 0 };
	int Matrix[4][4] = { 0 };
	ifstream fin;
	ofstream fout;
	fout.open("output.txt", ios::out);
	fin.open("input.txt",ios::in);
	if (!fin.is_open())
	{
		cout << "file not found" << endl;
	}
	else
	{
		read(array, fin);
		display(array);
		Rotate_2d_array(array, Matrix);
		output(Matrix,fout);
	}
	fin.close(); 
	fout.close();
	return 0;
}
void read(int array[][4], ifstream &fin)
{
	for (int row = 0; row < 4; row++)
	{
		for (int col = 0; col < 4; col++)
		{
			fin >> array[row][col];
		}
	}
}
void display(int array[][4])
{
	cout << "Orignal array is:" << endl;
	for (int row = 0; row < 4; row++)
	{
		for (int col = 0; col < 4; col++)
		{
			cout << array[row][col] << " ";
		}
		cout << endl;
	}
}
void Rotate_2d_array(int array[][4], int Matrix[][4])
{
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			Matrix[j][4 - i - 1] = array[i][j];
		}
	}
}
void output(int Matrix[][4],ofstream &fout)
{
	cout << " Matrix after rotation is:" << endl;
	fout << " Matrix after rotation is:" << endl;
	for (int row = 0; row < 4; row++)
	{
		for (int col = 0; col < 4; col++)
		{
			cout << Matrix[row][col] << " "; 
			fout << Matrix[row][col] << " ";
		}	  
		fout << endl;
		cout << endl;
	}
}