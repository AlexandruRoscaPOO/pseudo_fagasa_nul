#pragma once

#include <string>

using namespace std;

class Entry
{
public:
	string name;
	Entry(string nume) : name(nume) {}
	Entry() {}
	string GetName()
	{
		return name;
	}
	virtual void Add(string toAdd) = 0;
	virtual bool Substract(int toSubstract) = 0;
	virtual void Print() = 0;
};