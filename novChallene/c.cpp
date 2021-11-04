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
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        int c=0;
        int d=0;
        int i=0,j=0;
        queue<pair<int,int>> mag;
        queue<pair<int,int>> iro;
        while(i<n){
            while(j<n){
                if(s[j]=='I'){
                    iro.push(mk(j,c));

                }
                if(s[j]=='M'){
                    mag.push(mk(j,c));
                }
                if(s[j]==':'){
                    c++;
                }
                if(s[j]=='X'){
                    j++;
                    i=j;
                    
                    break;
                }

                j++;
                i=j;
            }
            while(!mag.empty() && !iro.empty()){
                int p=k+1-abs(mag.front().first -iro.front().first)-abs(mag.front().second-iro.front().second);
                if(p>0){
                    d++;
                    mag.pop();
                    iro.pop();

                }
                else if(mag.front().first<iro.front().first){
                    mag.pop();
                }
                else{
                    iro.pop();
                }
            }
            while(!mag.empty()){
                mag.pop();
            }
            while(!iro.empty()){
                iro.pop();
            }


        }
        cout<<d<<endl;
      
 
        



      

    }


    return 0;
}

