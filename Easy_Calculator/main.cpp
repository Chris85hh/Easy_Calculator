#include <iostream>
#include <string>
#include "Funktion.hpp"

int main() {
	char input;
	std::cout << "this is a easy Calculator" << std::endl
		<< "A for Addition" << std::endl
		<< "S for Subtraktion" << std::endl
		<< "M for Multiplikation" << std::endl
		<< "D for Division" << std::endl << std::endl
		<< "Your input" << std::endl;
	std::cin >> input;

	switch (input)
	{
	case'A':
	case'a': 
		std::cout << "ich bin im switch";
		addition();
		break;

	default:
		break;
	}

	system("pause");
	return 0;
}