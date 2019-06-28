//A program which creates a cat and dog object
//which derive from an Animal class.

//Author@ Caleb Spindler


//#include "stdafx.h"
#include <iostream>
using namespace std;

class Animal
{
public:
	Animal()				//Default Animal constructor
	{
		cout << "Animal constructor executing.\n";
	}
	virtual ~Animal()		//Animal destructor
	{
		cout << "Animal destructor executing.\n";
	}
	void communicate()		//Animal communicate member function
	{
		cout << "Speak." << endl;
	}
};

class Dog : public Animal
{
public:
	Dog() : Animal()		//Default Dog constructor
	{
		cout << "Dog constructor executing.\n";
	}

	~Dog()					//Dog destructor
	{
		cout << "Dog destructor executing.\n";
	}
	void communicate()		//Dog communicate member function
	{
		cout << "Woof!" << endl;
	}
};

class Cat : public Animal
{
public:
	Cat() : Animal()		//Default Cat constructor
	{
		cout << "Cat constructor executing.\n";
	}

	~Cat()					//Cat destructor
	{
		cout << "Cat destructor executing.\n";
	}
	void communicate()		//Cat communicate member function
	{
		cout << "Meow!" << endl;
	}
};


int main()							//Calls to create objects and communicate function
{
	Animal genericAnimal;
	genericAnimal.communicate();

	Dog ralph;
	ralph.communicate();

	Cat fluffy;
	fluffy.communicate();

	Animal *myAnimal = new Dog;		//Dog pointer
	Animal *myAnimal2 = new Cat;	//Cat pointer
	delete myAnimal;				//Destroy the allocated memory
	delete myAnimal2;				//for both of the objects created
    return 0;
}

