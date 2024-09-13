// find the sum of the series 1 +11 + 111 + 1111 + .. n terms
#include<iostream>
using namespace std;
int main(){
    int n= 5 ;
    int j = 1 ; 
    int sum = 0 ;
    for (int i = j; i <=n ; i++)
    {
        cout<<j <<" ";
          if (i < n )
          {
            cout<<"+ " ;
          }
          sum += j ; 
          j = (j * 10) +1 ;
          
    }
    cout<<"\nThe sum of the series is: "<<sum ;
return 0;
}