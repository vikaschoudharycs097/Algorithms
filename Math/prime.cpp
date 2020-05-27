/*********************************************
 * Checking that given number is prime or not
 * 
 * @author Vikas Choudhary
 * @date 27.05.2020
 ********************************************/

#include <iostream>

bool isPrime(int n);

int main(void)
{
    int n;

    // Prompt user for positive integer and input it
    std::cout << "Enter a positive integer: ";
    std::cin >> n;

    if (isPrime(n))
    {
        std::cout << n << " is prime\n";
    }
    else 
    {
        std::cout << n << " is not a prime number\n";
    }

    return 0;
}

bool isPrime(int n)
{
    if (n == 1)
    {
        return false;
    }

    for (int i = 2; i <= n / i; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }

    return true;
}