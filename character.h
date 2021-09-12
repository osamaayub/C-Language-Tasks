#pragma once
#include<iostream>
#include<fstream>
#include<string.h>

using namespace std;
class character
{
private:
	char c;
	int key;
	bool capitalCheck;
	bool encryptionCheck;
public:
	character();
	
	character(character& obj);

	character(char);
	
	char getCharacter();
	
	void setcharacter(char);
	character& operator =(character);
	
	
	bool operator ==(char);
	
	bool operator !=(char);
	
	char operator +();
	char operator -();
	
	void operator *();
	//
	void operator~();
	};
ostream& operator<<(ostream& out, character& obj);
ifstream& operator>>(ifstream& read, character& obj);
ofstream& operator<<(ofstream& out, character& obj);
istream& operator>>(istream& out, character& obj);

