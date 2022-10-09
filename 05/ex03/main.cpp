# include "Bureaucrat.hpp"
# include "Intern.hpp"

int main( void )
{
	try
	{
		Intern someRandomIntern;
		Form* rrf;
		Bureaucrat Peter("Peter");
		rrf = someRandomIntern.makeForm("robotomy request", "Bender");

		rrf->beSigned(Peter);
		rrf->beExecuted(Peter);
		
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	
	return (0);
}