﻿// Խնդիր 14 Զույգ է և ոչ միայն.cpp

/* Գրել ծրագիր, որը մուտքում կստանա ամբողջ թիվ և կարտածի YES, եթե այդ թիվը զույգ է և 7֊ի բաժանելիս մնացորդում կմնա 3 և NO հակառակ դեպքում։ */

/*
	Օրինակներ
	====== Թեստ #1 =======
	Մուտք
	10

	Ելք
	YES

	====== Թեստ #2 =======
	Մուտք
	8

	Ելք
	NO

	====== Թեստ #3 =======
	Մուտք
	24

	Ելք
	YES

	====== Թեստ #4 =======
	Մուտք
	99

	Ելք
	NO

	====== Թեստ #5 =======
	Մուտք
	999470

	Ելք
	YES

	====== Թեստ #6 =======
	Մուտք
	999999

	Ելք
	NO

	====== Թեստ #7 =======
	Մուտք
	31

	Ելք
	NO

	====== Թեստ #8 =======
	Մուտք: размер 4 ---
	997

	Ելք: размер 2 ---
	NO
*/

#include <iostream>

int main()
{
	int a;
	std::cin >> a;
	if (a % 2 == 0 && a % 7 == 3)
	{
		std::cout << "YES";
	}
	else
	{
		std::cout << "NO";
	}
}
