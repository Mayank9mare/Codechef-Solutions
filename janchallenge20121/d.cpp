#include<bits/stdc++.h>
#define pb push_back
#define mk make_pair
#define ll long long
#define ss second
#define ff first
#define pll pair<ll,ll>
#define vll vector<ll>
#define mll map<ll,ll>
#define mod 998244353
#define w(x) ll x; cin>>x; while(x--)
#define ps(x,y) fixed<<setprecision(y)<<x;
#define fo(i, j, k, in) for (ll i=j ; i<k ; i+=in)
#define re(i, j) fo(i, 0, j, 1)
#define pi 3.1415926535897932384626433832795
#define all(cont) cont.begin(), cont.end()
#define countbit(x) __builtin_popcount(x)

#define lo lower_bound
#define de(n) ll n;cin>>n;
#define def(a,n) ll n;cin>>n;ll a[n];re(i,n){cin>>a[i];}
#define defi(a,n,k) ll n;cin>>n; ll k;cin>>k;ll a[n];re(i,n){cin>>a[i];}
#define deb(x) cout<<#x<<"="<<x<<endl;
#define tr(it,a) for(auto it=a.begin();it!=a.end();it++)
#define nl cout<<endl;

using namespace std;
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
int modinverse(ll a, ll m) 
{ 
    ll m0 = m; 
    int y = 0, x = 1; 
  
    if (m == 1) 
        return 0; 
  
    while (a > 1) { 
        // q is quotient 
        ll q = a / m; 
        ll t = m; 
  
        // m is remainder now, process same as 
        // Euclid's algo 
        m = a % m, a = t; 
        t = y; 
  
        // Update y and x 
        y = x - q * y; 
        x = t; 
    } 
  
    // Make x positive 
    if (x < 0) 
        x += m0; 
  
    return x; 
}
ll modInverse(ll n){
    ll p=mod;
    return power(n,p-2);
}
ll nCrModFermat(ll n,ll r){
    ll p=mod;
    if(r==0){
        return 1;
    }
    ll fac[n+1];
    fac[0]=1;
    for(int i=1;i<=n;i++){
        fac[i]=(fac[i-1]*i)%p;
    }
    return(fac[n]*modInverse(fac[r])%p*modInverse(fac[n-r])%p);

}




int main()
{
   
        ll m,n,k;
        cin>>m>>n>>k;
        if(m==2){
            if(k==1){
                ll ans=modInverse(power(k,n*m)%mod);
                cout<<ans%mod<<endl;
                
            }
            else{
           
           ll dp[n][2];
           memset(dp,0,sizeof(dp));
           dp[0][0]=k%mod;
           dp[0][1]=(2*k*(k-1)%mod)%mod;
           for(int i=1;i<n;i++){
               dp[i][0]+=((k-1)%mod*(dp[i-1][0]%mod+(k*power(k,2*(i-1))%mod)%mod)%mod)%mod;
               dp[i][0]%=mod;
               dp[i][0]+=dp[i-1][0]%mod;
               dp[i][0]%=mod;
               dp[i][0]+=(2ll*dp[i-1][1]%mod)%mod;
               dp[i][0]%=mod;
               dp[i][0]+=((k-2)%mod*(dp[i-1][1]%mod+((k*(k-1))%mod)*power(k,2*(i-1))%mod)%mod)%mod;
               dp[i][0]%=mod;
               dp[i][1]+=((((k-1))%mod)*(dp[i-1][0]%mod+k*power(k,2*(i-1))%mod)%mod)%mod;
               dp[i][1]%=mod;
               dp[i][1]+=((((k-1))%mod)*(dp[i-1][0]%mod+k*power(k,2*(i-1))%mod)%mod)%mod;
               dp[i][1]%=mod;
               dp[i][1]+=((((k-1)%mod*(k-2)%mod)%mod)*(dp[i-1][0]+(k%mod*2*(power(k,2*(i-1))%mod)%mod)))%mod;
               dp[i][1]+=(dp[i-1][1])%mod;
               dp[i][1]%=mod;
               dp[i][1]+=((k-2)%mod*(dp[i-1][1]%mod+((k*(k-1)%mod)%mod)*power(k,2*(i-1))%mod)%mod)%mod;
               dp[i][1]%=mod;
               dp[i][1]+=((k-2)%mod*(dp[i-1][1]%mod+((k*(k-1)%mod)%mod)*power(k,2*(i-1))%mod)%mod)%mod;
               dp[i][1]%=mod;
               dp[i][1]+=(((k-1)%mod)*(dp[i-1][1]%mod+(2*k*(k-1)%mod)%mod*power(k,2*(i-1))%mod)%mod)%mod;
               dp[i][1]%=mod;
               dp[i][1]+=(((k-2)%mod)*(dp[i-1][1]%mod+(2*k*(k-1)%mod)%mod*power(k,2*(i-1))%mod)%mod)%mod;
               dp[i][1]%=mod;
               dp[i][1]+=((((k-2)%mod*max(k-3,0LL)%mod)%mod)*(dp[i-1][1]%mod+(((2*k*(k-1))%mod)*power(k,2*(i-1))%mod)%mod))%mod;
               dp[i][1]%=mod;

              
               



           }
           ll ans =dp[n-1][0]+dp[n-1][1];
           ans%=mod;
          ll b=power(k,m*n);
           b=modInverse(b);
           ans=(ans*b)%mod;
           cout<<ans<<endl;
        }
        }
        else{
            ll ans=((n-1)%mod*(k-1)%mod)%mod;
            
           
            ans=(ans%mod*modInverse(k))%mod;
            ans=(ans+1)%mod;
            cout<<ans<<endl;
        

        }
        

        

   
            
        
      
    


    return 0;
}
