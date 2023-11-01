//                         4. Checking of array is sorted or not
#include <iostream>
using namespace std;

bool linearsort(int arr[], int size)
{
    if (size == 0 || size == 1)
    {
        return true;
    }
    if (arr[0] > arr[1])
    {
        return false;
    }
    else
    {
        return linearsort(arr + 1, size - 1);
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

    bool ans = linearsort(arr, size);
    if (ans)
    {
        cout << "Array is sorted";
    }
    else
        cout << "Array is not sorted";
    return 0;
}
