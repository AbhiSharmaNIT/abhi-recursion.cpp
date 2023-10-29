// Ques:- Code for finding mth power of any number ?
#include <iostream>
using namespace std;

int power(int n, int m)
{
    if (m == 0)
    {
        return 1;
    }

    return n * power(n, m - 1);
}
int main()
{
    int n, m;
    cout << "Enter number and power : ";
    cin >> n >> m;
    cout << power(n, m);
}

// Ques:- Find factorial of any number ?
#include <iostream>
using namespace std;

int fact(int n)
{
    if (n == 1)
    {
        return 1;
    }

    return n * fact(n - 1);
}
int main()
{
    int n;
    cout << "Enter a number : ";
    cin >> n;
    cout << fact(n);
}