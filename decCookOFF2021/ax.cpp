#include<bits/stdc++.h>
using namespace std;
void func(int a[],int n){
    for(int i=((1<<n) -1);i>0;i&(i-1)){
        i--;
        for(int j=0;j<n;j++){
            if(i&(1LL<<j)){
                cout<<a[j]<<" ";
            }
        }
        cout<<endl;
    }
}
int check2(int n){
    if(n==0)return 0;
    return ((n&(n-1))==0);
}
int main(){
    int n=5;
    int a[n]={1,2,3,4,5};
    //cout<<__builtin_popcount(3)<<endl;
    cout<<check2(1024)<<endl;
    cout<<check2(8)<<endl;

    //func(a,n);
}