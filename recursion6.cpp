//                        1. Example of recursion
#include <iostream>
using namespace std;

void reach(int st, int end)
{
    cout << "start : " << st << "  end : " << end << endl;
    if (st == end)
    {
        cout << "Pahuch gaye" << endl;
        return;
    }
    st++;
    reach(st, end); // calling itself
}
int main()
{
    int st = 1, end = 10;
    cout << endl;

    reach(st, end);
    return 0;
}
