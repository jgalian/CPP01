#include <string>
#include <iostream>

int	main()
{
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;

	std::cout << "This is the address of the string using '&':\t\t" << &str << std::endl;
	std::cout << "This is the address of the string using a pointer:\t" << stringPTR << std::endl;
	std::cout << "This is the address of the string using a reference:\t" << &stringREF << std::endl;
	std::cout << "This is the content of the string using a pointer:\t" << *stringPTR << std::endl;
	std::cout << "This is the content of the string using a reference:\t" << stringREF << std::endl;

	return (0);
}
