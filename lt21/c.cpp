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
#define mod 1000000007//998244353
#define lo lower_bound
#define de(n) ll n;cin>>n;
#define def(a,n) ll n;cin>>n;ll a[n];re(i,n){cin>>a[i];}
#define defi(a,n,k) ll n;cin>>n; ll k;cin>>k;ll a[n];re(i,n){cin>>a[i];}
#define deb(x) cout<<#x<<"="<<x<<endl;
#define tr(it,a) for(auto it=a.begin();it!=a.end();it++)
#define nl cout<<endl;
#define minato ios_base::sync_with_stdio(false), cin.tie(nullptr)
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

const int l=30;
// int next[100001];
//vector<int> v(0);
 int up[100001][l+1];
int solve(){
    ll n,k;
    ll s;
    //cout<<1<<endl;
    cin>>n>>k;
    cin>>s;
    //a[0]=0;
    ll a[n+1];
    a[0]=0;
    for(int i=1;i<=n;i++)cin>>a[i];
    //cout<<1<<endl;
    ///cout<<1<<endl;
    //priority_queue<ll> pq;
  
    //ll prev=0;
    vector<ll> v(n+1);
    v[0]=a[0];
    for(int i=1;i<=n;i++){
        v[i]=a[i]+v[i-1];

    }
    //cout<<1<<endl;
    ll c=0;
    //ll next[n];
    //mem1(next);
   
    for(int i=0;i<=n;i++){
        for(int j=0;j<=l;j++){
            up[i][j]=0;
        }
    }
    
    for(int i=1;i<=n;i++){
        if(a[i]>=s){
            c++;
            //next[i]=i;
        }
    }
    if(c>=n-1){
        cout<<k<<endl;
        return 0;
    }
    ll ans=0;
    //cout<<1<<endl;
    for(int i=1;i<=n;i++){
        //if(next[i]!=-1)continue;
       int p=lower_bound(all(v),v[i]-s)-v.begin();
       
       cout<<p<<endl;
       
       if(p==n+1){
           for(int j=0;j<=l;j++){
               up[i][j]=i;
           }
           continue;
       }
       //p++;
    //    if(p){
    //        p--;
    //    }

       up[i][0]=p;
       for(int j=1;j<=l;j++){
           up[i][j]=up[up[i][j-1]][j-1];
       }
       int x=i;
        c=0;
       for(int j=k;j>0;j/=2){
           if(j&1){
               x=up[x][c];
           }
           c++;
       }
       ans=max(ans,1LL*i-x);


    }
 
  
 
  
   
    cout<<ans<<endl;

    
   

    return 0;

}


int main()
{
    minato;
    int t;
    cin>>t;
    while(t--){
        solve();
        

    }


    return 0;
}
