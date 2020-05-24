/*************************************
 * Bubble sort implementation
 * 
 * @author Vikas Choudhary
 * @date 24.05.2020
 ************************************/

#include <iostream>
#include "array.h"

int main(void)
{
    bool flag;
    int n;
    int *arr;

    // Prompt user for size of array and input it
    std::cout << "Enter size of array: ";
    std::cin >> n;

    arr = new int[n];

    // Input array from user
    std::cout << "Enter " << n << " elements: ";
    inputArray(arr, n);

    // Bubble sort
    flag = true;
    for (int i = 0; i < n - 1 && flag; i++)
    {
        flag = false;
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                flag = true;
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }

    // Display array
    printArray(arr, n, 10);
    std::cout << "\n";

    delete []arr;
    return 0;
}