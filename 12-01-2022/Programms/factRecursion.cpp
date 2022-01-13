
#include<bits/stdc++.h>

using namespace std;

int Factorial(int n){
    if(n<=1){
        cout<<1;
        return 1 ;
    }
    
    int fact = n * Factorial(n-1);
    cout<<" * ";
    cout<<n <<" ";
    
    return fact ;
}

int main()
{
    cout<<"Result : ";
    cout<<Factorial(8);
    return 0;
}