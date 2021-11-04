//                           ,;;;;;;,
//                                 ,;;;'""`;;\
//                               ,;;;/  .'`',;\
//                             ,;;;;/   |    \|_
//                            /;;;;;    \    / .\
//                          ,;;;;;;|     '.  \/_/
//                         /;;;;;;;|       \
//              _,.---._  /;;;;;;;;|        ;   _.---.,_
//            .;;/      `.;;;;;;;;;|         ;'      \;;,
//          .;;;/         `;;;;;;;;;.._    .'         \;;;.
//         /;;;;|          _;-"`       `"-;_          |;;;;\
//        |;;;;;|.---.   .'  __.-"```"-.__  '.   .---.|;;;;;|
//        |;;;;;|     `\/  .'/__\     /__\'.  \/`     |;;;;;|
//        |;;;;;|       |_/ //  \   //  \ \_|       |;;;;;|
//        |;;;;;|       |/ |/    || ||    \| \|       |;;;;;|
//         \;;;;|    __ || _  .-.\| |/.-.  _ || __    |;;;;/
//          \jgs|   / _\|/ = /_o_\   /_o_\ = \|/_ \   |;;;/
//           \;;/   |`.-     `   `   `   `     -.`|   \;;/
//          _|;'    \ |    _     _   _     _    | /    ';|_
//         / .\      \_  ( '--'(     )'--' )  _//      /. \
//         \/_/       \_/|  /_   |   |   _\  |\_/       \_\/
//                       | /|\  \   /  //|\ |
//                       |  | \'._'-'_.'/ |  |
//                       |  ;  '-.```.-'  ;  |
//                       |   \    ```    /   |
//     __                ;    '.-"""""-.'    ;                __
//    /\ \_         __..--\     `-----'     /--..__         _/ /\
//    \_'/\`''---''`..;;;;.'.__,       ,__.',;;;;..`''---''`/\'_/
//         '-.__'';;;;;;;;;;;,,'._   _.',,;;;;;;;;;;;''__.-'
//              ``''--; ;;;;;;;;..`"`..;;;;;;;; ;--''``   _
//         .-.       /,;;;;;;;';;;;;;;;;';;;;;;;,\    _.-' `\
//       .'  /_     /,;;;;;;'/| ;;;;;;; |\';;;;;;,\  `\     '-'|
//      /      )   /,;;;;;',' | ;;;;;;; | ',';;;;;,\   \   .'-./
//      `'-..-'   /,;;;;','   | ;;;;;;; |   ',';;;;,\   `"`
//               | ;;;','     | ;;;;;;; |  ,  ', ;;;'|
//              _\__.-'  .-.  ; ;;;;;;; ;  |'-. '-.__/_
//             / .\     (   )  \';;;;;'/   |   |    /. \
//             \/_/   (`     `) \';;;'/    '-._|    \_\/
//                     '-/ \-'   '._.'         `
//                       """      /.`\
//                                \|_/


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
#define mem1(a)           memset(a,-1,sizeof(a))
#define mem0(a)           memset(a,0,sizeof(a))
#define ppc               __builtin_popcount
#define ppcll             __builtin_popcountll
#define precision(x) cout << fixed << setprecision(x);
#define gcd(a,b)    __gcd((a),(b))
#define lcm(a,b)    ((a)*(b)) / gcd((a),(b))
//#define endl "\n"
const int dx[4]={1,0,0,-1}, dy[4]={0,1,-1,0};
const int x_dir[]={-1,-1,-1,0,0,1,1,1};
const int y_dir[]={-1,0,1,-1,1,-1,0,1};

using namespace std;
//KnightMareVoid
const int N=1e5+1;
int no_of_digit(ll a)
{  int c=0;
    while(a>0){
        c++;
        a/=10;

    }
    return c;
   
}
const int MAX=2e6+10;
ll fac[MAX];
ll infact[MAX];
int modu(ll x){
while(x<0)
  x+=mod;
return (x%mod);
}
ll power(ll x,ll y){
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
ll modInverse(ll n){
    ll p=mod;
    return power(n,p-2);
}
ll nCrModFermat(ll n,ll r){
    if(r>n)return 0;
    if(r==n)return 1;
    ll p=mod;
    if(r==0){
        return 1;
    }
    //cout<<1<<endl;
    
  
    return(fac[n]%mod*(infact[r])%p*(infact[n-r])%p)%mod;

}
void preprocess(){
    fac[0]=1;
    infact[0]=1;
    //cout<<1<<endl;
    for(int i=1;i<MAX;i++){
        fac[i]=(fac[i-1]%mod*i%mod)%mod;
        infact[i]=(ll)infact[i - 1] * power(i, mod - 2) % mod;
        //cout<<fac[i]<<sp;
    }
}
int isPalindrome(ll a){
    vector<int> v;
    while(a>0){
        v.pb(a%10);
        a/=10;
    }
    int n=v.size();
    if(n%2==0)return 0;
    for(int i=0;i<n;i++){
        if(v[i]!=v[n-i-1]){
            return 0;
        }
    }
    return 1;
}
int cnt(ll a){
    int c=0;
    while(a){
        c++;
        a/=10;
    }
    return c;
}
void create(vector<ll> &v){
    vector<string> s;
    for(int i=0;i<10;i++){
        v.pb(i);
        s.pb(to_string(i));

    }
    ll c=1;
    while(v.size()<N){
        vector<string> s2(0);
        c+=2;
        for(int i=0;i<s.size();i++){
           for(int j=0;j<10;j++){
               string a=to_string(j)+s[i]+to_string(j);
               s2.pb(a);
               ll val=stoll(a,nullptr,10);
               ll pp=cnt(val);
               if(pp==c){
                   v.pb(val);
               }
               if(v.size()==N)break;
           }
           if(v.size()==N)break;
        }
        s=s2;
    }
  
}
   
int solve(){
    vector<ll> v;
    create(v);
    sort(all(v));
    v.pb(10000100001);
    //cout<<v.size()<<endl;
    // for(int i=0;i<v.size();i++){
    //     cout<<v[i]<<sp;
    //     //if(i==2000)break;
    // }
    // nl;

    // for(int i=1;i<=N;i++){
    //    if(isPalindrome(i)){
    //        v.pb(i);
    //    }
      


    // }
      int n=v.size();
        ll s[n]={0};
        s[0]=v[0];
        for(int i=1;i<n;i++){
            s[i]=(s[i-1]+v[i]);
            //cout<<s[i]<<endl;
        }
        //cout<<s[N]-s[N-1]<<endl;
    int q;
    cin>>q;
    while(q--){
        int l,r;
        cin>>l>>r;
        // l--;
        // r--;
        //cout<<v[l]<<sp<<v[r]<<endl;
        ll sum=(s[r]-s[l]);
       // cout<<sum<<endl;
        ll ans=power(v[l]%mod,sum)%mod;
        cout<<ans<<endl;

    }

    return 0;

}


int main()
{
ios_base::sync_with_stdio(0);
cin.tie(0);
solve();


    return 0;
}
