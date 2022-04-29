#include <iostream>
#include "Bureaucrat.hpp"

int main()
{
	int grade = 10;
	std::string name = "bur";

	Bureaucrat bur(name, grade);
	std::cout << bur << std::endl;
	bur.incrementGrade();
	std::cout << "increment: " << bur << std::endl;
	bur.decrementGrade();
	std::cout << "decrement: " << bur << std::endl;

	std::cout << "--------------" << std::endl;
	try
	{
		Bureaucrat bur_ex("bur-1", -1);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		Bureaucrat bur_ex("bur151", 151);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		Bureaucrat bur_ex("bur1", 1);
		bur_ex.incrementGrade();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		Bureaucrat bur_ex("bur150", 150);
		bur_ex.decrementGrade();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}
