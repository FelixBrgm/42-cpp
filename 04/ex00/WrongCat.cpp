
# include "WrongCat.hpp"

WrongCat::WrongCat()
{
	this->type = "WrongCat";
	std::cout << "Wrong" << this->type << " has been created." << std::endl;
}

WrongCat::WrongCat(WrongAnimal const & copy)
{
	*this = copy;
	std::cout << "Wrong" << this->type << " has been created. --> Copy" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "Wrong" << this->type << " has been destroyed." << std::endl;
}

void	WrongCat::operator= (WrongAnimal const & src)
{
	this->type = src.getType();
}
