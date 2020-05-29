/****************************************************
 * Calculating nth fibnacci number(Iterative method)
 * 
 * @author Vikas Choudhary
 * @date 29.05.2020
 ***************************************************/

#include <iostream>

int fibonacciIter(int n);

int main(void)
{
    int n;

    // Prompt user of a non negative integer and input it
    std::cout << "Enter a non negative integer: ";
    std::cin >> n;

    std::cout << n << "th fibonacci number is: " << fibonacciIter(n) << "\n";

    return 0;
}

/**
 * Function to calculate nth fibonacci number
 * @param1: A non-negative integer 'n'
 * @return: nth fibonacci number
 */
int fibonacciIter(int n)
{
    if (n == 0 || n == 1)
    {
        return n;
    }

    int a = 0;
    int b = 1;
    int c;
    for (int i = 2; i <= n; i++)
    {
        c = a + b;
        a = b;
        b = c;
    }

    return b;
} 