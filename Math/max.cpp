/*********************************************
 * Finding the maximum value in given array
 * 
 * @author Vikas Choudhary
 * @date 09.06.2020
 *********************************************/

#include <iostream>
#include "array.h"

// Function prototype
int max(int arr[], int n);

int main(void)
{
    int n;
    int *arr;
    int maximum;

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

    maximum = max(arr, n);

    // Display maximum elements
    std::cout << "Maximum is: " << maximum << std::endl;

    delete []arr;
    return 0;
}

/**
 * Maximum element in given array
 */
int max(int *arr, int n)
{
    int maximum = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (maximum < arr[i])
        {
            maximum = arr[i];
        }
    }

    return maximum;
}