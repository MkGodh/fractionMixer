#include <iostream>
#include <string>

int main()
{
	std::string wholePart;
	std::string fractionalPart;
	std::string fullNum;

	std::cout << "Input whole Part: ";
	std::cin >> wholePart;
	fullNum += wholePart + '.';
	std::cout << "Input fractional part: ";
	std::cin >> fractionalPart;
	fullNum += fractionalPart;
	double num = std::stod(fullNum);

	std::cout << "Combined number: " << num;

}
