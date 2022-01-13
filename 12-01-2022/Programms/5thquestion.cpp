
#include<iostream>

using namespace std;

void firstNPrime(int n){
    if(n==0||n<=1){
        return;
    }
    firstNPrime(n-1);
    int check = 0;
    for(int i = 2; i<n;i++){
        if(n%i==0){
            check = 1;
            break;
        }
    }
    if(check == 0){
        cout<<n;
    }
    return;
}

int main()
{
    firstNPrime(22);
    return 0;
}