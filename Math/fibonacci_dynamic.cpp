/********************************************************
 * Calculating nth fibnacci number(Dynamic Programming)
 * 
 * @author Vikas Choudhary
 * @date 29.05.2020
 *******************************************************/

#include <iostream>
#include <unordered_map>

int fibonacciDynamic(std::unordered_map<int, int> &memo, int n);

int main(void)
{
    int n;
    std::unordered_map<int, int> memo;

    // Prompt user of a non negative integer and input it
    std::cout << "Enter a non negative integer: ";
    std::cin >> n;

    std::cout << n << "th fibonacci number is: " << fibonacciDynamic(memo, n) << "\n";

    return 0;
}

/**
 * Function to calculate nth fibonacci number
 * @param1: A hash table for memoization
 * @param2: A non-negative integer 'n'
 * @return: nth fibonacci number
 */
int fibonacciDynamic(std::unordered_map<int, int> &memo, int n)
{
    if (n == 0 || n == 1)
    {
        return n;
    }

    if (memo.find(n) == memo.end())
    {
        int tmp = fibonacciDynamic(memo, n-1) + fibonacciDynamic(memo, n-2);
        memo[n] = tmp;
    }

    return memo[n];
} 