#ifndef BRAIN
# define BRAIN

# include <iostream>

class Brain
{
	private:
		std::string ideas[100];
	public:
		Brain();
		Brain(Brain const & copy);

		void operator= (Brain const & src);

		~Brain();
};

#endif