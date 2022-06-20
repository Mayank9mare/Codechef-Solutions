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
//#define endl "\n"
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
const int MAXN=2e5+5;
int n,tree[4*MAXN];
int tree2[4*MAXN];
int A[MAXN];
int lazy[4*MAXN];
int lazy2[4*MAXN];
const int maxa=2147483647;

void build(int node, int start, int end)
{
    if(start == end)
    {
        // Leaf node will have a single element
        tree[node] = A[start];
        tree2[node]=A[start];
    }
    else
    {
        int mid = (start + end) / 2;
        // Recurse on the left child
        build(2*node, start, mid);
        // Recurse on the right child
        build(2*node+1, mid+1, end);
        // Internal node will have the sum of both of its children
        tree[node] = min(tree[2*node],tree[2*node+1]);
        tree2[node]=tree2[2*node]|tree2[2*node+1];
    }
}





void updateRange(int node, int start, int end, int l, int r, int val)
{
    if(lazy[node] != -1)
    { 
        // This node needs to be updated
        tree[node] = lazy[node];    // Update it
        if(start != end)
        {
            lazy[node*2] = lazy[node];                  // Mark child as lazy
            lazy[node*2+1] = lazy[node];                // Mark child as lazy
        }
        lazy[node] = -1;                                  // Reset it
    }
        if(lazy2[node] != -1)
    { 
        // This node needs to be updated
        tree2[node] = lazy2[node];    // Update it
        if(start != end)
        {
            lazy2[node*2] = lazy2[node];                  // Mark child as lazy
            lazy2[node*2+1] = lazy2[node];                // Mark child as lazy
        }
        lazy2[node] = -1;                                  // Reset it
    }

    if(start > end or start > r or end < l)              // Current segment is not within range [l, r]
        return;
    if(start >= l and end <= r)
    {
        // Segment is fully within range
        tree[node] = val;
        tree2[node] =val;
        if(start != end)
        {
            // Not leaf node
            lazy[node*2] = val;
            lazy[node*2+1] = val;
            lazy2[node*2] = val;
            lazy2[node*2+1] = val;

        }
        return;
    }
    int mid = (start + end) / 2;
    updateRange(node*2, start, mid, l, r, val);        // Updating left child
    updateRange(node*2 + 1, mid + 1, end, l, r, val);   // Updating right child
    tree[node] = min(tree[node*2],tree[node*2+1]); 
    tree2[node]=tree2[2*node]|tree2[2*node+1];       // Updating root with max value 
}

int queryRange(int node, int start, int end, int l, int r)
{
    if(start > end or start > r or end < l)
        return maxa;         // Out of range
    if(lazy[node] != -1)
    {
        // This node needs to be updated
        tree[node] =lazy[node];            // Update it
        if(start != end)
        {
            lazy[node*2] = lazy[node];         // Mark child as lazy
            lazy[node*2+1] = lazy[node];    // Mark child as lazy
        }
        lazy[node] = -1;                 // Reset it
    }
    

    if(start >= l and end <= r)             // Current segment is totally within range [l, r]
        return tree[node];
    int mid = (start + end) / 2;
    int p1 = queryRange(node*2, start, mid, l, r);         // Query left child
    int p2 = queryRange(node*2 + 1, mid + 1, end, l, r); // Query right child
    return min(p1, p2);
}
int queryRange2(int node, int start, int end, int l, int r)
{
    if(start > end or start > r or end < l)
        return -1;         // Out of range
    if(lazy2[node] != -1)
    {
        // This node needs to be updated
        tree2[node] =lazy2[node];            // Update it
        if(start != end)
        {
            lazy2[node*2] = lazy2[node];         // Mark child as lazy
            lazy2[node*2+1] = lazy2[node];    // Mark child as lazy
        }
        lazy2[node] = -1;                 // Reset it
    }
    

    if(start >= l and end <= r)             // Current segment is totally within range [l, r]
        return tree2[node];
    int mid = (start + end) / 2;
    int p1 = queryRange2(node*2, start, mid, l, r);         // Query left child
    int p2 = queryRange2(node*2 + 1, mid + 1, end, l, r); 
    // Query right child
    if(p1==-1)return p2;
    if(p2==-1)return p1;
    return (p1|p2);
}


int solve(){
    int n,m;
    cin>>n>>m;
    vector<pair<int,pll>> v;
    mem1(lazy);
    for(int i=0;i<n;i++){
        A[i]=maxa;
    }
    for(int i=0;i<m;i++){
        int x,y,z;
        cin>>x>>y>>z;
        x--;
        y--;
        v.pb({z,{x,y}});
    }
    build(1,0,n-1);
    sort(all(v));
    reverse(all(v));
    for(auto x:v){
        int z=x.first;
        int l=x.second.first;
        int r=x.second.second;
        updateRange(1,0,n-1,l,r,z);


    }
    int f=0;
      for(auto x:v){
        int z=x.first;
        int l=x.second.first;
        int r=x.second.second;
        if(queryRange2(1,0,n-1,l,r)!=z){
            f=1;
            break;
        }
    }
    if(f){
        cout<<-1<<endl;
        return 0;
    }
    
    for(int i=0;i<n;i++){
        cout<<queryRange(1,0,n-1,i,i)<<sp;
    }
    nl;
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
