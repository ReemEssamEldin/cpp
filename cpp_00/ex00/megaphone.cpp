#include <iostream>
#include <cctype>

//ANSI escape codes for colored output
#define GREEN	"\033[0;32m"
#define RED		"\033[0;31m"
#define RESET	"\033[0m"

int	main(int argc, char **argv)
{
	if (argc == 1)
	{
		std::cout << RED << "* LOUD AND UNBEARABLE FEEDBACK NOISE *"<< RESET << std::endl;
		return 0;
	}
	for (int i = 1; i < argc; ++i)
	{
		for (int j = 0; argv[i][j]; ++j)
		{
			std::cout << GREEN << static_cast<char>(std::toupper(static_cast<unsigned char>(argv[i][j])));
		}
		if (i < argc - 1)
			std::cout << ' ';
	}
	std::cout << std::endl;
	return (0);
}
