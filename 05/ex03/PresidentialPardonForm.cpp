/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afenzl <afenzl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 15:09:19 by afenzl            #+#    #+#             */
/*   Updated: 2022/10/03 03:48:37 by afenzl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "PresidentialPardonForm.hpp"

//  -------------- CONSTRUCTORS & DESTRUCTOR ----------------

PresidentialPardonForm::PresidentialPardonForm(): Form("PresidentialPardonForm", 25, 5) {}

PresidentialPardonForm::PresidentialPardonForm(std::string target): Form("PresidentialPardonForm", 25, 5), target_(target) {}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & copy): Form(copy) {}

PresidentialPardonForm::~PresidentialPardonForm() {}


//  ----------------------- OPERATOR OVERLOAD -------------

PresidentialPardonForm & PresidentialPardonForm::operator= (const Form & src)
{
	if (this != &src)
		return (*this);
	return *this;
}

//  ----------------------- METHODS -------------

void PresidentialPardonForm::beSigned(Bureaucrat & worker)
{
	if (worker.getGrade() <= 145)
		this->setSign(true);
	else
		throw GradeTooLowException();
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	beExecuted(executor);
	std::cout << target_ << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}
