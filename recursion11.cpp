//                     7.Binary searching in array by using recursion
#include <iostream>
using namespace std;

int print(int arr[], int s, int e) // for checking what is remaining elements
{
    for (int i = s; i <= e; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
bool binarySearch(int *arr, int s, int e, int key) // passing the values
{
    print(arr, s, e); // calling the function
    if (s > e)        // 1st base case
    {
        return false;
    }
    int mid = (s + e) / 2;
    cout << "Value of mid is : " << arr[mid] << endl;

    if (arr[mid] == key) // 2nd base case
    {
        return true;
    }

    if (arr[mid] > key) // condition
    {
        return binarySearch(arr, s, mid - 1, key); // calling itself
    }
    if (arr[mid] < key) // condition
    {
        return binarySearch(arr, mid + 1, e, key); // calling itself
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

    cout << "Enter key : ";
    int key;
    cin >> key;

    bool ans = binarySearch(arr, 0, size - 1, key); // store value in ans
    cout << "Key is present or not : " << ans;      // calling the function

    return 0;
}