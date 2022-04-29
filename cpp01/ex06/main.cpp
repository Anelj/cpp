#include "Karen.hpp"

int main(int args, char *argv[])
{
	Karen	k;
	char	c;

	if (args != 2)
	{
		std::cout << "Pass one argument.\n";
		return (1);
	}
	if ((std::string) argv[1] != "ERROR"
		&& (std::string)argv[1] != "WARNING"
		&& (std::string)argv[1] != "INFO"
		&& (std::string)argv[1] != "DEBUG")
		c = 'c';
	else
		c = *(argv[1]);
	switch (c)
	{
		case 'D':
			k.complain("DEBUG");
			std::cout << std::endl;
		case 'I':
			k.complain("INFO");
			std::cout << std::endl;
		case 'W':
			k.complain("WARNING");
			std::cout << std::endl;
		case 'E':
			k.complain("ERROR");
			std::cout << std::endl;
			break ;
		default:
			std::cout << "[ Probably complaining about insignificant problems"
						 " ]\n";
	}
	return 0;
}
