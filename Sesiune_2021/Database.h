#pragma once

#include <vector>
#include "Entry.h"
#include <iostream>

class Database
{
	vector<Entry*> entries;

public:
	Database& operator+=(Entry* c)
	{
		entries.push_back(c);
		return *this;
	}
	Database& operator-=(string nume)
	{
		vector<Entry*> entriess;

		for(auto x : entries)
			if (x->GetName() != nume)
			{
				entriess.push_back(x);
			}
		
		entries.clear();
		entries = entriess;

		return *this;
	}
	vector<Entry*>::iterator begin()
	{
		return entries.begin();
	}
	vector<Entry*>::iterator end()
	{
		return entries.end();
	}
	void Print()
	{
		for (auto x : entries)
		{
			cout << x->name << " = ";
			x->Print();
		}
		cout << endl;
	}

};