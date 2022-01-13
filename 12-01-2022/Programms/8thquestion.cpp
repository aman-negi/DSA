
#include<bits/stdc++.h>


using namespace std;

float ThirdSeriesNSum(int n){
    if(n==0){
        return 0 ;
    }
    
    float sum = pow(3,n-1) + ThirdSeriesNSum(n-1);
    cout<<3<<"^"<<n-1;
    cout<<" : ";
    cout<<sum<<endl;
    return sum ;
}

int main()
{
    cout<<ThirdSeriesNSum(4);
    return 0;
}