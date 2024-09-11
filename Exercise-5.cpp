// calculate the series (1) + (1+2) + (1+2+3) + (1+2+3+4) + ... + (1+2+3+4+...+n).
#include <iostream>
using namespace std;
int main()
{
    int count = 5;
    int sum = 0;
    int ans = 0;
    for (int i = 1; i <= count; i++)
    {
        sum += i;
        ans += sum;
    }
    cout << ans;
    return 0;
}