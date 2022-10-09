/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afenzl <afenzl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 15:11:36 by afenzl            #+#    #+#             */
/*   Updated: 2022/10/04 17:40:54 by afenzl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "Form.hpp"

# include <stdlib.h>

class RobotomyRequestForm: public Form
{
	private:
		std::string target_;
	public:
		RobotomyRequestForm();
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(RobotomyRequestForm const & copy);

		RobotomyRequestForm & operator=(Form const & src);

		void beSigned(Bureaucrat & worker);
		void execute(Bureaucrat const & executor) const;

		~RobotomyRequestForm();
};

#endif