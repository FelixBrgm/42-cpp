#include <iostream>

char *string_to_uppercase(char *str)
{
	int i = 0;

	while(str[i])
	{
		str[i] = toupper(str[i]);
		i++;
	}
	return (str);
}

int main(int argc, char **argv)
{

	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
		return (0);
	}

	int j = 1;
	while (argv[j])
	{
    	char *token = std::strtok(argv[j], " ");
    	while (token)
		{
    	    std::cout << string_to_uppercase(token) << ' ';
    	    token = std::strtok(nullptr, " ");
    	}
		j++;
	}
	std::cout << "\n";
	return (0);
}