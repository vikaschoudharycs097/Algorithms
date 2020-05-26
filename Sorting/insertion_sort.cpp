/*************************************
 * Insertion sort implementation
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

    // Insertion sort
    int tmp;
    int j;
    for (int i = 1; i < n; i++)
    {
        tmp = arr[i];
        j = i - 1;
        while (j >= 0 && tmp < arr[j])
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = tmp;
    }

    // Display array
    printf("\nArray after sorting:\n");
    printArray(arr, n, 10);
    std::cout << "\n";

    delete []arr;
    return 0;
}