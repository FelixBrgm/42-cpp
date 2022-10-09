# include "Bureaucrat.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"


int main( void )
{
	try
	{
		// Bureaucrat Frank("Frank", 145);
		// Bureaucrat Peter("Peter", 137);
		// ShrubberyCreationForm paper("jeff");

		// Bureaucrat Frank("Frank", 72);
		// Bureaucrat Peter("Peter", 45);
		// RobotomyRequestForm paper("jeff");

		Bureaucrat Frank("Frank", 25);
		Bureaucrat Peter("Peter", 5);
		PresidentialPardonForm paper("jeff");

		std::cout << std::endl << paper << std::endl;
		Frank.signForm(paper);
		std::cout << paper << std::endl;
		Peter.executeForm(paper);
		
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	
	return (0);
}