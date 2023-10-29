// Ques:- How to find first and last occurance of element ?
#include <iostream>
using namespace std;

int firOcc(int a[], int n, int i, int key)

{
    if (i == n)
    {
        return -1;
    }
    if (a[i] == key)
    {
        return i;
    }

    return firOcc(a, n, i + 1, key);
}
// for last occurance
int lastOcc(int a[], int n, int i, int key)
{
    if (i == n)
    {
        return -1;
    }

    int last = lastOcc(a, n, i + 1, key);
    if (last != -1)
    {
        return last;
    }
    if (a[i] == key)
    {
        return i;
    }

    return -1;
}
int main()
{
    int a[] = {1, 4, 6, 4, 3, 4, 3};
    cout << "The position of the element is : " << firOcc(a, 7, 0, 4) << endl;
    cout << "The position of the element is : " << lastOcc(a, 7, 0, 4) << endl;
    return 0;
}
