/*************************************
 * Selection sort implementation
 * 
 * @author Vikas Choudhary
 * @date 25.05.2020
 ************************************/

#include <iostream>
#include "array.h"

int main(void)
{
    int n;
    int *arr;

    // Prompt user for size of array and input it
    std::cout << "Enter size of array: ";
    std::cin >> n;

    arr = new int[n];

    // Input array from user
    std::cout << "Enter " << n << " elements: ";
    inputArray(arr, n);

    // Selection sort
    int min_index;
    for (int i = 0; i < n - 1; i++)
    {
        min_index = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[min_index] > arr[j])
            {
                min_index = j;
            }
        }
        swap(&arr[min_index], &arr[i]);
    }

    // Display array
    printf("\nArray after sorting:\n");
    printArray(arr, n, 10);
    std::cout << "\n";

    delete []arr;
    return 0;
}