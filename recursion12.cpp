//                     1.Reverse the string using recursion

#include <iostream>
using namespace std;

void reverse(string &str, int i, int j) // passing value of string,starting point, last point
{
    cout << "call recived for : " << str << endl; // for batter understanding how is call going
    if (i > j)                                    // base case
    {
        return;
    }
    swap(str[i], str[j]); // reverse by swapping
    i++;
    j--;
    reverse(str, i, j); // calling itself
}
int main()
{
    string name = "abcde";
    reverse(name, 0, name.length() - 1); // function call
    cout << name;                        // print final result

    return 0;
}
