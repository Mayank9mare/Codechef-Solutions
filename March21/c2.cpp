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
//KnightMareVoid

ll calc(ll e,ll h,ll n,ll a,ll b,ll c){
    if(n<=0)return 0;
    ll cost=1e17;
      if((n<=e) && (n<=h)){
          cost=min(cost,c*n);
      }
     // //cout<<cost<<endl;
      if(2*n<=e){
          cost=min(cost,n*a);
      }
      if(3*n<=h){
          cost=min(cost,n*b);
      }
     // cout<<cost<<endl;
      if((((h-n)/2) >=1) &&(((h-n)/2)>=n-e)){
          if(b-c<0){
              ll temp=min(n-1,(h-n)/2);
              cost=min(cost,(b-c)*temp + n*c);
          }
          else{
              ll temp=max(1ll,n-e);
              cost=min(cost,(b-c)*temp+ n*c);
          }
      }
     // cout<<cost<<endl;
      if(e-n>=1 && e-n>=n-h){
          if(a-c<0){
              ll temp=min(n-1,e-n);
              cost=min(cost,(a-c)*temp+n*c);
          }
          else{
              ll temp=max(1ll,n-h);
              cost=min(cost,(a-c)*temp +n*c);
          }
      }
      //cout<<cost<<endl;
      if((e/2)>=1 && ((e/2)>=(3*n-h+2)/3)){
          if(a-b<0){
              ll temp=min(n-1,e/2);
              cost=min(cost,(a-b)*temp+ n*b);
          }
          else{
              ll temp=max(1ll,(3*n-h+2)/3);
              cost =min(cost,(a-b)*temp+ n*b);
          }
      }
     // cout<<cost<<endl;
      if(e>=3 && h>=4 && (n>=3)){
          cost=min(cost,(a+b+c+calc(e-3,h-4,n-3,a,b,c)));
      }
     // cout<<cost<<endl;
      return cost;

}

int main()
{
ios_base::sync_with_stdio(0);
cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        ll n,e,h,a,b,c;
        
        cin>>n>>e>>h>>a>>b>>c;
        
        ll ans=calc(e,h,n,a,b,c);
        if(ans==1e17){
            cout<<-1<<endl;
            continue;
        }
        cout<<ans<<endl;
    
        




        

    }


    return 0;
}
