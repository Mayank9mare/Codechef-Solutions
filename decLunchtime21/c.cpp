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
//KnightMareVoid
// const int MAXN=1e5;
// int n,tree[4*MAXN];
// int tree2[4*MAXN];
// int A[MAXN];

// void build(int node, int start, int end)
// {
//     if(start == end)
//     {
//         // Leaf node will have a single element
//         tree[node] = A[start];
//     }
//     else
//     {
//         int mid = (start + end) / 2;
//         // Recurse on the left child
//         build(2*node, start, mid);
//         // Recurse on the right child
//         build(2*node+1, mid+1, end);
//         // Internal node will have the sum of both of its children
//         tree[node] = max(tree[2*node],tree[2*node+1]);
//     }
// }


// int query(int node, int start, int end, int l, int r)
// {
//     if(r < start or end < l)
//     {
//         // range represented by a node is completely outside the given range
//         return INT_MIN;
//     }
//     if(l <= start and end <= r)
//     {
//         // range represented by a node is completely inside the given range
//         return tree[node];
//     }
//     // range represented by a node is partially inside and partially outside the given range
//     int mid = (start + end) / 2;
//     int p1 = query(2*node, start, mid, l, r);
//     int p2 = query(2*node+1, mid+1, end, l, r);
//     return max(p1,p2);
// }
// void build2(int node, int start, int end)
// {
//     if(start == end)
//     {
//         // Leaf node will have a single element
//         tree2[node] = A[start];
//     }
//     else
//     {
//         int mid = (start + end) / 2;
//         // Recurse on the left child
//         build2(2*node, start, mid);
//         // Recurse on the right child
//         build2(2*node+1, mid+1, end);
//         // Internal node will have the sum of both of its children
//         tree2[node] = min(tree2[2*node],tree2[2*node+1]);
//     }
// }


// int query2(int node, int start, int end, int l, int r)
// {
//     if(r < start or end < l)
//     {
//         // range represented by a node is completely outside the given range
//         return INT_MAX;
//     }
//     if(l <= start and end <= r)
//     {
//         // range represented by a node is completely inside the given range
//         return tree2[node];
//     }
//     // range represented by a node is partially inside and partially outside the given range
//     int mid = (start + end) / 2;
//     int p1 = query2(2*node, start, mid, l, r);
//     int p2 = query2(2*node+1, mid+1, end, l, r);
//     return min(p1,p2);
// }


int solve(){
    int n;
    cin>>n;
    vector<int> v;
    int a[n];
    map<int,int> m1,m2;
    for(int i=0;i<n;i++){
        cin>>a[i];
        v.pb(a[i]);
        m1[a[i]]++;
    }
    sort(all(v));
    int maxa=a[0],mina=a[0];
    int f=0;
    int l=0;
    int ans=0;
    for(int i=0;i<n;i++){

       if(l==i){
           if(a[i]==v[i]){
               l++;
               continue;
           }
           maxa=a[i];
           mina=a[i];
       }
       else{
           maxa=max(maxa,a[i]);
           mina=min(mina,a[i]);
       }
       //cout<<maxa<<sp<<mina<<endl;
       int p=upper_bound(all(v),maxa)-v.begin();
       p--;
       int p2=lower_bound(all(v),mina)-v.begin();
       //cout<<p<<sp<<p2<<endl;
       if(p<=i && l>=p2){
           ans+=(maxa-mina);
           l=i+1;
           
       }
       


    }
    cout<<ans<<endl;




    return 0;

}


signed main()
{
    minato;
    w(t)
    solve();


    return 0;
}
