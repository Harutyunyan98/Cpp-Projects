﻿// Խնդիր 15 Մեծությամբ երկրորդը.cpp

/* Գրել ծրագիր, որը մուտքում կստանա 3 ամբողջ թիվ և կարտածի այդ թվերից մեծությամբ երկրորդը։ */

/*
	Օրինակներ
	====== Թեստ #1 =======
	Մուտք
	1 2 3

	Ելք
	2

	====== Թեստ #2 =======
	Մուտք
	-1 1 0

	Ելք
	0

	====== Թեստ #3 =======
	Մուտք
	10 100 10000

	Ելք
	100

	====== Թեստ #4 =======
	Մուտք
	-159 -158 -160

	Ելք
	-159

	====== Թեստ #5 =======
	Մուտք
	147 159 150

	Ելք
	150

	====== Թեստ #6 =======
	Մուտք
	3 2 1

	Ելք
	2

	====== Թեստ #7 =======
	Մուտք
	1 3 2

	Ելք
	2

	====== Թեստ #8 =======
	Մուտք
	3 1 2

	Ելք
	2

	====== Թեստ #9 =======
	Մուտք
	2 1 3

	Ելք
	2

	====== Թեստ #10 =======
	Մուտք
	2 3 1

	Ելք
	2
*/

#include <iostream>

int main()
{
	int a, b, c;
	std::cin >> a >> b >> c;

	if ((a < b && b < c) || (a > b && b > c))
	{
		std::cout << b;
	}
	else if ((b < a && a < c) || (b > a && a > c))
	{
		std::cout << a;
	}
	else
	{
		std::cout << c;
	}
}