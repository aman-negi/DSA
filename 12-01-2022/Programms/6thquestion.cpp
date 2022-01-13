
#include<bits/stdc++.h>


using namespace std;

float firstSeriesNSum(int n){
    if(n==0){
        return 0 ;
    }
    
    float sum = 1/pow(2,n-1) + firstSeriesNSum(n-1);
    cout<<1<<"/("<<2<<"^"<<n-1<<")";
    cout<<" : ";
    cout<<sum<<endl;
    return sum ;
}

int main()
{
    cout<<firstSeriesNSum(4);
    return 0;
}