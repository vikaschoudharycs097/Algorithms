/*************************************************
 * Check that given integer is palindrome or not
 * 
 * @author Vikas Choudhary
 * @data 08-06-2020
 *************************************************/

#include <iostream>

// Function prototype
bool isPalindrome(int n);

int main(void)
{
    int n;

    std::cout << "Enter an integer: ";
    std::cin >> n;

    // Check that given integer is palindrome or not
    if (isPalindrome(n))
    {
        std::cout << n << " is palindrome\n";
    }
    else 
    {
        std::cout << n << " is not palindrome\n";
    }

    return 0;
}

/**
 * Checking an integer is palindrome or not
 */
bool isPalindrome(int n)
{
    int tmp = n;
    int reverse = 0;

    while (tmp)
    {
        reverse = reverse * 10 + tmp % 10;
        tmp /= 10;
    }    

    if (reverse == n)
    {
        return true;
    }

    return false;
}