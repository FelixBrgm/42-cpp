/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyCreationForm.cpp                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afenzl <afenzl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 15:10:42 by afenzl            #+#    #+#             */
/*   Updated: 2022/10/03 03:43:40 by afenzl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "RobotomyRequestForm.hpp"

//  -------------- CONSTRUCTORS & DESTRUCTOR ----------------

RobotomyRequestForm::RobotomyRequestForm(): Form ("RobotomyRequestForm", 72, 45), target_("target") {}

RobotomyRequestForm::RobotomyRequestForm(std::string target): Form ("RobotomyRequestForm", 72, 45), target_(target) {}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & copy): Form(copy) {}

RobotomyRequestForm::~RobotomyRequestForm() {}


//  ----------------------- OPERATOR OVERLOAD -------------

RobotomyRequestForm & RobotomyRequestForm::operator= (const Form & src)
{
	if (this != &src)
		return (*this);
	return *this;
}

//  ----------------------- METHODS -------------

void RobotomyRequestForm::beSigned(Bureaucrat & worker)
{
	if (worker.getGrade() <= 145)
		this->setSign(true);
	else
		throw GradeTooLowException();
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	std::cout << "* drilling noises *" << std::endl;
	beExecuted(executor);
	int n = rand();
	if (n & 1)
		std::cout << target_ << " has been robotomized successfully." << std::endl;
	else
		std::cout << "robotomy failed." << std::endl;
}