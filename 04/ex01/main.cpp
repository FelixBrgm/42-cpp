/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afenzl <afenzl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 15:01:43 by afenzl            #+#    #+#             */
/*   Updated: 2022/09/14 17:39:11 by afenzl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int	main (void)
{
	Animal* array = new Animal[100];
	Dog		dog;
	Cat		cat;

	for (int i = 0; i < 100; i ++)
	{
		if (i < 50)
			array[i] = dog;
		else
			array[i] = cat;
	}

	std::cout << std::endl;

	return (0);
}