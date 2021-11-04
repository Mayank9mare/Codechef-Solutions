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
#define int long long
const int dx[4]={1,0,0,-1}, dy[4]={0,1,-1,0};
const int x_dir[]={-1,-1,-1,0,0,1,1,1};
const int y_dir[]={-1,0,1,-1,1,-1,0,1};

using namespace std;
//KnightMareVoid
const int MAXN=1e6;
int n,tree[4*MAXN];
int m;
int A[MAXN];


void build(int node, int start, int end)
{
    if(start == end)
    {
        // Leaf node will have a single element
        tree[node] = A[start];
    }
    else
    {
        int mid = (start + end) / 2;
        // Recurse on the left child
        build(2*node, start, mid);
        // Recurse on the right child
        build(2*node+1, mid+1, end);
        // Internal node will have the sum of both of its children
        tree[node] = gcd(tree[2*node],tree[2*node+1]);
    }
}



int query(int node, int start, int end, int l, int r)
{
    if(r < start or end < l)
    {
        // range represented by a node is completely outside the given range
        return -1;
    }
    if(l <= start and end <= r)
    {
        // range represented by a node is completely inside the given range
        return tree[node];
    }
    // range represented by a node is partially inside and partially outside the given range
    int mid = (start + end) / 2;
    int p1 = query(2*node, start, mid, l, r);
    int p2 = query(2*node+1, mid+1, end, l, r);
    if(p1==-1)return p2;
    if(p2==-1)return p1;
   return gcd(p1,p2);
}



vector<vector<int>> adj;
vector<int> euler;
vector<int> first;
vector<int> last;

int dfs(int u,int p){
    euler.pb(u);
    first[u]=euler.size()-1;
    for(int x:adj[u]){
        if(x==p)continue;
        dfs(x,u);
    }
    euler.pb(u);
    last[u]=euler.size()-1;
    return 0;
}
int pans=0;
int dfs2(int u,int par,ll a[]){
    //cout<<u<<sp<<p<<endl;
    int ans=0;
    int gd=a[u];
   // cout<<"AAA"<<u<<sp<<par<<endl;
    for(int x:adj[u]){
        //cout<<p<<sp<<x<<endl;
        //cout<<par<<endl;
        if(x==par)continue;
        int k=dfs2(x,u,a);
        //cout<<u<<sp<<x<<sp<<k<<endl;
        //cout<<x<<endl;
        //cout<<k<<sp<<u<<endl;
        ans+=k;
        gd=gcd(gd,k);
        

    }
    int l=first[u];
    int r=last[u];
    int q1=(l==0)?-1:query(1,0,m-1,0,l-1);
    int q2=(r>=m-1)?-1:query(1,0,m-1,r+1,m-1);
    //cout<<q1<<sp<<q2<<sp;
    //cout<<u<<sp<<ans<<endl;
    int q3=0;
    if(q1==-1 && q2==-1){
        q3=0;

    }
    else if(q1==-1){
        q3=q2;
    }
    else if(q2==-1){
        q3=q1;
    }
    else{
        q3=gcd(q1,q2);
    }
    ans+=q3;
    //cout<<u<<sp<<ans<<endl;
    pans=max(pans,ans);
    //cout<<pans<<endl;





    return gd;

}
int solve(){
    //int n;
    cin>>n;
    adj.assign(n,vector<int>(0));
    pans=0;
    euler.clear();
    first.assign(n,0);
    last.assign(n,0);
    for(int i=0;i<n-1;i++){
        int x,y;
        cin>>x>>y;
        x--;
        y--;
        adj[x].pb(y);
        adj[y].pb(x);
    }
    ll a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    dfs(0,-1);
    m=euler.size();
    // for(int i=0;i<m;i++){
    //     cout<<euler[i]<<sp;
    // }
    // nl;
    //vector<int> v(m);
    for(int i=0;i<m;i++){
        A[i]=a[euler[i]];
    }
    build(1,0,m-1);
    dfs2(0,-1,a);
    cout<<pans<<endl;



    return 0;

}


signed main()
{
    minato;
    int t;
    cin>>t;
    while(t--){
        solve();
        

    }


    return 0;
}
