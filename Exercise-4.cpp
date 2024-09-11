// calculate the sum of the series (1*1) + (2*2) + (3*3) + (4*4) + (5*5) + ... + (n*n)

#include<iostream>
using namespace std;
int main(){
    int count = 5 ; 
    int sum = 0;
   for (int i = 1; i <=count; i++)
   {
       sum += i*i ;  
   }
   cout<<"sum "<<sum;
   
return 0;
}