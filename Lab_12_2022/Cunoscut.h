#pragma once

#include "Contact.h"

class Cunoscut : public Contact
{

	string nr_telefon;

public:

	string GetNrTelefon()
	{
		return nr_telefon;
	}
	string GetTip()
	{
		return "Cunoscut";
	}

};