/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afenzl <afenzl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 15:01:43 by afenzl            #+#    #+#             */
/*   Updated: 2022/09/14 17:11:37 by afenzl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int	main (void)
{
	Animal		animal;
	Cat			cat;
	Dog			dog;
	WrongAnimal	wronganimal;
	WrongCat	wrongcat;

	std::cout << "\noverwritten makeSound function: " << std::endl;
	animal.makeSound();
	cat.makeSound();
	dog.makeSound();
	
	std::cout << "\nsame makeSound function: " << std::endl;
	wronganimal.makeSound();
	wrongcat.makeSound();
	std::cout << std::endl;

// // given by subject
// 	const Animal* meta = new Animal();
// 	const Animal* j = new Dog();
// 	const Animal* i = new Cat();
// 	std::cout << j->getType() << " " << std::endl;
// 	std::cout << i->getType() << " " << std::endl;
// 	i->makeSound(); //will output the cat sound!
// 	j->makeSound();
// 	meta->makeSound();

// 	delete meta;
// 	delete i;
// 	delete j;
	return (0);
}