#pragma once

#include "Entry.h"
#include <iostream>

class StringData : virtual public Entry
{
private:
	string value;

public:
	StringData(string nume, string valoare)
	{
		name = nume;
		value = valoare;
	}

	void Add(string toAdd) override
	{
		value.append(toAdd);
	}
	bool Substract(int toSubstract) override
	{
		if (value.size() <= toSubstract)
		{
			cout << "StringData: len(" << value << ") < " << toSubstract << endl;
			return false;
		}

		value.resize(value.size() - toSubstract);

		return true;
	}
	void Print() override
	{
		cout << value << ";";
	}

};