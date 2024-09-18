// find the largest three elements in an array.
#include <iostream>
using namespace std;
int main()
{
    int arr[] = {11, 12, 32, 45, 23};
    int n = sizeof(arr) / sizeof(arr[0]);
    int first, second, third;
     first  = second = third  = -11232211 ;
     for (int i = 0; i < n; i++)
     {
        if (first < arr[i])
        {
            third= second;
            second = first;
            first  = arr[i] ; 
        }
        else if (second < arr[i])
        {
            third = second;
            second = arr[i] ; 
        }
        else if (third < arr[i])
        {
            third=arr[i];
        }
        
        
        
     }
     
     cout<<first << " "<< second <<" " << third ; 
      
    return 0;
}