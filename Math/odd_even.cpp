/********************************************
 * Check that given integer is odd or even
 * 
 * @author Vikas Choudhary
 * @date 04-06-2020
 *******************************************/

#include <iostream>

int main(void)
{
    int n;

    std::cout << "Enter an integer: ";
    std::cin >> n;

    // Checking number is even or odd
    if (n & 1)
    {
        std::cout << n << " is odd\n";
    }
    else 
    {
        std::cout << n << " is even\n";
    }

    return 0;
}