
#ifndef INTERN_HPP
# define INTERN_HPP

# include "Form.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class Intern
{
	public:
		Intern();
		Intern(Intern const & copy);

		Intern& operator=(Intern const &src);

		Form *makeForm(const std::string form_name, const std::string target);

		~Intern();
};

#endif