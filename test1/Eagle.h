#pragma once

#include "Animal.h"

class Eagle : public Animal
{
	string GetName()
	{
		return "Eagle";
	}
	bool IsAFish()
	{
		return false;
	}
	bool IsABird()
	{
		return true;
	}
	bool IsAMammal()
	{
		return false;
	}
};
