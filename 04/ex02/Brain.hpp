

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

		void setIdea(int num, std::string idea);
		std::string getIdea(int num) const;

		~Brain();
};

#endif