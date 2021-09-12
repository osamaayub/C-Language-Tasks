#include "character.h"

     character::character()
	{
		c = '\0';
		key = 0;
		capitalCheck = 0;
		encryptionCheck = 0;
	}
	character::character(character& obj)
	{

		this->c = obj.c;
		this->key = obj.key;
		this->encryptionCheck = obj.encryptionCheck;
		this->capitalCheck = obj.capitalCheck;

	}

	character::character(char a)
	{

		if (a >= 'A' || a <= 'Z')
		{
			c = a;
			key = 0;
			capitalCheck = 1;
			encryptionCheck = 0;
		}
		else
		{
			c = a;
			key = 0;
			capitalCheck = 0;
			encryptionCheck = 0;

		}
	}

	char character::getCharacter()
	{
		return c;
	}
	void character::setcharacter(char charact)
	{
		if (charact >= 'A' || charact <= 'Z')
		{
			c = charact;
			key = 0;
			capitalCheck = 1;
			encryptionCheck = 0;
		}
		else
		{
			c = charact;
			key = 0;
			capitalCheck = 0;
			encryptionCheck = 0;

		}

	}
	character& character::operator=(character ch)
	{
		c = ch.c;
		key = ch.key;
		encryptionCheck = ch.encryptionCheck;
		capitalCheck = ch.capitalCheck;
		
		return *this;
	}
	
	bool character::operator ==(char Pcharacter)
	{
		bool flag = 0;
		if (c == Pcharacter)
		{
			flag = 1;
			return 0;

		}
		else
		{
			return 0;
		}
	}
	bool character::operator !=(char Pcharacter)
	{
		bool flag = 0;
		if (c != Pcharacter)
		{
			flag = 1;
			return flag;

		}
		else
		{
			return flag;
		}
	}
	char character::operator +()
	{
		if (capitalCheck == 0)
		{
			if (c >= 'a' || c <= 'z')
			{
				c = c - 32;
				capitalCheck = 1;
		
			}

		}
		else
		{
			cout << "already capital\n";
		}
		return c;
	}
	char character::operator -()
	{
		if (capitalCheck == 1)
		{

			if (c >= 'A' || c <= 'Z')
			{
				c = c + 32;
				capitalCheck = 0;
				
				return c;
			}

		}
		else
		{
			cout << "already small\n";
		}
	}

	void character::operator *()
	{
		if (encryptionCheck == 0)
		{
			
			if (c >= 'a' || c <= 'z')
			{
				encryptionCheck = 1;
				key = (rand() % 26);
				c = c + key;
				if (c > 'z')
				{
					c = (c - 'z') + ('a' + 1);
				}
			}
			else if (c >= 'A' || c <= 'Z')
			{
				encryptionCheck = 1;
				key = (rand() % 26);
				c = c + key;
				if (c >'Z')
				{
					c = (c - 'Z') + ('A' + 1);
					encryptionCheck = 1;
				}
			}
		}
		else
		{
			cout << "already encrypted\n";
		}
	}
	//modulous is binrary thats why ~ for Decryption  
	void character::operator ~()
	{
		if (encryptionCheck == 1)
		{
			if (c >= 'a' || c <= 'z')
			{
				encryptionCheck = 0;
				c = c - key;
				if (c < 'a')
				{
					encryptionCheck = 0;
					c = c - 'z' + 'a' + 1;
				}
			}
			else if (c >= 'A' || c <= 'Z')
			{

				c = c - key;
				encryptionCheck = 0;
				if (c < 'A')
				{
					c = c - 'Z' + 'A' + 1;
					encryptionCheck = 0;
				}
			}
		}
		else
		{
			cout << "already dencrypted\n";
		}
	}

	
ostream& operator<<(ostream& out, character& obj)
{

	char ch = obj.getCharacter();
	out << ch;
	return out;
}
ifstream& operator>>(ifstream& read, character& obj)
{

	char chh;
	read.get(chh);
	obj.setcharacter(chh);


	return read;
}
ofstream& operator<<(ofstream& out, character& obj)
{

	char ch = obj.getCharacter();
	out << ch;
	return out;
}

istream& operator>>(istream& in, character& obj)
{
	char chh;
	in.get(chh);
	obj.setcharacter(chh);
	return in;
}

