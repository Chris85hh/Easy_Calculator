#include "Funktion.hpp"

void addition() {
	int a, b;
	std::cout << "number one" << std::endl;
	std::cin >> a;
	std::cout << "number two" << std::endl;
	std::cin >> b;
	output(a + b);
}
void subtraktion() {
	int a, b;
	std::cout << "number one" << std::endl;
	std::cin >> a;
	std::cout << "number two" << std::endl;
	std::cin >> b;
	output(a - b);

}
void Multiplikation() {
	int a, b;
	std::cout << "number one" << std::endl;
	std::cin >> a;
	std::cout << "number two" << std::endl;
	std::cin >> b;
	output(a * b);

}
void Division() {
	int a, b;
	std::cout << "number one" << std::endl;
	std::cin >> a;
	std::cout << "number two" << std::endl;
	std::cin >> b;
	output(a / b);

}
void output(int a) {
	std::cout << "Results " << a << std::endl<<std::endl << std::endl << std::endl;
}
