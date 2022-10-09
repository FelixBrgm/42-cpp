/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afenzl <afenzl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 15:11:18 by afenzl            #+#    #+#             */
/*   Updated: 2022/09/30 18:22:06 by afenzl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "Form.hpp"
# include <fstream>

class ShrubberyCreationForm: public Form
{
	private:
		std::string target_;
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(std::string name);
		ShrubberyCreationForm(ShrubberyCreationForm const & copy);

		ShrubberyCreationForm & operator=(Form const & src);

		void beSigned(Bureaucrat & worker);
		void execute(Bureaucrat const & executor) const;

		~ShrubberyCreationForm();
};

#endif