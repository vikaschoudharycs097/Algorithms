/********************************************************
 * Implementation of linear search on Array of integers
 *
 * @author Vikas Choudhary
 * @date  21.05.2020
 *******************************************************/

#include <iostream>

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
    std::cout << "Enter " << n << " integers: ";
    for (int i = 0; i < n; i++)
    {
        std::cin >> arr[i];
    }

    std::cout << "Enter value you want to search: ";
    std::cin >> val;

    // Linear Searching
    index = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == val)
        {
            index = i;
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