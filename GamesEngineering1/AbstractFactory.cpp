#include "AbstractFactory.h"

void AbstractFactory::AbstractFactoryMain()
{
	Factory* factory = new CharacterFactory;
	std::vector<Character*> characters;
	characters.push_back(factory->CreatePlayer());
	characters.push_back(factory->CreateOpponents());

	for (int index = 0; index < characters.size(); index++)
	{
		characters[index]->draw();
	}

	delete factory;
	for (int index = 0; index < characters.size(); index++)
	{
		delete(characters[index]);
	}
}
