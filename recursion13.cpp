//                         2.Checking of string palindrome using recursion
#include <iostream>
using namespace std;

bool palindrome(string &str, int i, int j) // passing values
{
    if (i > j) // base case
    {
        return true;
    }

    if (str[i] != str[j]) // condition for not palindrome
    {
        return false;
    }

    else
    {
        return palindrome(str, i + 1, j - 1); // calling itself
    }
}

int main()
{
    string name = "abbccbba"; // first string

    bool ans = palindrome(name, 0, name.length() - 1); // call the function and store into ans variable

    if (ans)
    {
        cout << "Palindrome" << endl;
    }
    else
    {
        cout << "Not palindrome" << endl;
    }

    string name2 = "abcde"; // second string

    bool ans2 = palindrome(name2, 0, name.length() - 1); // call the function
    if (ans2)
    {
        cout << "Palindrome" << endl;
    }
    else
    {
        cout << "Not palindrome" << endl;
    }
    return 0;
}
