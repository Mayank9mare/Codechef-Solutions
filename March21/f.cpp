//              .-""""-.
//                        / j      \
//                       :.d;       ;
//                       $P        :
//            .m._       $$         :
//           dSMMSSSss.__$b.    __ :
//          :MMSMMSSSMMMSS$$b  $P ;
//          SMMMSMMSMMMSSS$$$$     :b
//         dSMMMSMMMMMMSSMM$$b.dP SSb.
//        dSMMMMMMMMMMSSMMPT$$=-. /TSSSS.
//       :SMMMSMMMMMMMSMMP  `b_.'  MMMMSS.
//       SMMMMMSMMMMMMMMM \  .'\    :SMMMSSS.
//      dSMSSMMMSMMMMMMMM  \/\_/; .'SSMMMMSSSm
//     dSMMMMSMMSMMMMMMMM    :.;'" :SSMMMMSSMM;
//   .MMSSSSSMSSMMMMMMMM;    :.;   MMSMMMMSMMM;
//  dMSSMMSSSSSSSMMMMMMM;    ;.;   MMMMMMMSMMM
// :MMMSSSSMMMSSP^TMMMMM     ;.;   MMMMMMMMMMM
// MMMSMMMMSSSSP   `MMMM     ;.;   :MMMMMMMMM;
// "TMMMMMMMMMM      TM;    :`.:    MMMMMMMMM;
//    )MMMMMMM;     _/\    :`.:    :MMMMMMMM
//   dSS$$MMMb.  |._\\   :`.:     MMMMMMMM
//   T$S$$$$$$$$$m;O\\"-;`.:_.-  MMMMMMM;
//  :$$$$$$$$$$$$$$b_l./\ ;`.:    mMMSSMMM;
//  :$$$$$$$$$$$$$$$$$$$./\;`.:  .$MSMMMMMM
//   $$$$$$$$$$$$$$$$$$$$. \`.:.$$$SMSSSMMM;
//   $$$$$$$$$$$$$$$$$$$$$. \.:$$$$SSMMMMMMM
//   :$$$$$$$$$$$$$$$$$$$$$.//.:$$$SSSSSSSMM;
//   :$$$$$$$$$$$$$$$$$$$$$$.`.:$SSSSSSSMMMP
//    $$$$$$$$$;"^J "^$$$$;.`.$P  `SSSMMMM
//    :$$$$$$$$$       :$$$;.`.P'..   TMMM$b
//    :$$$$$$$$$;      $$$$;.`/ c^'   d$$$$S;
//    $$$$S$$$$;      '^^^:_dg:___.$$$$$SSS
//    $$$SS$$$$;            $$$$$$$$$$$$$SSS;
//   :$$SSSS$$$$            : $$$$$$$$$$$$SSS
//   :P"TSSSS$$$            ; $$$$$$$$$$$$SSS;
//   j    `SSSSS$           :  :$$$$$$$$$$$$SS$
//  :       "^S^'           :   $$$$$$$$$$$$S$;
//  ;.____.-;"               "--^$$$$$$$$$$$$P
//  '-....-"  bug                  ""^^T$$$P"





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
#define sp " "
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
const int N=500010;

using namespace std;
//KnightMareVoid
int modu(ll x){
while(x<0)
  x+=mod;
return (x%mod);
}
ll power(ll x,int y){
    ll p=mod;
    ll res =1;
    x=x%p;
    while(y>0){
        if(y&1){
            res=(res*x)%p;
        }
            y=y>>1;
            x=(x*x)%p;
        }
        return res;

    
}
ll fac[N+1];
ll fact(){
    
    fac[0]=1;
    for(int i=1;i<=N;i++){
        fac[i]=(fac[i-1]*i)%mod;
    }

}
ll modInverse(ll n){
    ll p=mod;
    return power(n,p-2);
}
ll nCrModFermat(int n,int r){
    if(r>n)return  0;
    ll p=mod;
    if(r==0){
        return 1;
    }
    
    return(fac[n]*modInverse(fac[r])%p*modInverse(fac[n-r])%p);

}
vector<vector<int>> adj;
vector<int> vis;
vector<int> in_deg;
vector<int> ways;
int n,k;




ll dfs(int s){
    vis[s]=1;
    ll ans=1;
    int c=0;
    
    for(int u:adj[s]){
        

        if(vis[u]==0){
            int cur=dfs(u);
            c+=cur;
            ans*=nCrModFermat(c,cur);
            ans%=mod;
            ans*=ways[u];
            ans%=mod;

           
            

        }
    }
    ans%=mod;
    ways[s]=ans;
    return c+1;
        


 
  


}

ll DFS(int s){
    
    vis.resize(n,0);
    in_deg.resize(n,0);
    ways.resize(n,0);
    fill(all(vis),0);
    fill(all(in_deg),0);
    fill(all(ways),0);
    dfs(s);
 
   return  ways[s];
    //nl;

}
vector<pair<ll,pll>> v;
vector<ll> subtree;
int getNode(int s){
    vis[s]=1;
    ll sub=0;
    ll cur=0;
    for(int u:adj[s]){
        if(!vis[u]){
            cur=getNode(u);
            sub+=cur;
            int km=min(n-cur,cur);
            v.pb({km,{u,s}});
        }
    }
    subtree[s]=sub+1;
    return sub+1;

}

 int main()
{
ios_base::sync_with_stdio(0);
cin.tie(0);
    fact();
    int t;
    cin>>t;
    while(t--){
        
        cin>>n>>k;
        
        adj.clear();
        adj.resize(n);
        for(int i=0;i<n-1;i++){
            int a,b;
            cin>>a>>b;
            a--;b--;
            adj[a].pb(b);
            adj[b].pb(a);


        }
        v.clear();
        subtree.clear();
        subtree.resize(n);
        vis.clear();
        vis.resize(n,0);
        getNode(0);
        int fl=1;
        sort(all(v));
        reverse(all(v));
        int k1,k2;
        if(v[0].first!=v[1].first){
            int x=v[0].second.first,y=v[0].second.second;
            if(subtree[x]==n-subtree[x]){
                k1=max(x,y);
                k2=min(x,y);
            }
            else{
                if(subtree[x]>n-subtree[x]){
                    k1=x;
                    k2=y;
                }
                else{
                    k1=y;
                    k2=x;
                }
            }
        }
        else{
            vector<ll> tmp;
            if((v[0].second.first==v[1].second.first) || (v[0].second.first==v[1].second.second)){
                k1=v[0].second.first;

            }
            else{
                k1=v[0].second.second;
            }
             fl=1;
            tmp.pb((v[0].second.first!=k1)?v[0].second.first:v[0].second.second);
            while(fl!=n && v[fl-1].first==v[fl].first){
                tmp.pb((v[fl].second.first!=k1)?v[fl].second.first:v[fl].second.second);
                ++fl;
            }
            k2=*max_element(all(tmp));
        }
        if(k==1){
            vis.clear();ways.clear();
            vis.resize(n,0);ways.resize(n);
            dfs(k1);
            cout<<k1+1<<sp<<((ways[k1]%mod)+mod)%mod<<endl;
        }
        else{
            vis.clear();
            ways.clear();
            vis.resize(n,0);
            ways.resize(n);
            dfs(k2);
            cout<<k2+1<<sp<<((ways[k2]%mod)+mod)%mod<<endl;
        }


        
        


        
        

    }
    return 0;
  


 
}
