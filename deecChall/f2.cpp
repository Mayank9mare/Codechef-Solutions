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
int check(string s,int n){
    int c=1;
    for(int i=0;i<n;i++){
        if(s[i]!=s[n-1-i]){
            c=0;
            break;
        }

    }
    return c;
}




int main()
{
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int n=s.size();
        set<string> a;
        set<string> b;
        for(int i=0;i<n;i++){
            string s1="";
            for(int j=i;j<n;j++){
                s1+=s[j];
                a.insert(s1);

            }
        }
        int c=0;
        int d=0;
        for(int i=0;i<n;i++){
            d=0;
            string s1="";
            for(int j=i;j<n;j++){
                s1+=s[j];
                if(s[j]=='1'){
                    d++;
                }
                if(d%2==0 && d!=0){
                    string s2=s1;
                    reverse(s2.begin(),s2.end());
                    if(b.find(s2)==b.end()){

                    
                    if(a.find(s2)!=a.end() && s1!=s2){
                        c++;


                    }
                    b.insert(s2);
                    

                
                }
            }
            
        }
  

            
        }
        
        //cout<<c<<endl;
        cout<<a.size()-c<<endl;


       

        
        

    }


    return 0;
}
