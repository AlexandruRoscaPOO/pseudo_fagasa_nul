#pragma once

#include <vector>
#include "Contact.h"

class Agenda
{
	vector<Contact*> list;

public:

	Contact* Cauta(string nume)
	{
		for (auto contact : list)
		{
			if (contact->GetNume() == nume)
				return contact;
		}

	}
	vector<Contact*> GetPrieteni()
	{
		
		vector<Contact*> prieteni;

		for (auto contact : list)
		{
			if (contact->GetTip() == "Prieten")
				prieteni.push_back(contact);
		}

		return prieteni;

	}
	void Sterge(string nume)
	{

		vector<Contact*> sub_list;

		for (auto contact : list)
		{
			if (contact->GetNume() != nume)
				sub_list.push_back(contact);
		}

		list.clear();
		list = sub_list;
	}
	void Adauga(Contact* c)
	{
		list.push_back(c);
	}

};