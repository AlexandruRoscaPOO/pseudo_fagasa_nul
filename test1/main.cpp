#include "Zoo.h"
#include "Shark.h" 
#include "Eagle.h"
#include "Lion.h" 
#include "Tiger.h"
#include "Cow.h"
#include <iostream>

int main()
{
Zoo Z;
Z += new Shark();
Z += new Eagle(); 
Z += new Tiger(); 
Z += new Lion();
Z += new Cow();


	std::cout << "Total animals in zoo:" << Z.GetTotalAnimals() << std::endl;
	for (auto a:Z.GetFishes())
		std::cout << "Fish: " << a->GetName() << std::endl;
	for (auto a :Z.GetBirds())
		std::cout << "Bird: " << a->GetName() << std::endl;
	for (auto a : Z.GetMammals())
		std::cout << "Mammal: "<< a->GetName() << std::endl;
	for (auto a : Z.GetFelines())
		std::cout << "Feline: " << a->GetName() << ", speed: "<< a->GetSpeed() << std::endl; 
	
	std::cout << "Zoo contains a tiger : "<< std::boolalpha << Z("Tiger") << std::endl;
	std::cout << "Zoo contains a monkey : "<< std::boolalpha << Z("Monkey") << std::endl;
		
	return 0;
}