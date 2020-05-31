/*************************************
 * Heap sort implementation
 * 
 * @author Vikas Choudhary
 * @date 25.05.2020
 ************************************/

#include <iostream>
#include "array.h"

void heapify(int *arr, int n, int i);
int deletion(int *arr, int n);
void heapSort(int *arr, int n);

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

    // Calling heap sort
    heapSort(arr, n);

    // Display array
    printf("\nArray after sorting:\n");
    printArray(arr, n, 10);
    std::cout << "\n";

    delete []arr;
    return 0;
}

void heapSort(int *arr, int n)
{
    // Heapifying heap
    for (int i = n / 2; i >= 0; i--)
    {
        heapify(arr, n, i);
    }

    // Heap deletion to sort array
    for (int i = 0; i < n - 1; i++)
    {
        deletion(arr, n - i);
    }
}

void heapify(int *arr, int n, int i)
{
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    while (largest < n)
    {
        if (left < n && arr[largest] < arr[left])
        {
            largest = left;
        }

        if (right < n && arr[largest] < arr[right])
        {
            largest = right;
        }

        // If element is on proper position
        if (i == largest)
        {
            break;
        }
            
        swap(&arr[i], &arr[largest]);


        i = largest;
        left = 2 * i + 1;
        right = 2 * i + 2;
    }

    return;
}

int deletion(int *arr, int n)
{
    swap(&arr[0], &arr[n-1]);
    heapify(arr, n-1, 0);
    return arr[n-1];
}