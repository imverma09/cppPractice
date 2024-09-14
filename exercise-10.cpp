// the first n terms of the Fibonacci series
#include<iostream>
using namespace std;
int main(){
   int n = 10 ;
   int a = 0 ; 
   int b = 1 ; 
   int ans = 0;
   cout<<"the first " <<n<< " terms of the Fibonacci series : "<<a<<" " <<b<<" "; 
   for (int i = 0; i < n-2 ; i++)
   {
       ans = a + b;
       a = b; 
       b = ans ; 
       cout<< ans <<" " ;
   }
   
return 0;
}