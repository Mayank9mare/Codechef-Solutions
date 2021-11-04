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
        string s;
        cin>>s;
        int n=s.size();
        int odd=0,even=0,len=0;
        set<vector<int>> a;
        for(int i=0;i<n;i++){
            int d=0;
            even =0;
            odd=0;
            for(int j=i;j<n;j++){
                if(s[j]=='1'){
                    d++;
                }
                else{
                    if(d%2==0){
                        even++;

                    }
                    else{
                        odd++;
                    }
                }
                a.insert({j-i+1,even,odd});
                

            }
            // if(s[i]=='1'){
            //     even--;
            // }
            // else{
            //     odd--;
            // }
        }
        cout<<a.size()<<endl;
        
        

    }


    return 0;
}
