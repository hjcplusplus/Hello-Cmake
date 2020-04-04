#include <iostream>


int main(int argc, char *argv[])
{
	[]() {

		std::cout << "Hello from C++ Lambda!" << std::endl; }

	();

	auto sum = [](double A, double B) { return A + B; };

	auto add = sum;

	std::cout << add(3.25, 5.65) << std::endl;

	double pi = 3.1416;

	auto func = [pi]() {

		std::cout << "The value of pi is " << pi << std::endl;

	};
	func();

	auto gene_lambda = [](auto arg) { return arg + arg; };

	std::cout << gene_lambda(5) << std::endl;

	std::cout << gene_lambda(3.1416) << std::endl;

	std::cout << argc << std::endl;
	if (argc > 1)
		return 1;

	return 0;
}
