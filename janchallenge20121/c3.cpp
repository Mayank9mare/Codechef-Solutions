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
#define I 1000000000
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
        int n;
        cin>>n;
        unordered_map<ll,ll> m;
        vector<vector<ll>> v(n);
        ll a[n];
        ll c1=0,c2=0;
        
        for(int i=0;i<n;i++){
            int x;
            cin>>x;

            int c=0;
            for(int j=0;j<x;j++){
                ll y;
                cin>>y;
                m[abs(y)]++;
                if(m[abs(y)]==2)c1++;
                if(y>0){
                    c++;
                }
                v[i].pb(y);
            }
            //sort(v[i].begin(),v[i].end());
            a[i]=c;
           
        }
        ll ans=0;
        ans+=c1;
        ll b[n];
        memset(b,-1,sizeof(b));
        for(int i=0;i<n;i++){
            for(int j=0;j<v[i].size();j++){
                if(v[i][j]<0){
                    b[i]=j;
                    
                }


            }
        }
        //cout<<ans<<endl;
        for(int i=0;i<n;i++){
            priority_queue<ll> pq1;
            priority_queue<ll> pq2;
            for(int j=0;j<v[i].size();j++){
                if(v[i][j]>0){
                    pq1.push(-v[i][j]);
                    
                }
                else{
                    pq2.push(v[i][j]);
                }

            }
            while(1){
                 if(pq1.empty() ||pq2.empty()){
                    break;
                }
                if(abs(pq1.top())>abs(pq2.top())){
                    if(m[abs(pq2.top())]>1){
                        ans+=(pq2.size()-1);
                        pq2.pop();
                    }
                    else{
                        ans+=(pq1.size());
                        pq2.pop();
                        

                    }
                    //cout<<ans<<endl;
                }
                else if(abs(pq1.top())<abs(pq2.top())){
                    if(m[abs(pq1.top())]>1){
                     ans+=(pq1.size()-1);
                     pq1.pop();
                     
                    }
                    else{
                        ans+=(pq2.size());
                        pq1.pop();
                    }
                    //cout<<ans<<"a"<<endl;

                }
                else{
                    ans+=(pq1.size()+pq2.size()-2);
                    pq1.pop();
                    pq2.pop();
                    //cout<<ans<<endl;

                }
               
            }
            while(!pq1.empty()){
                if(m[abs(pq1.top())]>1){
                    ans+=(pq1.size()-1);
                    pq1.pop();
                }
                else{
                    pq1.pop();
                }
                //cout<<ans<<endl;
            }
            while(!pq2.empty()){
                if(m[abs(pq2.top())]>1){
                    ans+=(pq2.size()-1);
                    pq2.pop();
                }
                else{
                    pq2.pop();
                }
                //cout<<ans<<endl;
            }
        }
        

      
        
        cout<<ans<<"\n";
      

                

      
        

    }


    return 0;
}
