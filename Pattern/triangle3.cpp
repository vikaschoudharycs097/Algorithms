/*****************************************
 * Printing right angle triangle inverted
 * aligned on left side
 * 
 * @author Vikas Choudhary
 * @date 05-06-2020
 ****************************************/

#include <iostream>

// Function prototypes
int getPositive(void);

int main(void)
{
    int n;

    std::cout << "Enter a positive integer: ";
    n = getPositive();

    // Displaying pattern
    for (int i = 0; i < n; i++)
    {
        for (int j = n; j > i; j--)
        {
            std::cout << "* ";
        }
        std::cout << "\n";
    }

    return 0;
}

/**
 * Reading a positive integer
 * @return: Returning a positive integer
 */
int getPositive(void)
{
    int n;
    std::cin >> n;
    while (n < 1)
    {
        std::cout << "Retry: ";
        std::cin >> n;
    } 

    return n;
} 