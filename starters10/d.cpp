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
#define endl "\n"
const int dx[4]={1,0,0,-1}, dy[4]={0,1,-1,0};
const int x_dir[]={-1,-1,-1,0,0,1,1,1};
const int y_dir[]={-1,0,1,-1,1,-1,0,1};

using namespace std;
//KnightMareVoid
const long long INF=-1e9;
ll dp[155][155][155];
int solve(){
    int n,k;
    cin>>n>>k;
    vector<string> s;
    for(int i=0;i<n;i++){
        string s1;
        cin>>s1;
        s.pb(s1);
    }
    ll a[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    
    //memset(dp,(ll)INF,sizeof(dp));
    for(int i=0;i<=n;i++){
        for(int j=0;j<=n;j++){
            for(int l=0;l<=n;l++){
                dp[i][j][l]=INF;
            }
        }
    }
    dp[0][0][0]=a[0][0];
    for(int l=0;l<=k;l++){
        dp[0][0][l]=a[0][0];
    }
    for(int i=1;i<n;i++){
        if(s[i][0]=='#'){
            for(int j=0;j<k;j++){
                //if(dp[i-1][0][j]==-1)continue;
                dp[i][0][j+1]=max(dp[i-1][0][j]+a[i][0],dp[i][0][j+1]);
                // if(dp[i][0][j+1]<INF){
                //     dp[i][0][j+1]=INF;
                // }
            }
        }
        else{
            for(int j=0;j<k;j++){
                //if(dp[i-1][0][j]==-1)continue;
                dp[i][0][j+1]=max(dp[i-1][0][j]+a[i][0],dp[i][0][j+1]);
                //if(dp[i][0][j+1]<INF)dp[i][0][j+1]=INF;

            }
            dp[i][0][k]=max(dp[i][0][k],dp[i-1][0][k]+a[i][0]);
            dp[i][0][0]=max(dp[i][0][0],dp[i-1][0][0]+a[i][0]);
        }
    }
    for(int j=1;j<n;j++){
        if(s[0][j]=='#'){
            for(int i=0;i<k;i++){
                //if(dp[0][j-1][i]==-1)continue;
                dp[0][j][i+1]=max(dp[0][j-1][i]+a[0][j],dp[0][j][i+1]);
                // if(dp[0][j][i+1]<INF){
                //     dp[0][j][i+1]=INF;
                // }
            }
        }
        else{
            for(int i=0;i<k;i++){
                //if(dp[0][j-1][i]==-1)continue;
                dp[0][j][i+1]=max(dp[0][j-1][i]+a[0][j],dp[0][j][i+1]);
                // if(dp[0][j][i+1]<INF){
                //     dp[0][j][i+1]=INF;
                // }
            }
            dp[0][j][0]=max(dp[0][j-1][0]+a[0][j],dp[0][j][0]);
            dp[0][j][k]=max(dp[0][j-1][k]+a[0][j],dp[0][j][k]);
        }
    }
    for(int i=1;i<n;i++){
        for(int j=1;j<n;j++){
            if(s[i][j]=='.'){
                dp[i][j][0]=max(max(dp[i-1][j][0],dp[i][j-1][0])+a[i][j],dp[i][j][0]);
                // if(dp[i][j][0]<INF){
                //     dp[i][j][0]=INF;
                // }
                for(int l=0;l<k;l++){
                    dp[i][j][l+1]=max({dp[i-1][j][l]+a[i][j],dp[i][j-1][l]+a[i][j],dp[i][j][l+1]});
                    // if(dp[i][j][l+1]<INF){
                    //     dp[i][j][l+1]=INF;
                    // }
                }
                dp[i][j][k]=max(max(dp[i-1][j][k],dp[i][j-1][k])+a[i][j],dp[i][j][k]);
                // if(dp[i][j][k]<INF){
                //     dp[i][j][k]=INF;
                // }
                
            }
            else{
                for(int l=0;l<k;l++){
                    dp[i][j][l+1]=max({dp[i-1][j][l]+a[i][j],dp[i][j-1][l]+a[i][j],dp[i][j][l+1]});
                //      if(dp[i][j][l+1]<INF){
                //     dp[i][j][l+1]=INF;
                // }
                }
            }
        }
    }
    ll ans=LONG_LONG_MIN;
    for(int i=0;i<=k;i++){
        ans=max(ans,dp[n-1][n-1][i]);
    }
    if(ans<0)ans=-1;
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
