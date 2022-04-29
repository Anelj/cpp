#include <iostream>
#include <string>

int main(int argc, char **argv)
{
	std::string				s;
	std::string::size_type	len;

	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	while (*(++argv))
	{
		s = *argv;
		len = s.length();
		for (std::string::size_type i = 0; i < len; i++)
			std::cout << (char) std::toupper(s[i]);
	}
	std::cout << std::endl;
	return 0;
}
