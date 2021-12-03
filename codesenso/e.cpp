#include<bits/stdc++.h>
#include<iostream>
#define pb push_back
using namespace std;
int main(){
  int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++)cin>>a[i];
  int left[n];
  left[n-1]=n;
  stack<int> st;
  st.push(n-1);
  for(int i=n-2;i>=0;i--){
    while(st.size() && a[st.top()]>a[i]){
      st.pop();
      
    }
    if(st.size()==0){
      left[i]=n;
      
    }
    else{
      left[i]=st.top();
    }
    st.push(i);
    
  }
  int right[n];
  right[0]=-1;
  st=stack<int>();
  st.push(0);
  for(int i=1;i<n;i++){
      while(st.size() && a[st.top()]>a[i]){
      st.pop();
      
    }
    if(st.size()==0){
      right[i]=-1;
      
    }
    else{
      right[i]=st.top();
    }
    st.push(i);

  }
  int ans=0;
  for(int i=0;i<n;i++){
      int l=right[i]+1;
      int r=left[i]-1;
      //cout<<l<<" "<<r<<endl;
      int p=abs(l-i)+abs(r-i)+(abs(l-i)*abs(r-i))+1;
      //cout<<p<<endl;
      ans+=p*a[i];


  }
  cout<<ans<<endl;
  
  
}