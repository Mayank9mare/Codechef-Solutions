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
        ll n,x;
        cin>>n>>x;
        ll a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        unordered_map<int,ll> m;
        for(int i=0;i<32;i++){
            m[i]=0;

        }
        for(int i=0;i<n-2;i++){
            bitset<32> b(a[i]);
            for(int j=31;j>=0;j--){
                if(b[j]==1){
                    if(m[j]>0){
                        m[j]--;
                        b[j]=0;

                    }
                    else{
                        if(x>0){
                            m[j]++;
                            x--;
                            b[j]=0;
                        }
                    }
                }
            }
            a[i]=(ll)b.to_ullong();

        }
        if(x>0){
            
            bitset<32> b(a[n-2]);
            for(int i=31;i>=0;i--){
                
                if(b[i]==1){
                    if(m[i]==0){
                        if(x>0){
                            x--;
                            b[i]=0;
                            m[i]++;
                        }
                    }
                }
                

            }
            a[n-2]=(ll)b.to_ullong();
        }
        else{
            bitset<32> b(a[n-2]);
            for(int i=0;i<32;i++){
                if(b[i]==1){
                    if(m[i]>0){
                        m[i]--;
                        b[i]=0;

                    }
                }
            }
            a[n-2]=(ll)b.to_ullong();
        }
            
        if(x>0){
            if(x%2==0){
                    bitset<32> b(a[n-2]);
                    for(int i=31;i>=0;i--){
                        if(b[i]==1){
                            if(m[i]>0){
                                m[i]--;
                                b[i]=0;
                            }
                        }
                        
                        
                    }
                    a[n-2]=(ll)b.to_ullong();
                }
            else{
                bitset<32> b(a[n-2]);
                for(int i=0;i<32;i++){
                    if(b[i]==1){
                        x--;
                        m[i]++;
                        b[i]=0;
                        break;

                    }

                }
                for(int i=0;i<32;i++){
                    if(b[i]==1){
                        if(m[i]>0){
                            m[i]--;
                            b[i]=0;

                        }
                    }
                }
                a[n-2]=(ll)b.to_ullong();

            }

        }
            bitset<32> b(a[n-1]);
            for(int i=0;i<32;i++){
                
                if(b[i]==1){
                    if(m[i]>0){
                        m[i]--;
                        b[i]=0;
                    }
                }
            }
            a[n-1]=(ll)b.to_ullong();
            for(int i=0;i<32;i++){
                if(m[i]%2==0){
                    m[i]=0;
                }
                else{
                    m[i]=1;

                }
            }
        
            ll k=1;
            ll las=0;
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
