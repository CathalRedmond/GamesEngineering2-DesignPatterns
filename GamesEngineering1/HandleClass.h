#pragma once
#include <iostream>

class HandleClassCharacter
{
public:
	HandleClassCharacter() {}
	void Print()
	{
		std::cout << "Printing Character" << std::endl;
	}
};

class HandleToCharacter
{
public:
	HandleToCharacter() : character(new HandleClassCharacter()) {}
	HandleClassCharacter* operator->() { return character; }
	~HandleToCharacter()
	{
		if (character) delete character;
	}
private:
	HandleClassCharacter* character;
};

class HandleClass
{
public:
	HandleClass() {}
	void HandleClassMain();
};