#include <iostream>

using namespace std;

#include "Agenda.h"
#include "Prieten.h"
#include "Coleg.h"
#include "Cunoscut.h"

int main()
{
	Agenda Ag;

	Prieten* pri = new Prieten;

	Contact* p1 = (Contact*)pri;
	Contact* p2 = (Contact*)new Prieten;
	Contact* p3 = (Contact*)new Coleg;
	Contact* p4 = (Contact*)new Coleg;
	Contact* p5 = (Contact*)new Cunoscut;
	Contact* p6 = (Contact*)new Cunoscut;


	p1->nume = "Andrei";
	p2->nume = "Alexandru";
	p3->nume = "Ioana";
	p4->nume = "Vasile";
	p5->nume = "Gelu";
	p6->nume = "Laminatu";

	Ag.Adauga(p1);
	Ag.Adauga(p2);
	Ag.Adauga(p3);
	Ag.Adauga(p4);
	Ag.Adauga(p5);
	Ag.Adauga(p6);

	vector<Contact*> vec;

	vec = Ag.GetPrieteni();

	for (auto x : vec)
	{
		cout << x->GetNume() << endl;
		cout << x->GetTip() << endl;
	}

	Contact* test = Ag.Cauta("Laminatu");

	cout << test->GetNume() << endl;
	cout << test->GetTip() << endl;

	Ag.Sterge("Andrei");

	test = Ag.Cauta("Andrei");


}