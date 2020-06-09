/*********************************************
 * Finding the minimum value in given array
 * 
 * @author Vikas Choudhary
 * @date 09.06.2020
 *********************************************/

#include <iostream>
#include "array.h"

// Function prototype
int min(int arr[], int n);

int main(void)
{
    int n;
    int *arr;
    int minimum;

    std::cout << "Enter size of array: ";
    std::cin >> n;

    arr = new int[n];

    // Read an array
    std::cout << "Enter array elements: ";
    inputArray(arr, n);

    if (n == 0)
    {
        printf("No inputs\n");
        return 0;
    }

    minimum = min(arr, n);

    // Display minimum elements
    std::cout << "Minimum is: " << minimum << std::endl;

    delete []arr;
    return 0;
}

/**
 * Minimum element in given array
 */
int min(int *arr, int n)
{
    int minimum = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (minimum > arr[i])
        {
            minimum = arr[i];
        }
    }

    return minimum;
}