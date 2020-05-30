/***************************************************************
 * Implementation of Ternary search on sorted Array of integers
 *
 * @author Vikas Choudhary
 * @date  21.05.2020
 **************************************************************/

#include <iostream>

// Function prototype
bool isIncreasing(int *arr, int n);

int main (void)
{
    int n;   // Size of array
    int val;
    int index;
    int low;
    int high;
    int mid1;
    int mid2;
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

    // Ternary Search
    low = 0;
    high = n - 1;
    index = -1;
    while (low <= high)
    {
        mid1 = low + (high - low) / 3;
        mid2 = high - (high - low) / 3;
        if (arr[mid1] == val)
        {
            index = mid1;
            break;
        }
        else if (arr[mid2] == val)
        {
            index = mid2;
            break;
        }
        else if (arr[mid1] > val)
        {
            high = mid1 - 1;
        }
        else if (arr[mid2] < val)
        {
            low = mid2 + 1;
        }
        else 
        {
            low = mid1 + 1;
            high = mid2 - 1;
        }
    }

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