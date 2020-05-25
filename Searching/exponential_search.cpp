/*******************************************************************
 * Implementation of Exponential search on sorted Array of integers
 *
 * @author Vikas Choudhary
 * @date  21.05.2020
 ******************************************************************/

#include <iostream>

// Function prototype
bool isIncreasing(int *arr, int n);
int min(int a, int b);
int expoentialSearch(int *arr, int n, int val);
int binarySearch(int *arr, int low, int high, int val);

int main (void)
{
    int n;   // Size of array
    int val;
    int index;
    int *arr;

    std::cout << "Enter the number of elements: ";
    std::cin >> n;

    arr = new int[n];

    // Input array elements
    std::cout << "Enter " << n << " integers in sorted order(increasing): ";
    for (int i = 0; i < n; i++)
    {
        std::cin >> arr[i];
    }

    // If array is not in increasing order, close program with message
    if (!isIncreasing(arr, n))
    {
        std::cout << "Array is not in increasing order\n";
        delete []arr;
        return 1;
    }

    std::cout << "Enter value you want to search: ";
    std::cin >> val;

    // Exponential Search
    index = expoentialSearch(arr, n, val);

    if (index == -1)
    {
        std::cout << val << " not found\n";
    }
    else 
    {
        std::cout << val << " found at position " << (index + 1) << "\n";
    }

    delete []arr;

    return 0;
}

// Return true if array is in increasing order else false
bool isIncreasing(int *arr, int n)
{
    for (int i = 1; i < n; i++)
    {
        if (arr[i - 1] > arr[i])
        {
            return false;
        }
    }

    return true;
}

// Return minimum of two integers
int min(int a, int b)
{
    return a < b ? a : b;
}

// Implementation of exponential search
int expoentialSearch(int *arr, int n, int val)
{
    if (n == 0)
    {
        return -1;
    }

    int i = 1;
    while (i < n && arr[i] <= val)
    {
        i *= 2;
    }
    
    return binarySearch(arr, i / 2, min(i - 1, n - 1), val);
}

// Implementation of binary search
int binarySearch(int *arr, int low, int high, int val)
{
    int mid;
    while (low <= high)
    {
        mid = low + (high - low) / 2;
        if (arr[mid] == val)
        {
            return mid;
        }
        else if (arr[mid] > val)
        {
            high = mid - 1;
        }
        else 
        {
            low = mid + 1;
        }
    }

    return -1;
}