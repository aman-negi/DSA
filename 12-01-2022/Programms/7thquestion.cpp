
#include<bits/stdc++.h>


using namespace std;

float SecondSeriesNSum(int n){
    if(n==0){
        return 0 ;
    }
    
    float sum = pow(2,n-1) + SecondSeriesNSum(n-1);
    cout<<2<<"^"<<n-1;
    cout<<" : ";
    cout<<sum<<endl;
    return sum ;
}

int main()
{
    cout<<SecondSeriesNSum(4);
    return 0;
}