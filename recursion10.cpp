//                     6. Searching of key from an array by using recursion
#include <iostream>
using namespace std;

bool searching(int arr[], int size, int key) // passing the values
{
    if (size == 0) // base cases
    {
        return false;
    }
    if (arr[0] == key)
    {
        return true;
    }
    bool remainingPart = searching(arr + 1, size - 1, key); // After comparing 1st element size of array will decrease and arr[1] be arr[0] for new array
    return remainingPart;
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

    cout << "Enter the key : ";
    int key;
    cin >> key;

    bool ans = searching(arr, size, key); // calling the function
    if (ans)                              // remember it
    {
        cout << "Founded";
    }
    else
        cout << "Not founded";

    return 0;
}
