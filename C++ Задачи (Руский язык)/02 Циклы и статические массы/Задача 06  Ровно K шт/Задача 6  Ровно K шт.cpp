// Задача 6  Ровно K шт..cpp

/* Требуется написать программу, которая получит в входе целые не отрицательные числа N и K, а затем последовательность N из целых элементов. Программа в качестве результата должна производить "YES", если точный K из n чисел больше или равен 123 и " NO " в противном случае. Запрещается использовать массив. */

/*
	Примеры
	====== Тест #1 ====== =
	Входные данные
	3 2 123 100 140

	Результат работы
	YES
	====== Тест #2 =======
	Входные данные
	0 5

	Результат работы
	NO
*/

/*
// Вариант 1
#include <iostream>

int main()
{
	unsigned int n, k, sum, i;
	i = 0;
	sum = 0;
	std::cin >> n;
	while (i <= n)
	{
		std::cin >> k;
		sum += k;
		i += 1;
	}
	if (sum >= 123)
	{
		std::cout << "YES";
	}
	else
	{
		std::cout << "NO";
	}
}
*/

// Вариант 2
#include <iostream>
int main()
{
	unsigned int n, k, sums, i;
	i = 0;
	sums = 0;
	std::cin >> n;
	std::cin >> k;
	for (int i = 0; i < n; ++i)
	{
		int x;
		std::cin >> x;
		if (x >= 123)
		{
			++sums;
		}
	}
	if (sums == k)
	{
		std::cout << "YES";
	}
	else
	{
		std::cout << "NO";
	}
}