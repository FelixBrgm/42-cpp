# include "Bureaucrat.hpp"

int main( void )
{
	try
	{
		Bureaucrat Hank("Hank", 150);
		Hank.decrement_Grade();

		Bureaucrat Frank("Frank", 1);

		Bureaucrat Peter("Peter", 2);
		Peter.increment_Grade();
		std::cout << Peter << std::endl;
		Peter.decrement_Grade();
		std::cout << Peter << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	return (0);
}