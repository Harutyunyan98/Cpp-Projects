﻿// Задача 18 Значение выражения.cpp

/* Запишите функцию, которая получает в качестве аргумента N натуральных чисел и возвращает n!/ (n + 1) значение выражения. Затем вычислите значение следующей фразы 1!/2 + 2!/3 + 3!/4 + 4!/5 + 5!/6 + 6!/7 + 7!/8 + 8!/9 + 9!/10 + 10!/11. Ответ отображается с точностью до 5 символов.  */

/*
    Примеры
    ====== Тест #1 =======
    Входные данные

    Результат работы
    371419.232900
*/

#include <iostream>

double expression_value(int n)
{
    double num = 0;
    double f = 1;
    double i = 2;
    double sum = 0;
    while (num <= n - 1)
    {
        f = f + f * num;
        num++;
        sum += f / i;
        ++i;
    }
    std::cout << std::fixed << sum;
}

int main()
{
    int n = 10;
    expression_value(n);
}