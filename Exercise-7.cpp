// displays the sum of n odd natural numbers.
#include <iostream>
using namespace std;
int main()
{
    int n = 5;
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        cout<<2 * i -1<<" ";
        sum += 2 * i -1;
    }

    cout << "\n"
         << "sum of n odd natural numbers " << sum;
    return 0;
}