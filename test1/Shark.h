#pragma once

#include "Animal.h"

class Shark : public Animal
{
	string GetName()
	{
		return "Shark";
	}
	bool IsAFish()
	{
		return true;
	}
	bool IsABird()
	{
		return false;
	}
	bool IsAMammal()
	{
		return false;
	}
};
