#pragma once

#include "Entry.h"
#include <iostream>

class IntegerData : public Entry
{
private:
	int value;

public:
	IntegerData(string nume, string valoare)
	{
		name = nume;
		value = stoi(valoare);
	}
	void Add(string toAdd) override
	{
		value = value + stoi(toAdd);
	}
	bool Substract(int toSubstract) override
	{
		value = value - toSubstract;
		return true;
	}
	void Print() override
	{
		cout << value << ";";
	}

};