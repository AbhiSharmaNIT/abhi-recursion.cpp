//                         2.Power of 2 by recursion
#include<iostream>
using namespace std;

int power(int n)
{
    if (n==0)                //base case
    {
        return 1;
    }
    return 2*power(n-1);         //recursive relation
}
int main()
{
    int n;
    cin>>n;

    cout<<"result is : ";
    cout<<power(n);          //calling the function 
    return 0;
}



//                         3. Say digit problem
#include<iostream>
using namespace std;

void saydigit(int n, string arr[])       // pass number and digits
{
    if (n==0)            //base case
    {
        return;          //return nothing
    }
    
    int digit = n%10;            // for taking one digit form number
    n = n/10;                    // update the number after remove one digit
    
    saydigit(n,arr);             //calling itself untill hit the base case
    cout<<arr[digit]<<" ";       // print digit one by one like stack 
}
int main()
{
    string arr[10] = {"zero","one","two","three","four","five","six","seven","eight","nine"};

    int n;           //taking a number
    cin>>n;  
    saydigit(n,arr);         //calling the function

    return 0;
}

