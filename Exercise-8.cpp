// sum of the n terms of even natural numbers
#include <iostream>
using namespace std;
int main()
{
    int n = 5;
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        cout << 2 * i << " ";
        sum = sum + 2 * i ;
    }
     cout<<"\n"<<"sum of the "<< n << " terms of even natural numbers "<< sum ;
    return 0;
}