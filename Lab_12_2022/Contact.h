#pragma once
#include <string>

using namespace std;

class Contact
{

public:

	string nume;
	string GetNume()
	{
		return nume;
	}
	virtual string GetTip() = 0;

};