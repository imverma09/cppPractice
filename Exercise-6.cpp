// Print a pattern like square with # character
#include <iostream>
using namespace std;
int main()
{
    char n = '#';
     for (int i = 0; i <4; i++)
     {
        for (int j = 0 ; j  <4; j++)
        {
           cout<<n<<" ";
        }
        cout<<endl;        
     }
     
    return 0;
}