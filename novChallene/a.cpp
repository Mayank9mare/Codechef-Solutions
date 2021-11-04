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
        def(a,n);
        if(n==1){
            cout<<a[0]<<endl;
        }
        else if(n==2){
            cout<<max(a[0],a[1])<<endl;
        }
        else{
        sort(a,a+n);
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=a[i];
        }
        int ans=1000;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int m= a[i]+a[j];
                m=max(m,sum-m);
                //cout<<m<<" ";
                ans=min(ans,m);

            }
        }
         int m= max(a[n-1],sum-a[n-1]);
         ans=min(ans,m);
        cout<<ans<<endl;

    }
    }


    return 0;
}
