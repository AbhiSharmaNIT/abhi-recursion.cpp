// Ques:- Fibonacci series by using recursion ?
#include <iostream>
using namespace std;

int fib(int n)
{
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }

    return fib(n - 1) + fib(n - 2);
}
int main()
{
    int n;
    cout << "Enter a number : ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        // cout<<" "<<fib(i);
        cout << fib(i) << endl;
    }
}

// Ques:- Shorting of an by using recursion ?
#include <iostream>
using namespace std;

bool abhishort(int a[], int n)
{
    if (n == 1)
    {
        return true;
    }

    return (a[0] > a[1] && (a + 1, n - 1));
}
int main()
{
    int n;
    // cout<<"Enter size of array : ";
    cin >> n;
    int a[n];
    // cout<<"Enter elements in the array : ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    // cout<<"Shorted array is : ";
    // for (int  i = 0; i < n; i++)
    // {
    //     cout<<abhishort(a,n);
    // }
    cout << abhishort(a, n);
}