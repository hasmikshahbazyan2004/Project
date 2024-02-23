#include <iostream>

int minimum(int* arr, int size)
{
	int min = arr[0];
	for(int i = 1; i < size; i++)
	{
		if(min >= arr[i])
		{
			min = arr[i];
		}
	}
	
	return min;	
}
	
int maximum(int* arr, int size)
{
	int max = arr[0];
	for(int i = 1; i < size; i++)
	{
		if(max <= arr[i])
		{
			max = arr[i];
		}
	}

	return max;
}

int average(int* arr, int size)
{
	int sum = 0;
	for(int i = 0; i < size; i++)
	{
		sum += arr[i];
	}
	
	return sum / size;
}
	
int length(char* string)
{
	int size = 0;
	while(*string)
	{
		size++;
		string++;
	}
	
	return size;
}

char* concatenate(char* arr1, char* arr2)
{
	char* new_arr = arr1;
	while(*arr1)
	{
		arr1++;
	}
	
	while(*arr2)
	{
		*arr1 = *arr2;
		++arr1;
		++arr2;
	}
	
	*arr1 = '\0';
	return new_arr;
}

int main()
{
	//array of integers
	int arr[] = {20, 10, 3};
	int size = sizeof(arr) / sizeof(int);
	std::cout << "The maximum value: " << maximum(arr, size) << std::endl;
	std::cout << "The minimum value: " << minimum(arr, size) << std::endl;
	std::cout << "The average value: " << average(arr, size) << std::endl;

	//string
	char string[] = "Hello, World";	
	std::cout << "The length of the string is " << length(string) << std::endl;
	
	char arr1[] = "Hello, ";
	char arr2[] = "World";
	std::cout << concatenate(arr1, arr2) << std::endl;
}
