#include<iostream>

using namespace std;

void firstNnatural(int n){
    if(n==0){
        return;
    }
    firstNnatural(n-1);
    cout<<n;
    return;
}

int main()
{
    firstNnatural(8);
}