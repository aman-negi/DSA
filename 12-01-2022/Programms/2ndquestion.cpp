#include<iostream>

using namespace std;

void firstNnaturalReverse(int n){
    if(n==0){
        return;
    }
    cout<<n;
    firstNnaturalReverse(n-1);
    return;
}

int main()
{
    firstNnaturalReverse(8);
    return 0;
}