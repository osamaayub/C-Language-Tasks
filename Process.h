#pragma once   
#include<iostream>
using namespace std;
class Process
{
private:
	 int Process_ID;
	 int Lines_of_code;
	 static int totalLinesOfCode;
	 static int maxLinesOfCode;
	 static int minLinesOfCode;
	 static int avgLinesOfCodePerProcess;
	 static int totalNoOfProcesses;
public:
	Process();
	Process(const int p_ID, int lines_of_code );//parametrized  default constructor	   
	Process(const Process&obj);	 //copy constructor
	Process(const int &a, const int &b);
	//setters
	  void Set_process( const int &process_id);
	  void Set_Lines_of_code(const int &lines_code);
	 //getters
	  static int get_totalLinesOfcode();
	 static int  get_maxLinesOfCode();
	 static int get_avgLinesOfCodePerProces();
	 static int get_minLinesOfCode();
	 static int get_totalNoOfProcesses();
	 int get_process_ID()const;
	 int get_lines_of_Code()const;
	 //print all static attributes
	 static void Print();
	 friend void print(Process**&obj);

};

