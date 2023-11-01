//                      1. power subsets using recursion
#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> subsets; // for collection of power sets
void powerset(vector<int> &subset, int i, vector<int> &arr)
{
    if (i == arr.size()) // base case
    {
        subsets.push_back(subset); // subsets me chhote chhote subset ko dal do
        return;
    }

    // ith element is not in subset
    powerset(subset, i + 1, arr); // calling itself for not including element

    // ith element is not subset
    subset.push_back(arr[i]);     // include ith element
    powerset(subset, i + 1, arr); // calling itself for including element

    // yaha par included element ko hata dete hai
    subset.pop_back();
}

int main()
{
    int n;
    cout << "Enter size of array : " << endl;
    cin >> n;
    vector<int> arr(n);
    cout << "Enter elements in array : " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    vector<int> empty;       // creating a vector array into main function
    powerset(empty, 0, arr); // calling powerset function with its arguments

    for (auto subset : subsets) // using of ranged for loop for iteration of each element
    {
        for (auto element : subset)
        {
            cout << element << " ";
        }
        cout << endl;
    }
    return 0;
}