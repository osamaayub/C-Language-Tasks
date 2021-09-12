#include"Process.h"
#include<iostream>
using namespace std;


Process::Process()
{
	Process_ID = 0;
	Lines_of_code = 0;
}
Process::Process(const int p_ID, const int lines_of_code)
{
	Process_ID = p_ID;
	Lines_of_code = lines_of_code;
}

Process::Process(const Process&obj)
{
	Process_ID = obj.Process_ID;
	Lines_of_code = obj.Lines_of_code;
	totalLinesOfCode = obj.totalLinesOfCode;
	avgLinesOfCodePerProcess = obj.avgLinesOfCodePerProcess;
	maxLinesOfCode = obj.maxLinesOfCode;
	minLinesOfCode = obj.minLinesOfCode;
}
static void Set_process(const int &process_id)
{
	Process::Set_process(process_id);
}
static void  Set_Lines_of_code(const int &lines_code)
{
	Process::Set_Lines_of_code(lines_code);
}
static int get_process_id()
{
	return Process::get_process_id();
}
static int  get_Lines_of_code()
{
  return Process::get_Lines_of_code();
}

static int get_totalLinesOfcode()
{
 return Process::get_totalLinesOfcode();
}
static int  get_maxLinesOfCode()
{
	return Process::get_maxLinesOfCode();
}
static int get_avgLinesOfCodePerProces()
{
return Process::get_avgLinesOfCodePerProces();
}
static int get_minLinesOfCode()
{
	return Process::get_minLinesOfCode();
}
static int get_totalNoOfProcesses()
{
	return Process::get_totalNoOfProcesses();
}
int Process::get_process_ID()const
{
	return Process_ID;
}
int Process::get_lines_of_Code()const
{
	return Lines_of_code;
}
static void Print()
{
	 cout<<Process::get_totalLinesOfcode()<<endl;
	cout << Process::get_maxLinesOfCode()<<endl;
	cout << Process::get_avgLinesOfCodePerProces()<<endl;
	cout << Process::get_minLinesOfCode()<<endl;
}
Process::Process(const int &process_id, const int &lines_of_code)
{
	Lines_of_code = lines_of_code;
	totalLinesOfCode = totalLinesOfCode + Lines_of_code;
	if (Lines_of_code > maxLinesOfCode)
	{
		maxLinesOfCode = Lines_of_code;
	}
	if (Lines_of_code < minLinesOfCode)
	{
		minLinesOfCode = Lines_of_code;
	}
	totalNoOfProcesses++;
	avgLinesOfCodePerProcess = totalLinesOfCode / totalNoOfProcesses;
}








