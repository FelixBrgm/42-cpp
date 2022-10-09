
# include "Character.hpp"
# include "Ice.hpp"
# include "Cure.hpp"
# include "MateriaSource.hpp"

int main( void )
{
	std::cout << "Test 1\n" << std::endl;
	{
		Character mark("mark");

		mark.equip(new Ice());
		mark.equip(new Ice());
		mark.equip(new Ice());
		mark.equip(new Cure());

		mark.equip(new Ice());

		mark.use(3, mark);
	}
	std::cout << "\n\n" << "Test 2\n" << std::endl;
	{
		Character dank("Dank");
		Character frank("Frank");

		frank.equip(new Cure());
		frank.use(0, dank);
		frank.unequip(1);
		frank.unequip(0);
		frank.use(0, dank);
	}
	std::cout << "\n\n" << "Test 3\n" << std::endl;
	{
		AMateria* ice = new Ice();
		AMateria* cure = new Cure();
	
		AMateria* clone = (*ice).clone();
		std::cout << " orig ice is " << ice->getType() << std::endl;
		std::cout << "clone is " << clone->getType() << std::endl;
	
		clone = (*cure).clone();
		std::cout << " orig cure is " << cure->getType() << std::endl;
		std::cout << "clone is " << clone->getType() << std::endl;
	
		delete ice;
		delete cure;
		delete clone;
	}
	std::cout << "\n\n" << "Test 4\n" << std::endl;
	{
		Character* jef = new Character("jef");
		jef->equip(new (Ice));
		Character* jef_v2 = new Character(*jef);

		std::cout << std::endl;
		jef->use(0, *jef_v2);
		jef_v2->use(0, *jef);

		jef->unequip(0);
		
		jef->print_materias();
		jef_v2->print_materias();

		jef->use(0, *jef_v2);
		jef_v2->use(0, *jef);

		delete jef;
		delete jef_v2;
	}
	std::cout << "\n\n" << "Test 5\n" << std::endl;
	{
		MateriaSource whatever;
		AMateria* i = new Ice();

		whatever.learnMateria(i);
	}
	std::cout << "\n\n" << "Test 6\n" << std::endl;
	{
		MateriaSource source;

		source.learnMateria(new Ice());
		AMateria* copy = source.createMateria("ice");
		std::cout << "Type with 'ice' " << copy->getType() << std::endl;
		delete copy;
		copy = source.createMateria("testing");
		if (!copy)
			std::cout << "copy was not created because no type has string 'testing'" << std::endl;
	}
	std::cout << "\n\n" << "Test 7\n" << std::endl;
	{
		IMateriaSource* src = new MateriaSource();
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());
		ICharacter* me = new Character("me");
		AMateria* tmp;
		tmp = src->createMateria("ice");
		me->equip(tmp);
		tmp = src->createMateria("cure");
		me->equip(tmp);
		ICharacter* bob = new Character("bob");
		me->use(0, *bob);
		me->use(1, *bob);
		delete bob;
		delete me;
		delete src;
	}

	// system ("leaks ex03");

	return (0);
}

