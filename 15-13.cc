#include<string>
#include<iostream>
using namespace std;

class Pet
{
	public:
		virtual void print();
		string name;
};

class Dog:public Pet
{
	public:
		virtual void print();
		string breed;
};

int main()
{
	Dog vDog;
	Pet vPet;

	vDog.name="Tiny";
	vDog.breed="Great Dane";
	vPet=vDog;

	Dog *pDog;
	pDog=new Dog;
	pDog->name="Tiny";
	pDog->breed="Great Done";

	Pet *pPet;
	pPet=pDog;
	pPet->print();
	pDog->print();

	return 0;
}

void Dog::print()
{
	cout<<name<<" "<<breed<<endl;
}

void Pet::print()
{
	cout<<name<<endl;
}
