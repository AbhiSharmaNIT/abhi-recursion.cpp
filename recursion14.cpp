//                             3. Quick sort by using recursion
#include <iostream>
using namespace std;

int partition(int arr[], int s, int e) // passing the value into the function
{
    int pivot = arr[s]; // first element as a pivot
    int cnt = 0;        // counting form 0
    for (int i = s + 1; i <= e; i++)
    {
        if (pivot >= arr[i]) // counting how many elements are less than pivot
        {
            cnt++; // update the count
        }
    }
    int pivotIndex = s + cnt;      // yaha par hamne pivot ke right postion ko calculate kar liya
    swap(arr[pivotIndex], arr[s]); // how swap the pivot element at the right position

    int i = s, j = e;                        // initialise the ith and jth element
    while (i < pivotIndex && j > pivotIndex) // ith element from begining and jth element from ending  (pivot ab to bich me aa gya hai )
    {
        while (pivot > arr[i]) // In left part all element pivot se chhote honge
        {
            i++; // i ke position ko age badda do
        }
        while (pivot < arr[j]) // In right part all element pivot se badde honge
        {
            j--; // j ke position ko pichhe la do
        }

        if (i < pivotIndex && j > pivotIndex)
        {
            swap(arr[i++], arr[j--]); // swapping kar do agar left me badda or right me chhota element ho to
        }
    }

    return pivotIndex; // or last me pivot ka right position de do
}
void quickSort(int arr[], int s, int e)
{
    if (s >= e) // base case
    {
        return;
    }

    int p = partition(arr, s, e); // for shifting of first element at right position

    quickSort(arr, s, p - 1); // calling itself for left part

    quickSort(arr, p + 1, e); // calling itself for right part
}

int main()
{
    int n;
    int arr[100];
    cout << "Enter the size of array : ";
    cin >> n;
    cout << "Enter the elements in the array : ";

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Sorted array is : " << endl;
    quickSort(arr, 0, n - 1); // calling the function

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " "; // printing the sorted array
    }
    cout << endl;

    return 0;
}