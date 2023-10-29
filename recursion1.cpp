// Ques:- How to find factorial of any number by using recursion ?
#include <iostream>
using namespace std;

int factorial(int n);

int main()
{
    int n, result;
    cout << "Enter a number : ";
    cin >> n;

    result = factorial(n);
    cout << result;
    return 0;
}
int factorial(int n)
{
    if (n > 1)
    {
        return n * factorial(n - 1);
    }
    else
    {
        return 1;
    }
}


// Ques:- Sum of n numbers by using recursion ?
#include <iostream>
using namespace std;

int sum(int n)
{
    if (n == 1)
    {
        return 1;
    }

    return n + sum(n - 1);
}
int main()
{
    int n;
    cout << "Enter a number : ";
    cin >> n;
    cout << sum(n);
}
