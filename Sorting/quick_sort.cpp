/*************************************
 * Quick sort implementation
 * 
 * @author Vikas Choudhary
 * @date 25.05.2020
 ************************************/

#include <iostream>
#include "array.h"

// Function prototypes
void quickSort(int arr[], int low, int high);
int partition(int arr[], int low, int high);

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

    // Quick sort
    quickSort(arr, 0, n - 1);

    // Display array
    printf("\nArray after sorting:\n");
    printArray(arr, n, 10);
    std::cout << "\n";

    delete []arr;
    return 0;
}

// Quick Sort 
void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int pivot = partition(arr, low, high);
        quickSort(arr, low, pivot - 1);
        quickSort(arr, pivot + 1, high);
    }

    return;
}

// Partition of array based on pivot
int partition(int arr[], int low, int high)
{
    int i = low;
    int j = i - 1; 
    while (i < high)
    {
        if (arr[i] <= arr[high])
        {
            j++;
            swap(&arr[j], &arr[i]);
        }
        i++;
    }

    j++;
    swap(&arr[j], &arr[high]);

    return j;
}