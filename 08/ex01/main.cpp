# include "Span.hpp"

int main ( void )
{
	Span span(5);

	try
	{
		std::cout << std::endl << ">>>>>>>>>> FUNCTIONS + EXCEPTIONS <<<<<<<<<<<" << std::endl;
		// std::cout << "Longest Span " << span.longestSpan() << std::endl;

		span.addNumber(50);
		span.addNumber(4);
		span.addNumber(7);
		span.addNumber(-20);
		span.addNumber(1);
		span.printSpan();
		// span.addNumber(6);
		std::cout << "MIN: " << span.minElement() << ", MAX: " << span.maxElement() << std::endl;
		std::cout << "Longest Span " << span.longestSpan() << std::endl;
		std::cout << "Shortest Span " << span.shortestSpan() << std::endl;

		//************* from subject *******************
		{
			std::cout << std::endl << ">>>>>>>>>>>>>> FROM SUBJECT <<<<<<<<<<<<<<<<" << std::endl;
			Span sp = Span(5);
			sp.addNumber(6);
			sp.addNumber(3);
			sp.addNumber(17);
			sp.addNumber(9);
			sp.addNumber(11);
			std::cout << sp.shortestSpan() << std::endl;
			std::cout << sp.longestSpan() << std::endl;
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	int size = 500000;
	Span rlly_long(size);

	try
	{
		std::cout << std::endl << ">>>>>>>>>>>>>>   LONG SPAN  <<<<<<<<<<<<<<<<" << std::endl;
		rlly_long.addNumber(-500000);
		for (int i = 0; i < size - 2; i++)
			rlly_long.addNumber(500);

		std::cout << "Longest Span " << rlly_long.longestSpan() << std::endl;
		std::cout << "Shortest Span " << rlly_long.shortestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	size = 20;
	Span fits(size);
	Span doesnt_fit(size-1);

	try
	{
		std::cout << std::endl << ">>>>>>>>>>>>>> ADD SEQUENCE <<<<<<<<<<<<<<<<" << std::endl;
		std::list<int> fill;
		for(int i = 0; i < size; i++)
			fill.push_back(i);
		fits.addSequence(fill.begin(), fill.end());
		fits.printSpan();
		doesnt_fit.addSequence(fill.begin(), fill.end());
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	return (0);
}