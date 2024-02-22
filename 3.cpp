#include <iostream>

int main()
{
	//1
	int num = 0;
	std::cin >> num;
	if (num < 0)
	{
		std::cout << "The number is negative" << std::endl;
	}	
	else if (num == 0)
	{
		std:: cout << "The number is zero" << std::endl;
	}
	else
	{
		std::cout << "The number is positive" << std::endl;
	}

	//2
	
	if(num > 0)
	{
		switch(num / 10)
		{
			case 9:
				std::cout << "Grade: A" << std::endl;
				break;
			case 8:
				std::cout << "Grade: B" << std::endl;
				break;
			case 7:
				std::cout << "Grade: C" << std::endl;
				break;
			case 6:
				std::cout << "Grade: D" << std::endl;
				break;
			default:
				std::cout << "Grade: F" << std::endl;
				break;
		}
	}
	else
	{
		std:: cout << "The score cannot be a negative number" << std::endl;	
	}


	//3
	for(int i = 1; i <= 10; i++)
	{
		std::cout << i  << std::endl;
	}
}
