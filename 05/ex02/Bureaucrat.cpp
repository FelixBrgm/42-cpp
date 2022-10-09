/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afenzl <afenzl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 14:58:15 by afenzl            #+#    #+#             */
/*   Updated: 2022/10/03 03:42:02 by afenzl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Bureaucrat.hpp"

//  -------------- CONSTRUCTORS & DESTRUCTOR ----------------

Bureaucrat::Bureaucrat(): name_("no_name"), grade_(50)
{
	std::cout << "Bureaucrat no name created. -->Default (no_name, 50)" <<std::endl;
}

Bureaucrat::Bureaucrat(std::string name): name_(name), grade_(50)
{
	std::cout << "Bureaucrat " << name_ << " created. -->Grade Default (50)" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade): name_(name), grade_(grade)
{
	std::cout << "Bureaucrat " << name_ << " ";
	if (grade < 1)
		throw GradeTooHighException();
	else if (grade > 150)
		throw GradeTooLowException();

	std::cout << "created. -->(" << grade_ << ")" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat & copy): name_(copy.getName()), grade_(copy.getGrade())
{
	std::cout << "Bureaucrat " << name_ << " created. -->Copy (" << grade_ << ")" << std::endl;
}

Bureaucrat::~Bureaucrat() {}

//  ----------------------- OPERATOR OVERLOAD -------------

void Bureaucrat::operator= (const Bureaucrat & src)
{
	grade_ = src.getGrade();
}

std::ostream&	operator<<(std::ostream &output, const Bureaucrat& src)
{
	output << src.getName() << ", bureaucrat grade " << src.getGrade() << ".";
	return (output);
}

//  ----------------------- METHODS -----------------------

std::string Bureaucrat::getName() const
{
	return (this->name_);
}

int Bureaucrat::getGrade() const
{
	return (this->grade_);
}

void Bureaucrat::increment_Grade()
{
	std::cout << name_ << " ";
	if (grade_ > 1)
	{
		grade_--;
		std::cout << "increased Grade"	<< std::endl;
	}
	else
	{
		std::cout << "can't increase " << std::endl;
		throw GradeTooHighException( );
	}
}

void Bureaucrat::decrement_Grade()
{
	std::cout << name_ << " ";
	if (grade_ < 150)
	{
		grade_++;
		std::cout << "decreased Grade" << std::endl;
	}
	else
	{
		std::cout << "can't decrease " << std::endl;
		throw GradeTooLowException( );
	}
}

void Bureaucrat::signForm(Form & paper)
{
	if (paper.getSign())
		throw std::logic_error ( name_ + " couldn't sign " + paper.getName() + " because \033[0;31mForm is already signed.\033[0m");
	else if (grade_ > paper.getGrade_sign())
		throw std::logic_error ( name_ + " couldn't sign " + paper.getName() + " because \033[0;31mGrade is too Low.\033[0m");
	paper.beSigned(*this);
	std::cout << name_ << "\033[0;32m signed \033[0m" << paper.getName() << std::endl;
}

void Bureaucrat::executeForm(Form &paper)
{
	paper.execute(*this);
	std::cout << name_ << "\033[0;32m executed \033[0m" << paper.getName() << std::endl;
}


//  ----------------------- EXCEPTIONS -------------

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("\033[0;31mGrade is too High.\033[0m");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return("\033[0;31mGrade is too Low.\033[0m");
}
