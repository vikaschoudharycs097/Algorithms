/*****************************************
 * Printing special pattern
 * 
 * @author Vikas Choudhary
 * @date 07-06-2020
 ****************************************/

#include <iostream>

// Function prototypes
int getPositive(void);
int max(int a, int b);
int min(int a, int b);

int main(void)
{
    int n;
    int tmp1;
    int tmp2;

    std::cout << "Enter a positive integer: ";
    n = getPositive();

    // Displaying pattern
    for (int i = 0; i < 2 * n - 1; i++)
    {
        for (int j = 0; j < 2 * n - 1; j++)
        {
            tmp1 = max(i + 1, j + 1);
            tmp2 = max(2 * n - 1 - i, 2 * n - 1 - j);
            std::cout.width(3);
            std::cout << std::left;
            std::cout << max(tmp1, tmp2) - n + 1;
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

/**
 * Returning max of two integers
 */ 
int max(int a, int b)
{
    return a < b ? b : a;
}

/**
 * Returning min of two integers
 */ 
int min(int a, int b)
{
    return a < b ? a : b;
}