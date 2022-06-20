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
//#define mod 1000000007
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
#define endl "\n"
#define int long long
const int dx[4]={1,0,0,-1}, dy[4]={0,1,-1,0};
const int x_dir[]={-1,-1,-1,0,0,1,1,1};
const int y_dir[]={-1,0,1,-1,1,-1,0,1};


using namespace std;
typedef unsigned long long ull;
typedef long double lld;
// typedef tree<pair<int, int>, null_type, less<pair<int, int>>, rb_tree_tag, tree_order_statistics_node_update > pbds; // find_by_order, order_of_key

#ifndef KNIGHTMARE
#define debug(x) cerr << #x <<" "; _print(x); cerr << endl;
#else
#define debug(x)
#endif

//void _print(ll t) {cerr << t;}
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(lld t) {cerr << t;}
void _print(double t) {cerr << t;}
void _print(ull t) {cerr << t;}

template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}
//KnightMareVoid

vector<vector<int>> adj;
const int MAXN=3e5+10;
int a[MAXN];
int b[MAXN];
int dp[MAXN][3];
int dfs(int u,int p,int d){
    if(dp[u][d]!=-1)return dp[u][d];
    //cout<<u<<sp<<p<<sp<<d<<sp<<c[u]<<endl;
    if(d==2){
        if(a[u]==b[u]){
            int k1=1;
            int k2=0;
            for(int x:adj[u]){
                if(p==x)continue;
                k1+=dfs(x,u,b[u]);
                k2+=dfs(x,u,2);

            }
            return dp[u][d]=min(k1,k2);

        }
        else{
            int k2=1;
            for(int x:adj[u]){
                if(p==x)continue;
                //k1+=dfs(x,u,b[u],b,a);
                k2+=dfs(x,u,b[u]);

            }
            return dp[u][d]=k2;
            
        }
    }
        else{
            if(b[u]==d){
            //int k1=1;
            int k2=0;
            for(int x:adj[u]){
                if(p==x)continue;
                //k1+=dfs(x,u,b[u],b,a);
                k2+=dfs(x,u,d);

            }
            return dp[u][d]=k2;

            }
            else{
                 int k2=1;
            for(int x:adj[u]){
                if(p==x)continue;
                //k1+=dfs(x,u,b[u],b,a);
                k2+=dfs(x,u,b[u]);

            }
            return dp[u][d]=k2;


            }
        }
    
   
    return 0;
}
int solve(){
    int n;
    cin>>n;
    //mem1(dp);
   
    int ans=0;

    for(int i=0;i<n;i++){
        cin>>a[i];
        dp[i][0]=-1;
        dp[i][1]=-1;
        dp[i][2]=-1;
    }
    for(int i=0;i<n;i++)cin>>b[i];
    
    adj.assign(n,vector<int>(0));
    for(int i=0;i<n-1;i++){
        int x,y;
        cin>>x>>y;
        x--;y--;
        adj[x].pb(y);
        adj[y].pb(x);
    }
ans=dfs(0,-1,2);
cout<<ans<<endl;
    return 0;

}


signed main()
{
    #ifndef KNIGHTMARE
    freopen("Error.txt", "w", stderr);
    #endif
    
    minato;
    w(t)
    solve();


    return 0;
}
