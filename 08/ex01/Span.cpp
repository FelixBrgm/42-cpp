 #include "Span.hpp"

// ***************** CONSTRUCTORS AND DESTRUCTOR ********************
Span::Span() {}
Span::Span(unsigned int size):N(size) {}
Span::Span(Span const & src)
{
	*this = src;
}
Span::~Span() {}

// ***************** OPERATOR OVERLOAD ********************

Span &Span::operator=(Span const &copy)
{
	if (this != &copy)
	{
		N = copy.getN();
		span = copy.getSpan();
	}
	return (*this);
}

// ********************** GETTERS *************************

std::vector<int> Span::getSpan( void ) const { return(span); }

int Span::getNumber( unsigned int index ) const
{
	if (index >= span.size())
		throw std::out_of_range("ERROR: trying to access data out of range");

	return(span[index]);
}

int Span::getN( void ) const { return(N); }

// ********************** METHODS *************************

void Span::printSpan( void )
{
	for (std::vector<int>::const_iterator it = span.begin(); it != span.end(); ++it)
		std::cout << *it << ", ";
	std::cout << std::endl;
}

void Span::addNumber(int number)
{
	if (span.size() >= N)
		throw std::out_of_range("ERROR trying to add, while there are already N elements stored");

	span.push_back(number);
}

int Span::minElement( void )
{
	try
	{
		int ret = *std::min_element(span.begin(), span.end());
		return(ret);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
		return(-1);
	}
}

int Span::maxElement( void )
{
	try
	{
		int ret = *std::max_element(span.begin(), span.end());
		return(ret);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
		return(-1);
	}
}

int Span::longestSpan( void )
{
	if (span.size() <= 1)
		throw std::logic_error("ERROR: no span can be found, not enough numbers");

	return(maxElement() - minElement());
}

int Span::shortestSpan( void )
{
	if (span.size() <= 1)
		throw std::logic_error("ERROR: no span can be found, not enough numbers");

	std::vector<int> sorted = span;
	int shortest_span = 0;
	bool first = true;

	std::sort(sorted.begin(), sorted.end());
	std::vector<int>::const_iterator it = sorted.begin();
	std::vector<int>::const_iterator next = ++sorted.begin();
	while(next != sorted.end())
	{
		if (first || *next - *it < shortest_span)
		{
			first = false;
			shortest_span = *next - *it;
		}
		next++;
		it++;
	}
	return (shortest_span);
}
