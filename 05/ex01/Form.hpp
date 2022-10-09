/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afenzl <afenzl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 15:10:52 by afenzl            #+#    #+#             */
/*   Updated: 2022/09/30 14:28:57 by afenzl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		const std::string	name_;
		const int			grade_sign_;
		const int			grade_exec_;
		bool				sign_;

	public:
		Form();
		Form(std::string name);
		Form(std::string name, int both_grades);
		Form(std::string name, int grade_sign, int grade_exec);
		Form(Form const & copy);

		Form & operator= (const Form & src);
		
		std::string getName() const;
		int			getGrade_sign() const;
		int			getGrade_exec() const;
		bool		getSign() const;

		void		beSigned(Bureaucrat & worker);

		~Form();

		class GradeTooHighException: public std::exception
		{
			const char* what() const throw();
		};
		class GradeTooLowException: public std::exception
		{
			const char* what() const throw();
		};
};

std::ostream&	operator<<(std::ostream &output, const Form& src);

#endif