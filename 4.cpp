#include <iostream>

float add(float num1, float num2)
{
	return num1 + num2;
}

float sub(float num1, float num2)
{
	return num1 - num2;
}
	
float mul(float num1, float num2)
{
	return num1 * num2;
}
	
float div(float num1, float num2)
{
	return num1 / num2;
}

int main()
{
	float x = 0;
	float y = 0;
	char sym = 'a';
	std::cout << "Enter the first number" << std::endl;
	std::cin >> x;
	std:: cout << "Enter the second number" << std::endl;
	std::cin >> y;
	std::cout << "What calculation you want to do?" << std::endl;
	std::cin >> sym;
	switch(sym)
	{
		case '+':
			std:: cout << add(x, y) << std::endl;
			break;
		case '-':
			std::cout << sub(x, y) << std::endl;
			break;
		case '*':
			std::cout << mul(x, y) << std::endl;
			break;
		case '/':
			std::cout << div(x, y) << std::endl;
			break;
	}
}
