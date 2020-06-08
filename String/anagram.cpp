/****************************************
 * Check that two string anagram or not
 * 
 * @author Vikas Choudhary
 * @date 08.06.2020
 ****************************************/

#include <iostream>
#include <cctype>

// Function prototype
bool isAnagram(std::string s1, std::string s2);

int main(void)
{
    std::string s1, s2;

    std::cout << "Enter first string: ";
    std::cin >> s1;

    std::cout << "Enter second string: ";
    std::cin >> s2;

    // Checking two string anagram or not
    if (isAnagram(s1, s2))
    {
        std::cout << "Anagram\n";
    }
    else 
    {
        std::cout << "Not anagram\n";
    }

    return 0;
}

/**
 * Check that two string anagram or not
 */
bool isAnagram(std::string s1, std::string s2)
{
    unsigned count_chars[26] = {0};
    for (unsigned i = 0; i < s1.size(); i++)
    {
        if (isalpha(s1[i]))
        {
            count_chars[tolower(s1[i]) - 'a']++;
        }
    }

    for (unsigned i = 0; i < s2.size(); i++)
    {
        if (isalpha(s2[i]))
        {
            count_chars[tolower(s2[i]) - 'a']--;
        }
    }

    for (unsigned i = 0; i < 26; i++)
    {
        if (count_chars[i] != 0)
        {
            return false;
        }
    }

    return true;
} 