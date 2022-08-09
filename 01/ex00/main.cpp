#include "Zombie.hpp"

int main()
{
	Zombie 	karl("Karl");
	Zombie*	p_z;

	karl.announce();
	randomChump("RandomZ");
	p_z = newZombie("New");
	delete(p_z);
}