#pragma once

#include "Contact.h"

class Coleg : public Contact
{

	string serviciu;
	string adresa;
	string nr_telefon;

public:

	string GetAdresa()
	{
		return adresa;
	}
	string GetServiciu()
	{
		return serviciu;
	}
	string GetNrTelefon()
	{
		return nr_telefon;
	}
	string GetTip()
	{
		return "Coleg";
	}

};