
#include<bits/stdc++.h>


using namespace std;

float FourthSeriesNSum(int n){
    if(n==0){
        return 0 ;
    }
    
    float sum = 1/pow(3,n-1) + FourthSeriesNSum(n-1);
    cout<<1<<"/ ( "<<3<<"^"<<n-1<<" )";
    cout<<" : ";
    cout<<sum<<endl;
    return sum ;
}

int main()
{
    cout<<FourthSeriesNSum(4);
    return 0;
}