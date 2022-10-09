/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afenzl <afenzl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 14:51:26 by afenzl            #+#    #+#             */
/*   Updated: 2022/09/29 15:17:34 by afenzl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT
# define BUREAUCRAT

#include <iostream>

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