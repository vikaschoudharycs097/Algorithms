#ifndef ARRAY_H
#define ARRAY_H

#include <iostream>

// swap two values
template<typename T>
void swap(T *a, T *b)
{
    T temp = *a;
    *a = *b;
    *b = temp;

    return;
}

// To input an array of 'n' elements from user
template<typename T>
void inputArray(T arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        std::cin >> arr[i];
    }

    return;
}

// To display array elements 'm' per line separated by tab
template<typename T>
void printArray(T arr[], int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        std::cout << arr[i] << "\t";

        if ((i + 1) % m == 0)
        {
            std::cout << "\n";
        }
    }
}

// Check that array is sorted or not
template<typename T>
bool isSorted(T arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            return false;
        }
    }

    return true;
}

#endif