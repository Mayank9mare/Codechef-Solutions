#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    int x,y,z;
    cin>>x>>y>>z;
    int f=0;
    if(x==7||y==7||z==7){
        f=1;
    }
     if(f){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        //return 0;
    }
    return 0;
}