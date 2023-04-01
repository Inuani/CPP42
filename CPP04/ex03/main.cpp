#include <iostream>
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include "AMateria.hpp"
#include "ICharacter.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

int main( void )
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	AMateria* iceMateria1 = src->createMateria("ice");
	AMateria* cureMateria1 = src->createMateria("cure");
	AMateria* iceMateria2 = src->createMateria("ice");
	AMateria* cureMateria2 = src->createMateria("cure");

	ICharacter* alice = new Character("Alice");
	ICharacter* bob = new Character("Bob");

	alice->equip(iceMateria1);
	alice->equip(cureMateria1);
	bob->equip(iceMateria2);
	bob->equip(cureMateria2);

	alice->use(0, *bob); // Alice uses Ice on Bob
	alice->use(1, *bob); // Alice uses Cure on Bob
	bob->use(0, *alice); // Bob uses Ice on Alice
	bob->use(1, *alice); // Bob uses Cure on Alice

	alice->unequip(0);
	alice->unequip(1);
	bob->unequip(0);
	bob->unequip(1);

	// alice->equip(iceMateria2);
	// alice->equip(cureMateria2);
	// bob->equip(iceMateria1);
	// bob->equip(cureMateria1);

	// does not work since objet have been unequipped.
	alice->use(0, *bob);
	alice->use(1, *bob);
	bob->use(0, *alice);
	bob->use(1, *alice);

	delete iceMateria2;
	delete cureMateria2;
	delete iceMateria1;
	delete cureMateria1;

	delete alice;
	delete bob;
	delete src;

	return 0;
}

