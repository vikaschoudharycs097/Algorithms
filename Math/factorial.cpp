/***********************************************
 * Calculate factorial of non negative integer
 * 
 * @author Vikas Choudhary
 * @date 27.05.2020
 **********************************************/

#include <iostream>

unsigned long long factorial(int n);

int main(void)
{
    int n;

    // Prompt user for an integer between 0 to 20 and input it
    std::cout << "Enter an integer between 0 to 20: ";
    std::cin >> n;

    std::cout << "Factorial of " << n << " is: " << factorial(n) << "\n";

    return 0; 
}

// Definition of factorial()
unsigned long long factorial(int n)
{
    unsigned long long fact = 1;
    for (int i = 2; i <= n; i++)
    {
        fact *= i;
    }

    return fact;
}