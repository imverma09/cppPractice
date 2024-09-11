// C++ Exercises: Find the Greatest Common Divisor (GCD) of two numbers
#include<iostream>
using namespace std;
int main(){
    int firstNumber = 25 ;    
    int secondNumber = 15 ;
    int gcd ; 
    // output    = 5 ; 
    for (int i = 1; i < firstNumber && i < secondNumber ; i++)
    {
        if (firstNumber % i == 0 && secondNumber % i == 0)
        {
            gcd= i ;
        }
        
    }
 
    cout<<"GCD " << gcd ; 
     
return 0;
}