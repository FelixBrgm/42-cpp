/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afenzl <afenzl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 04:12:45 by afenzl            #+#    #+#             */
/*   Updated: 2022/10/03 05:31:54 by afenzl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Intern.hpp"

Intern::Intern() {}

Intern::Intern(Intern const & copy)
{
	*this = copy;
}

Intern::~Intern() {}

Intern& Intern::operator=(Intern const &src)
{
	if (this == &src)
		return(*this);
	return (*this);
}

Form *Intern::makeForm(const std::string form_name, const std::string target)
{
	int found = 4;
	std::string form_names[3] = {"robotomy request", "presidential pardon", "shrubbery creation"};
	Form *forms[4] = { new RobotomyRequestForm(target), new PresidentialPardonForm(target), new ShrubberyCreationForm(), NULL };
	for(int i = 0; i < 3; i++)
	{
		if (form_names[i] == form_name)
		{
			found = i;
			std::cout << "Intern creates " << forms[i]->getName() << std::endl;
		}
		else
			delete forms[i];
	}
	if (found == 4)
		std::cout << "Intern can't create " << form_name << ", since this Form doesn't exist" << std::endl;
	return (forms[found]);
}
