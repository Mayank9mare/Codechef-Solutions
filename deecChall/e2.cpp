#include<bits/stdc++.h>
#define pb push_back
#define mk make_pair
#define ll long long
#define ss second
#define ff first
#define pll pair<ll,ll>
#define vll vector<ll>
#define mll map<ll,ll>
#define mod 1000000007
#define w(x) ll x; cin>>x; while(x--)
#define ps(x,y) fixed<<setprecision(y)<<x;
#define fo(i, j, k, in) for (ll i=j ; i<k ; i+=in)
#define re(i, j) fo(i, 0, j, 1)
#define pi 3.1415926535897932384626433832795
#define all(cont) cont.begin(), cont.end()
#define countbit(x) __builtin_popcount(x)
#define mod 1000000007
#define lo lower_bound
#define de(n) ll n;cin>>n;
#define def(a,n) ll n;cin>>n;ll a[n];re(i,n){cin>>a[i];}
#define defi(a,n,k) ll n;cin>>n; ll k;cin>>k;ll a[n];re(i,n){cin>>a[i];}
#define deb(x) cout<<#x<<"="<<x<<endl;
#define tr(it,a) for(auto it=a.begin();it!=a.end();it++)
#define nl cout<<endl;

using namespace std;



int main()
{
    int t;
    cin>>t;
    while(t--){
        ll x,n;
        cin>>n>>x;
        ll a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        unordered_map<int,int> m;
        for(int i=0;i<32;i++){
            m[i]=0;
        }
        for(int i=0;i<n;i++){
            bitset<32> a1(a[i]);
            for(int j=31;j>=0;j--){

                if(a1[j]==1){
                  if(x%2==0){
                    if(m[j]>0){
                        m[j]--;
                        a1[j]=0;
                    }
                    else{
                    if(i!=n-1){
                    if(x>0){
                    x--;
                    m[j]++;
                    a1[j]=0;
                    }
                    }
                    }
                  }
                  else{
                      if(x>0){
                          if(i!=n-1){
                              x--;
                              m[j]++;
                              a1[j]=0;
                          }
                      }
                      else{
                          if(m[j]>0){
                              m[j]--;
                              a1[j]=0;
                          }
                      }
                  }
                }
                
            }
            a[i]=(ll)a1.to_ullong();
        }
        if(x>0){
            if(x%2==0){
                x=0;
            }
            else{
                x=1;
                a[n-2]++;
                m[0]++;

            }
            
        }
        if(a[n-1]%2!=0){
            if(m[0]>0){
                a[n-1]--;
                m[0]--;
            }
        }
        for(int i=0;i<32;i++){
            if(m[i]%2==0){
                m[i]=0;
            }
            else{
                m[i]=1;
            }
        }
        ll las=0;
        ll k=1;
        for(int i=0;i<32;i++){
            las+=k*m[i];
            k*=2;
        }
        
        a[n-1]+=las;
        
    

        

          
            for(int i=0;i<n;i++){
                cout<<a[i]<<" ";
            }
            cout<<endl;

        
        

    }


    return 0;
}
