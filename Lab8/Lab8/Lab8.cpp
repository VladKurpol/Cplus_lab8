#include "pch.h"
#include <iostream>
#include <list>

int main()
{
	setlocale(LC_ALL, "Rus");
	std::list<int> numbers = { 1, 2, 3, 4, 5 };
	int number = numbers.size();
	int k = 0;

	int first = numbers.back();  // 1
	
	std::cout << "Проверка чисел." << "\n";

	for (std::list<int>::const_iterator it = numbers.begin(); it != numbers.end(); it++)
	{
		if (*it % 2 != 0)
		{
			std::cout << *it << "\n";
			k++;
		}
	}

	int *massive = new int[number + k];
	int g = 0;

	for (std::list<int>::const_iterator it = numbers.begin(); it != numbers.end(); it++)
	{
		if (*it % 2 != 0)
		{
			massive[g] = *it;
			std::cout << g << ") " << massive[g] << "\n";
			g++;
		}
	}

	for (size_t i = 0; i < g; i++)
	{
		numbers.push_back(massive[i]);
	}

	std::cout << "Вывод списка." << "\n";
	
	for (std::list<int>::const_iterator it = numbers.begin(); it != numbers.end(); it++)
	{
		std::cout << *it << "\n";
	}
	return 0;
}