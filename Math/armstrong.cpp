/*************************************************
 * Check that given integer is armstrong or not
 * 
 * @author Vikas Choudhary
 * @data 08-06-2020
 *************************************************/

#include <iostream>

// Function prototype
bool isArmstrong(int n);

int main(void)
{
    int n;

    std::cout << "Enter an integer: ";
    std::cin >> n;

    // Check that given integer is armstrong or not
    if (isArmstrong(n))
    {
        std::cout << n << " is armstrong\n";
    }
    else 
    {
        std::cout << n << " is not armstrong\n";
    }

    return 0;
}

/**
 * Checking an integer is armstrong or not
 */
bool isArmstrong(int n)
{
    int tmp = n;
    int tmp_digit;
    int cube_sum = 0;

    while (tmp)
    {
        tmp_digit = tmp % 10;
        cube_sum += tmp_digit * tmp_digit * tmp_digit;
        tmp /= 10;
    }    

    if (cube_sum == n)
    {
        return true;
    }

    return false;
}