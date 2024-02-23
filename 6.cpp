#include <iostream>

int main()
{
	int num1 = 10;
	int *ptr = &num1;
	std::cout << *ptr << std::endl;
	
	int &num2 = num1;
	std::cout << num2 << std::endl;

	//int &num2 =  *ptr;
	//std::cout << num2 << std::endl;

	*ptr = 20;
	std::cout << "Manipulation using pointer: "  << num1 << std::endl;

	num2 = 30;
	std::cout << "Manipulation using reference: " << num1 << std::endl;
}
