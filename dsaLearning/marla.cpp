//              .-""""-.
//                        / j      \
//                       :.d;       ;
//                       $P        :
//            .m._       $$         :
//           dSMMSSSss.__$b.    __ :
//          :MMSMMSSSMMMSS$$b  $P ;
//          SMMMSMMSMMMSSS$$$$     :b
//         dSMMMSMMMMMMSSMM$$b.dP SSb.
//        dSMMMMMMMMMMSSMMPT$$=-. /TSSSS.
//       :SMMMSMMMMMMMSMMP  `b_.'  MMMMSS.
//       SMMMMMSMMMMMMMMM \  .'\    :SMMMSSS.
//      dSMSSMMMSMMMMMMMM  \/\_/; .'SSMMMMSSSm
//     dSMMMMSMMSMMMMMMMM    :.;'" :SSMMMMSSMM;
//   .MMSSSSSMSSMMMMMMMM;    :.;   MMSMMMMSMMM;
//  dMSSMMSSSSSSSMMMMMMM;    ;.;   MMMMMMMSMMM
// :MMMSSSSMMMSSP^TMMMMM     ;.;   MMMMMMMMMMM
// MMMSMMMMSSSSP   `MMMM     ;.;   :MMMMMMMMM;
// "TMMMMMMMMMM      TM;    :`.:    MMMMMMMMM;
//    )MMMMMMM;     _/\    :`.:    :MMMMMMMM
//   dSS$$MMMb.  |._\\   :`.:     MMMMMMMM
//   T$S$$$$$$$$$m;O\\"-;`.:_.-  MMMMMMM;
//  :$$$$$$$$$$$$$$b_l./\ ;`.:    mMMSSMMM;
//  :$$$$$$$$$$$$$$$$$$$./\;`.:  .$MSMMMMMM
//   $$$$$$$$$$$$$$$$$$$$. \`.:.$$$SMSSSMMM;
//   $$$$$$$$$$$$$$$$$$$$$. \.:$$$$SSMMMMMMM
//   :$$$$$$$$$$$$$$$$$$$$$.//.:$$$SSSSSSSMM;
//   :$$$$$$$$$$$$$$$$$$$$$$.`.:$SSSSSSSMMMP
//    $$$$$$$$$;"^J "^$$$$;.`.$P  `SSSMMMM
//    :$$$$$$$$$       :$$$;.`.P'..   TMMM$b
//    :$$$$$$$$$;      $$$$;.`/ c^'   d$$$$S;
//    $$$$S$$$$;      '^^^:_dg:___.$$$$$SSS
//    $$$SS$$$$;            $$$$$$$$$$$$$SSS;
//   :$$SSSS$$$$            : $$$$$$$$$$$$SSS
//   :P"TSSSS$$$            ; $$$$$$$$$$$$SSS;
//   j    `SSSSS$           :  :$$$$$$$$$$$$SS$
//  :       "^S^'           :   $$$$$$$$$$$$S$;
//  ;.____.-;"               "--^$$$$$$$$$$$$P
//  '-....-"  bug                  ""^^T$$$P"





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

using namespace std;
const int MAXN =1001;
int n,m;
ll a[MAXN][MAXN];
ll b[MAXN][MAXN];
//KnightMareVoid
int isValid(int a,int b){
    if(a<n&&b<m&&a>=0&&b>=0)return 1;
    return 0;
}
ll dfs(int i,int j,ll &d){
    d++;
    b[i][j]=1;
    if(isValid(i+1,j)&&b[i+1][j]!=1&&a[i+1][j]==a[i][j]){
        dfs(i+1,j,d);
    }
    if(isValid(i-1,j)&&b[i-1][j]!=1&&a[i-1][j]==a[i][j]){
        dfs(i-1,j,d);
    }
    if(isValid(i,j+1)&&b[i][j+1]!=1&&a[i][j+1]==a[i][j]){
        dfs(i,j+1,d);
    }
    if(isValid(i,j-1)&&b[i][j-1]!=1&&a[i][j-1]==a[i][j]){
        dfs(i,j-1,d);
    }
    return d;
    

}


int main()
{
ios_base::sync_with_stdio(0);
cin.tie(0);
  cin>>n>>m;
  ll c=-1;
  ll d=0;
  ll ans=0;
  ll f=0;
  for(int i=0;i<n;i++){
      for(int j=0;j<m;j++){
          cin>>a[i][j];
  


      }
  }
  
  
  memset(b,0,sizeof(b));
  priority_queue<pll> pq;
  for(int i=0;i<n;i++){
      for(int j=0;j<m;j++){
          if(b[i][j]==1)continue;
          d=0;
          c=dfs(i,j,d);
          if(c>ans){
              ans=c;
              f=a[i][j];

          }
          else if(c==ans){
              f=min(f,a[i][j]);
          }

      }

  }
  cout<<f<<sp<<ans<<endl;
  
 



 



    return 0;
}
