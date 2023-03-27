#include <iostream>

int	main()
{
	std::string brain = "HI THIS IS BRAIN";
	std::string	*stringPTR = &brain;
	std::string& stringREF = brain;

	std::cout << "Addresses :" << std::endl;
	std::cout << &brain << std::endl;
	std::cout << &stringPTR << std::endl;
	std::cout << &stringREF << std::endl;
	
	std::cout << "Values :" << std::endl;
	std::cout << brain << std::endl;
	std::cout << *stringPTR << std::endl;
	std::cout << stringREF << std::endl;

	return 0;
}
