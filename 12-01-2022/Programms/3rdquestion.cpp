
#include<iostream>

using namespace std;

void firstNEven(int n){
    if(n==0||n<1){
        return;
    }
    if(n%2!=0)
        n--;
    firstNEven(n-2);
    if(n%2==0)
        cout<<n;
    return;
}

int main()
{
    firstNEven(13);
    return 0;
}