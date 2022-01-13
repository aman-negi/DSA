
#include<bits/stdc++.h>

using namespace std;

int FibArr[100][100] ;

int Fibbonaci(int n){
    if(n==1){
        return 1 ;
    }
    if(n==0){
        return 0;
    }
    int Fib1 = Fibbonaci(n-1);
    int Fib2 = Fibbonaci(n-2);
    int fibSum = Fib1 + Fib2;
    return fibSum ;
}

int main()
{
    cout<<"Result :";
    for(int i =1;i<6;i++)
    {   
        cout<<Fibbonaci(i)<<" + ";
    }
    
    cout<<Fibbonaci(6);
    
    return 0;
}