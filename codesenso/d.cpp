#include<bits/stdc++.h>
#include<iostream>
#define pb push_back
using namespace std;
const int N=1e6;
int prime[N+1];
int par[N+1];
int find(int x){
  
  if(par[x]==x)return x;
  return par[x]=find(par[x]);
}
void Union(int x,int y){
  int x1=find(x);
  int y1=find(y);
  if(x1!=y1){
  par[x1]=y1;
  }
}

void sz(){
  memset(prime,1,sizeof(prime));
  for(int i=2;i<=N;i++){
      prime[i]=1;
  }

  for(int i=2;i*i<=N;i++){
      //cout<<i<<endl;
    if(prime[i]==1){
     //cout<<i<<endl;
      for(int j=i*i;j<=N;j+=i){
        prime[j]=0;
        
      }
    }
  }
  for(int i=2;i<=N;i++){
    //if(prime[i]==1){
        //cout<<i<<endl;
      par[i]=i;
      
    //}
  }
  
}

int main(){
  sz();
  int n;
  cin>>n;
  //cout<<par[2]<<endl;
  int a[n];
  int b[n];
  for(int i=0;i<n;i++){
    cin>>a[i];
    b[i]=a[i];
  }
  sort(b,b+n);
  for(int i=0;i<n;i++){
    if(prime[a[i]])continue;
    for(int j=2;j*j<=a[i];j++){
      if(a[i]%j!=0)continue;
      int p=a[i]/j;
      if(prime[j]){
        Union(j,a[i]);
      }
      if(p!=j && prime[p]){
        Union(p,a[i]);
      }
    }
  }
  map<int,stack<int>> m;

  for(int i=0;i<n;i++){
    m[b[i]].push(i);
  }
  int f=0;
  for(int i=0;i<n;i++){
      int p=m[a[i]].top();
      m[a[i]].pop();
      int x=find(a[i]);
      int y=find(a[p]);
      //cout<<x<<" "<<y<<endl;
      if(x!=y){
          f=1;
          break;

      }

  }
   if(f==1){
          cout<<"false"<<endl;
      }
      else{
          cout<<"true"<<endl;
      }
      return 0;
  
  
  
  
  
}