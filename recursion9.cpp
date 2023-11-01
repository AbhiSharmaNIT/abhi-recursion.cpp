//                             5. Sumation of elements of an array
#include <iostream>
using namespace std;

int getsum(int *arr, int size)
{
    if (size == 0) // base cases
    {
        return 0;
    }
    if (size == 1)
    {
        return arr[0];
    }
    else
    {
        int remainingPart = getsum(arr + 1, size - 1); // small problem
        int sumation = (arr[0] + remainingPart);       // big problem
        return sumation;
    }
}

int main()
{
    int arr[100];
    cout << "Enter size of the array : ";
    int size;
    cin >> size;
    cout << "Enter elements in the array : ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    int ans = getsum(arr, size); // calling the function
    cout << "Sum is : " << ans;
    return 0;
}
