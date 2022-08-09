#include "Zombie.hpp"

int main()
{
	int n = 10;
	Zombie* horde = zombieHorde(n, "Karl");

	for (int i = 0; i < n; i++)
	{
		horde[i].announce();
	}

	delete[] horde;
	system("leaks horde");
}