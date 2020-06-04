/*********************************************
 * Checking that given two array are disjoint 
 * or not(Faster approach)
 * 
 * @author Vikas Choudhary
 * @date 31.05.2020
 ********************************************/

#include <iostream>
#include <algorithm>
#include "array.h"

// Function prototype
bool isIntersect(int *arr1, int n, int *arr2, int m);

int main(void)
{
    int n;
    int m;

    // Prompt user for number of elements in first array and input it
    std::cout << "Enter the number of elements in first array: ";
    std::cin >> n;

    // Input first array
    int *arr1 = new int[n];
    std::cout << "Enter " << n << " elements of first array: ";
    inputArray(arr1, n);

    // Prompt user for number of elements in second array and input it
    std::cout << "Enter the number of elements in second array: ";
    std::cin >> m;

    // Input second array
    int *arr2 = new int[m];
    std::cout << "Enter " << n << " elements of second array: ";
    inputArray(arr2, m);

    if (isIntersect(arr1, n, arr2, m))
    {
        std::cout << "Given array are not disjoint\n";
    }
    else 
    {
        std::cout << "Given array are disjoint\n";
    }

    delete []arr1;
    delete []arr2;
    return 0;
}

/**
 * Checking that given array have something common
 * @param1: Pointer to first integer array 
 * @param2: Size of first array(@param1)
 * @param3: Pointer to second integer array
 * @param4: Size of second array(@param2)
 * @return: true if given array have something common else false
 */
bool isIntersect(int *arr1, int n, int *arr2, int m)
{
    std::sort(arr1, arr1 + n);
    for (int i = 0; i < m; i++)
    {
        if (binarySearch(arr1, n, arr2[i]) != -1)
        {
            return true;
        }
    }

    return false;
} 