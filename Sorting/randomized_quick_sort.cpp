/****************************************
 * Randomized Quick sort implementation
 * 
 * @author Vikas Choudhary
 * @date 26.05.2020
 ***************************************/

#include <iostream>
#include <cstdlib>
#include <ctime>
#include "array.h"

// Function prototypes
void randomizedQuickSort(int arr[], int low, int high);
int randomizedPartition(int arr[], int low, int high);

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

    // Seeding to rand()
    srand(time(NULL));

    // Randomized Quick sort
    randomizedQuickSort(arr, 0, n - 1);

    // Display array
    printf("\nArray after sorting:\n");
    printArray(arr, n, 10);
    std::cout << "\n";

    delete []arr;
    return 0;
}

// Randomized Quick Sort 
void randomizedQuickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int pivot = randomizedPartition(arr, low, high);
        randomizedQuickSort(arr, low, pivot - 1);
        randomizedQuickSort(arr, pivot + 1, high);
    }

    return;
}

// Random Partition of array based on pivot
int randomizedPartition(int arr[], int low, int high)
{
    int i = rand() % (high - low + 1) + low; // Generating random index
    swap(&arr[i], &arr[high]);

    i = low;
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