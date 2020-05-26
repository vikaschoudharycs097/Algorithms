/*************************************
 * Merge sort implementation
 * 
 * @author Vikas Choudhary
 * @date 25.05.2020
 ************************************/

#include <iostream>
#include "array.h"

// Function prototypes
void mergeSort(int arr[], int n);
void divide(int arr[], int low, int high);
void merge(int arr[], int low, int mid, int high);

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

    // Merge sort
    mergeSort(arr, n);

    // Display array
    printf("\nArray after sorting:\n");
    printArray(arr, n, 10);
    std::cout << "\n";

    delete []arr;
    return 0;
}

void mergeSort(int arr[], int n)
{
    divide(arr, 0, n - 1);
    return;
}

// Dividing array into two subarray if possible
void divide(int arr[], int low, int high)
{
    if (low < high)
    {
        int mid = low + (high - low) / 2;
        divide(arr, low, mid);
        divide(arr, mid + 1, high);
        merge(arr, low, mid, high);
    }

    return;
}

// Merging two sorted subarray in sorted order
void merge(int arr[], int low, int mid, int high)
{
    int s = low;
    int t = mid + 1;
    int i = 0;
    int *tmp = new int[high - low + 1];

    while (s <= mid && t <= high)
    {
        if (arr[s] <= arr[t])
        {
            tmp[i] = arr[s];
            s++;
        }
        else 
        {
            tmp[i] = arr[t];
            t++;
        }
        i++;
    }

    while (s <= mid)
    {
        tmp[i] = arr[s];
        s++;
        i++;
    }

    while (t <= high)
    {
        tmp[i] = arr[t];
        t++;
        i++;
    }

    i = 0;
    s = low;
    while (s <= high)
    {
        arr[s] = tmp[i];
        s++;
        i++;
    }

    delete []tmp;

    return;
}
