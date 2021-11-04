



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
//KnightMareVoid
#include <bits/stdc++.h> 
using namespace std;
#define n 1000001

bool prime[n]; 
int aa[n];
  
void SieveOfEratosthenes(int n2) 
{ 
    // Create a boolean array "prime[0..n]" and initialize 
    // all entries it as true. A value in prime[i] will 
    // finally be false if i is Not a prime, else true. 
    
    memset(prime, true, sizeof(prime)); 
  
    for (int p=2; p*p<=n2; p++) 
    { 
        // If prime[p] is not changed, then it is a prime 
        if (prime[p] == true) 
        { 
            // Update all multiples of p greater than or  
            // equal to the square of it 
            // numbers which are multiple of p and are 
            // less than p^2 are already been marked.  
            for (int i=p*p; i<=n2; i += p) 
                prime[i] = false; 
        } 
    }
    int c=0;
    for(int i=5;i<n;i++){
        if(prime[i]&&prime[i-2]){
            c++;
        }
        aa[i]=c;

    } 
  
    // Print all prime numbers 
    // for (int p=2; p<=n; p++) 
    //    if (prime[p]) 
    //       cout << p << " "; 
} 



int main()
{
   
    int t;
    cin>>t;
    SieveOfEratosthenes(n);

   
    while(t--){
        int n1;
        cin>>n1;
        cout<<aa[n1]<<endl;
        

    }


    return 0;
}
