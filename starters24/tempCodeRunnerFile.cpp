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
// #define int long long
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
string x="abcdefghijklmnopqrstuvwxyz";

vector<vector<int>> pre;
vector<vector<int>> tab;
int solve(){
    //debug((int)x.size());
    int n;
    cin>>n;
    string s;
    cin>>s;
    int m;
    cin>>m;
   
    int prev[26];
    mem1(prev);
    int f=0;
 
    //int pre[n][26];
    //mem0(pre);
    pre.assign(n,vector<int>(26,0));
    for(int i=0;i<n;i++){
    
        if(i>0){
            for(int j=0;j<26;j++){
                pre[i][j]=0;
                pre[i][j]+=pre[i-1][j];
            }
        }
        pre[i][s[i]-'a']++;
    }
    //cout<<1<<endl;
    //int tab[n][31];
    tab.assign(n,vector<int>(31));
       for(int i=0;i<n;i++){
       

        
            if(s[i]!='a'){
                char c1=char(int(s[i])-1);
                if(prev[c1-'a']!=-1){
                    tab[i][0]=prev[c1-'a'];
                }
                else{
                    tab[i][0]=i;
                }
                
            }
            else{
                char c1='z';
                
                if(prev[c1-'a']!=-1){
                    tab[i][0]=prev[c1-'a'];
                }
                else{
                    tab[i][0]=i;
                }
            }

        
        prev[s[i]-'a']=i;


    }
    //cout<<2<<endl;
      for(int j=1;j<31;j++){
        for(int i=0;i<n;i++){
            // cout<<j<<sp<<i<<endl;
            // cout<<tab[i][j-1]<<endl;
            tab[i][j]=tab[tab[i][j-1]][j-1]; 
        }
    }
    
    char c=x[((m)%26 +25)%26];
    //cout<<c<<endl;
    vector<int> v;
    for(int i=0;i<n;i++){
        if(s[i]==c){
            v.pb(i);
        }
    }
    //debug(v);
    // for(int i=0;i<26;i++){
    //     cout<<pre[n-1][i]<<sp;
    // }
    // nl;
    //debug(c);
    int ans=mod;
    for(int i:v){
        int f=0;
        //debug(i);
        
            int node=i;
            //debug(node);
            int m1=m-1;
           // cout<<m1<<endl;
            for(int j=30;j>=0;j--){
            if((1LL<<j)&m1){
                //cout<<j<<endl;
                node=tab[node][j];
            }
            }
            
       // cout<<s[node]<<endl;
        //debug(node);
        if(s[node]!='a'){
            //debug(s[node]);
            f=1;
            
        }
        int r=m/26;
        int l=m%26;
        
        l--;
        for(int j=0;j<26;j++){
        int prv=(node==0)?0:pre[node-1][j];
        int cnt=r;
        if(l>=j){
            cnt++;
        }
        // debug(pre[i][j]-prv);
        // debug(cnt);
        if(pre[i][j]-prv<cnt){
            
            //debug(i);
            f=1;
            break;


        }
        }
        if(f==0){
            int d=i-node+1;
            ans=min(ans,d-m);
        }
        
        
    }
    if(ans==mod){
        ans=-1;
    }
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
