
#include<bits/stdc++.h>

using namespace std;

void TOH(int n,char src,char dest,char aux){
    if(n==0){
        return;
    }
    TOH(n-1,src,aux,dest);
    cout<<"n = "<<1<< " from rod "<<src<<" to rod " <<dest<<endl;
    TOH(n-1,aux,dest,src);
    
}

int main()
{
    
    TOH(3,'A','B','C');
    return 0;
}