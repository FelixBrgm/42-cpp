# include "Bureaucrat.hpp"
# include "Form.hpp"

int main( void )
{
	try
	{
		Bureaucrat Frank("Frank", 16);
		Bureaucrat Peter("Peter", 15);
		Form paper("paper", 15);

		std::cout << std::endl << paper << std::endl;
		Frank.signForm(paper);

		Peter.signForm(paper);
		std::cout << paper << std::endl;
		Frank.signForm(paper);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	return (0);
}