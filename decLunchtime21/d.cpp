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
//#define double long double
const int dx[4]={1,0,0,-1}, dy[4]={0,1,-1,0};
const int x_dir[]={-1,-1,-1,0,0,1,1,1};
const int y_dir[]={-1,0,1,-1,1,-1,0,1};

using namespace std;
//KnightMareVoid
int findRoots(int a, int b, int c,double & x,double & y)
{
    // If a is 0, then equation is not quadratic, but
    // linear
    if (a == 0) {
        
        return 0;
    }
 
    int d = b * b - 4 * a * c;
    double sqrt_val = (double)sqrt(1.0*abs(d));
 
    if (d > 0) {
        
        x= (double)(-b + sqrt_val) / (2.0 * a);
        y= (double)(-b - sqrt_val) / (2.0 * a);
        return 1;
    }
    else if (d == 0) {
        
        x= -(double)b / (2.0 * a);
        y= -(double)b / (2.0 * a);
        return 1;
    }
    else // d < 0
    {
        return 0;
    }
    return 1;
}
 
int solve(){
    int n,a,b;
    cin>>n>>a>>b;
    vector<pll> v;
    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        y++;
        
        v.pb({x,1});//++
        v.pb({y,0});//--

    }
    sort(all(v));
    map<ll,ll> m;
   

    int c=0;
    int prev=0;
    for(auto x:v){
    
       
        if(x.second==1){
          c++;
        }
        else{
            c--;
        }
        m[x.first]=c;
        
    }
    int ans=0;
   for(auto x=m.begin();x!=m.end();x++){
       //cout<<(*x).first<<sp<<(*x).second<<endl;
       double p1,p2;
       int a1=1;
       int a2=2*a+1;
       int a3=2*a-2*(*x).first;

       double p3,p4;

       int b1=-1;
       int b2=2*b-1;
       int b3=2*b-(2*((*x).first));

       if(findRoots(a1,a2,a3,p2,p1)&&findRoots(b1,b2,b3,p4,p3)){
           if(p1>p2){
               swap(p1,p2);
           }
           if(p3>p4){
               swap(p3,p4);
           }
           //cout<<1<<endl;
           int q1=(int)ceil(p1);
           int q2=(int)floor(p2);
           int q3=(int)ceil(p3);
           int q4=(int)floor(p4);
           int l=max(q1,q3);
           
        // if((*x).first==69){
        // cout<<p1<<sp<<p2<<endl;
        // cout<<p3<<sp<<p4<<endl;
        // }
           int r=min(q2,q4);
           
          if(r-l>=0 && r>=0){

              ans=max(ans,(*x).second);

          }
       }


    //    if((*x).first>=1 && (*x).first<=s){
    //        ans=max(ans,(*x).second);
    //    }
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
