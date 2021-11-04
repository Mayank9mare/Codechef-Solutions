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
ios_base::sync_with_stdio(0);
cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        ll n,m;
        cin>>n>>m;
        int a[n];
        int b[m];
        int s1=0,s2=0;

        for(int i=0;i<n;i++){
            cin>>a[i];
            s1+=a[i];
        }
        for(int i=0;i<m;i++){
            cin>>b[i];
            s2+=b[i];
        }
        sort(a,a+n);
        sort(b,b+m);
        reverse(b,b+m);
        int c=0;
        int i=0;
        while(s1<=s2){
            if(i==n ||i==m){
                c=-1;
                break;
            }
            s1+=(b[i]-a[i]);
            s2-=(b[i]-a[i]);
            i++;
            c++;
            
        }
        cout<<c<<"\n";


    }


    return 0;
}
