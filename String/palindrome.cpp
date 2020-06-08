/***************************************************
 * Checking that given string is palindrome or not
 * 
 * @author Vikas Choudhary
 * @date 08.06.2020
 ***************************************************/

#include <iostream>

// Function prototype
bool isPalindrome(std::string text);

int main(void)
{
    std::string text;

    std::cout << "Enter text: ";
    std::getline(std::cin, text);

    // Check string is palindrome or not
    if (isPalindrome(text))
    {
        std::cout << "palindrome\n";
    }
    else 
    {
        std::cout << "Not palindrome\n";
    }

    return 0;
}

/**
 * Checking that given string is palindrome or not
 */
bool isPalindrome(std::string text)
{
    for (int i = 0, j = text.size() - 1; i < j; i++, j--)
    {
        if (text[i] != text[j])
        {
            return false;
        }
    }

    return true;
} 