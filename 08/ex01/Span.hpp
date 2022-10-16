#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <stdexcept>
# include <vector>
# include <list>
# include <algorithm>


class Span
{
	private:
		unsigned int N;
		std::vector<int> span;

	public:
		Span();
		Span(unsigned int size);
		Span(Span const & src);

		Span &operator=(Span const &copy);

		std::vector<int> getSpan( void ) const;
		int getNumber( unsigned int index ) const;
		int getN( void ) const;

		void addNumber(int number);
		void printSpan( void );
		int shortestSpan( void );
		int longestSpan( void );
		int minElement( void );
		int maxElement( void );

		template <class iter>
		void addSequence(iter begin, iter end)
		{
			if (span.size() + std::distance(begin, end) <= N)
			{
				while (begin != end)
				{
					addNumber(*begin);
					begin++;
				}
			}
			else
				throw std::out_of_range("ERROR: sequence is too long ");
		};

		~Span();
};

#endif