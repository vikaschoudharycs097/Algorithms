/****************************************************
 * Calculating nth fibnacci number(Recursive method)
 * 
 * @author Vikas Choudhary
 * @date 29.05.2020
 ***************************************************/

#include <iostream>

int fibonacciRecur(int n);

int main(void)
{
    int n;

    // Prompt user of a non negative integer and input it
    std::cout << "Enter a non negative integer: ";
    std::cin >> n;

    std::cout << n << "th fibonacci number is: " << fibonacciRecur(n) << "\n";

    return 0;
}

/**
 * Function to calculate nth fibonacci number
 * @param1: A non-negative integer 'n'
 * @return: nth fibonacci number
 */
int fibonacciRecur(int n)
{
    if (n == 0 || n == 1)
    {
        return n;
    }

    return fibonacciRecur(n-1) + fibonacciRecur(n-2);
} 