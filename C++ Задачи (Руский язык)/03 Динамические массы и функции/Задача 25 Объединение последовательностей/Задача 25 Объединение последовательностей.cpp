﻿// Задача 25 Объединение последовательностей.cpp

/* Необходимо написать программу, которая получит на входе два отсортированных массива длиной 10 и выдаст отсортированную массу, полученную в результате объединения этих масс. */

/*
    Примеры
    ====== Тест #1 =======
    Входные данные
    1 2 3 4 5 6 7 8 9 10
    1 2 3 4 5 6 7 8 9 10

    Результат работы
    1 1 2 2 3 3 4 4 5 5 6 6 7 7 8 8 9 9 10 10
    ====== Тест #2 =======
    Входные данные
    1 3 5 7 9 11 13 15 17 19
    2 4 6 8 10 12 14 16 18 20

    Результат работы
    1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20
    ====== Тест #3 =======
    Входные данные
    1 2 3 4 5 6 7 8 9 10
    -10 -9 -8 -7 -6 -5 -4 -3 -2 -1

    Результат работы
    -10 -9 -8 -7 -6 -5 -4 -3 -2 -1 1 2 3 4 5 6 7 8 9 10
    ====== Тест #4 =======
    Входные данные
    -10 -9 -8 -7 -6 -5 -4 -3 -2 -1
    1 2 3 4 5 6 7 8 9 10

    Результат работы
    -10 -9 -8 -7 -6 -5 -4 -3 -2 -1 1 2 3 4 5 6 7 8 9 10
*/

#include <iostream>
using namespace std;

void printArray(int A[], int size)
{
    for (int i = 0; i < size; i++)
        cin >> A[i];
}

int main()
{
    const int size = 10;
    const int total = 2 * size;
    int arr1[size]{};
    int arr2[size]{};
    printArray(arr1, size);
    printArray(arr2, size);
    int arr3[total]{};
    int k = 0;
    int i = 0;
    int j = 0;

    while (i < size && j < size)
    {
        if (arr1[i] < arr2[j])
        {
            arr3[k] = arr1[i];
            ++i;
        }

        else
        {
            arr3[k] = arr2[j];
            ++j;
        }
        ++k;
    }
    while (i < size)
    {
        arr3[k] = arr1[i];
        ++i;
        ++k;
    }
    while (j < size)
    {
        arr3[k] = arr2[j];
        ++j;
        ++k;
    }

    for (int i = 0; i < total; ++i)
    {
        cout << arr3[i] << " ";
    }
}