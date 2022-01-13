
#include<iostream>

using namespace std;

void firstNOdd(int n){
    if(n==0||n<1){
        return;
    }
    if(n%2==0)
        n--;
    firstNOdd(n-2);
    if(n%2!=0)
        cout<<n;
    return;
}

int main()
{
    firstNOdd(13);
    return 0;
}