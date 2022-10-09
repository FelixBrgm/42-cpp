
#include "Dog.hpp"
#include "Cat.hpp"

int	main (void)
{
	// // rest should work same but this shouldnt work, since Animal is a abstract class now
	// Animal Parrot = new Animal("Parrot");
	
	{
		int	len = 10;
		Animal *animals[len];

	// creating
		for (int i = 0; i < len; i ++)
		{
			std::cout << "[ " << i + 1 << " ]" << std::endl;
			if (i < (len / 2))
				animals[i] = new Dog();
			else
				animals[i] = new Cat();
		}

	// announcing
		std::cout << std::endl;

		for (int i = 0; i < len; i ++)
		{
			animals[i]->makeSound();
		}

		std::cout << std::endl;

	// deleting
		for (int i = 0; i < len; i ++)
		{
			delete animals[i];
		}
		std::cout << std::endl;
	}
	
	{
		std::cout << "****** DEEP COPY PROOF ******" << std::endl;
		Cat cat = Cat();
		cat.setIdea("catch mouse", 0);
		cat.setIdea("drink milk ", 1);
		cat.setIdea("sleep      ", 2);

		Cat cat_cpy(cat);
		std::cout << std::endl;
		std::cout << "Both cats with the same ideas:" << std::endl;
		std::cout << "[0] Cat-Idea: " << cat.getIdea(0) << "   Cat_cpy-Idea: " << cat_cpy.getIdea(0) << std::endl;
		std::cout << "[1] Cat-Idea: " << cat.getIdea(1) << "   Cat_cpy-Idea: " << cat_cpy.getIdea(1) << std::endl;
		std::cout << "[2] Cat-Idea: " << cat.getIdea(2) << "   Cat_cpy-Idea: " << cat_cpy.getIdea(2) << std::endl;
		
		std::cout << std::endl;
		cat_cpy.setIdea("DIFFERENT IDEA\t", 1);

		std::cout << "Both cats with different ideas:" << std::endl;
		cat_cpy.setIdea("This Idea 3 of cat_cpy", 3);
		std::cout << "[0] Cat-Idea: " << cat.getIdea(0) << "   Cat_cpy-Idea: " << cat_cpy.getIdea(0) << std::endl;
		std::cout << "[1] Cat-Idea: " << cat.getIdea(1) << "   Cat_cpy-Idea: " << cat_cpy.getIdea(1) << std::endl;
		std::cout << "[2] Cat-Idea: " << cat.getIdea(2) << "   Cat_cpy-Idea: " << cat_cpy.getIdea(2) << std::endl;

		std::cout << std::endl;
	}
	
	{
		// from subject
		const Animal* j = new Dog();
		const Animal* i = new Cat();
		delete j;//should not create a leak
		delete i;
	}

	std::cout << std::endl;
	system("leaks ex02");
	return 0;
}