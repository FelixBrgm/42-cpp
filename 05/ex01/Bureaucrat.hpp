/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afenzl <afenzl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 14:51:26 by afenzl            #+#    #+#             */
/*   Updated: 2022/09/29 18:41:38 by afenzl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include "Form.hpp"

class Form;

class Bureaucrat
{
	private:
		const	std::string name_;
		int		grade_;
	public:
		Bureaucrat();
		Bureaucrat(std::string name);
		Bureaucrat(std::string name, int grade);
		Bureaucrat(const Bureaucrat & copy);

		void operator= (const Bureaucrat & src);

		std::string	getName() const;
		int			getGrade() const;

		void increment_Grade();
		void decrement_Grade();

		void signForm(Form & paper);

		~Bureaucrat();

		class GradeTooHighException: public std::exception
		{
			const char* what() const throw();
		};
		class GradeTooLowException: public std::exception
		{
			const char* what() const throw();
		};
};

std::ostream&	operator<<(std::ostream &output, const Bureaucrat& src);

#endif