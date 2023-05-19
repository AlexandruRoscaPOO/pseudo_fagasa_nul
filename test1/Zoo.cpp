#include "Zoo.h"


int Zoo::GetTotalAnimals()
{
	return animals.size();
}

void Zoo::operator+=(Animal* animal)
{
	animals.push_back(animal);
}

bool Zoo::operator()(string nume)
{

    for (Animal* animal : animals)
    {
        if (animal->GetName() == nume)
        {
            return true;
        }
    }
    return false;

 
}

vector<Animal*> Zoo::GetFishes()
{
    vector<Animal*> fishes;

    for (Animal* animal : animals)
    {
        if (animal->IsAFish())
        {
            fishes.push_back(animal);
        }
    }

    return fishes;
}

vector<Animal*> Zoo::GetBirds()
{
    vector<Animal*> birds;

    for (Animal* animal : animals)
    {
        if (animal->IsABird())
        {
            birds.push_back(animal);
        }
    }

    return birds;
}

vector<Animal*> Zoo::GetMammals()
{
    vector<Animal*> mam;

    for (Animal* animal : animals)
    {
        if (animal->IsAMammal())
        {
            mam.push_back(animal);
        }
    }

    return mam;
}

vector<Feline*> Zoo::GetFelines()
{
    vector<Feline*> fel;

    for (Animal* animal : animals)
    {
        if (dynamic_cast<Feline*>(animal) != nullptr)
        {
            fel.push_back(dynamic_cast<Feline*>(animal));
        }
    }

    return fel;
}
