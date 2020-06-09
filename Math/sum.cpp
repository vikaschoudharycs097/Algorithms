/*********************************************
 * Finding the sum of given array elements
 * 
 * @author Vikas Choudhary
 * @date 09.06.2020
 *********************************************/

#include <iostream>
#include "array.h"

// Function prototype
int sum(int arr[], int n);

int main(void)
{
    int n;
    int *arr;
    int total;

    std::cout << "Enter size of array: ";
    std::cin >> n;

    arr = new int[n];

    // Read an array
    std::cout << "Enter array elements: ";
    inputArray(arr, n);

    total = sum(arr, n);

    // Display sum of array elements
    std::cout << "Sum is: " << total << std::endl;

    delete []arr;
    return 0;
}

/**
 * Sum of given array elements
 */
int sum(int *arr, int n)
{
    int total = 0;
    for (int i = 0; i < n; i++)
    {
        total += arr[i];
    }

    return total;
}