#pragma once

#include "Contact.h"

class Prieten : public Contact
{

	string data_nastere;
	string adresa;
	string nr_telefon;

public:

	string GetAdresa()
	{
		return adresa;
	}
	string GetDataNastere()
	{
		return data_nastere;
	}
	string GetNrTelefon()
	{
		return nr_telefon;
	}
	string GetTip()
	{
		return "Prieten";
	}

};