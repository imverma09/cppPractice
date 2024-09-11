#include<iostream>
#include <math.h>
using namespace std;
int main(){
   int start = 1 ; 
   int end = 100 ; // Reading the ending range
   int count = 0 ;
   int find = 0 ;
   for (int i = start; i <= end; i++)
   {
      for (int j = 2 ; j <= sqrt(i); j++)
      {
        if (i % j == 0)
        {
            count++;
        }
      }
      if (count == 0 && i != 1)
      {
        find++;
        cout<<i<<" ";
      }
      count = 0 ;
   }
   
   cout<<"\n"<<"find " << find;

return 0;
}