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
#define mod 1000000007
#define lo lower_bound
#define de(n) ll n;cin>>n;
#define def(a,n) ll n;cin>>n;ll a[n];re(i,n){cin>>a[i];}
#define defi(a,n,k) ll n;cin>>n; ll k;cin>>k;ll a[n];re(i,n){cin>>a[i];}
#define deb(x) cout<<#x<<"="<<x<<endl;
#define tr(it,a) for(auto it=a.begin();it!=a.end();it++)
#define nl cout<<endl;
#define precision(x) cout << fixed << setprecision(x);
#define gcd(a,b)    __gcd((a),(b))
#define lcm(a,b)    ((a)*(b)) / gcd((a),(b))
#define endl "\n"

using namespace std;
//KnightMareVoid
int sq(ll p){
    ll k=sqrt(p);
    if(k*k==p){
        return 1;

    }
    return 0;
}



int main()
{
ios_base::sync_with_stdio(0);
cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        ll x,y;
        cin>>x>>y;
        if(x==1 && y==0){
            cout<<1<<endl;
            continue;
        }
        
        // if(x==2 && y==2){
        //     cout<<"YES"<<endl;
        //     cout<<2<<endl;
        //     cout<<1<<sp<<2<<endl;
        //     continue;
        // }
        
        // if(x==5&& y==4){
        //     cout<<2<<endl;
        //     cout<<1<<sp<<2<<endl;
        //     cout<<2<<sp<<3<<endl;
        //     continue;
        // }
        ll k=x+y;
        ll q=sqrt(k);
        if(q*q==k){
            ///cout<<"YES"<<endl;
            ll n=q;
            x-=n;
            if(y%2==0){
                y/=2;

            }
            else{
                cout<<"NO"<<endl;
                continue;
            }
            if((n*n-4*y)>=0 &&(sq(n*n-4*y))){
                cout<<"YES"<<endl;
                ll n1=(n+sqrt(n*n-4*y))/2;
                ll n2=n-n1;

                //cout<<n1<<n2<<endl;
                vector<pll> v;
                ll k1=2;
                cout<<n<<endl;
                for(int i=0;i<n2;i++){
                    cout<<1<<sp<<k1<<endl;
                    // v.pb({1,k1});
                    k1++;
                }
                for(int i=0;i<n1-1;i++){
                    cout<<2<<sp<<k1<<endl;
                    // v.pb({2,k1});
                    k1++;
                }
                
                // for(int i=0;i<v.size();i++){
                //     cout<<v[i].first<<sp<<v[i].second<<endl;
                // }


            }
            else{
                cout<<"NO"<<endl;
            }



        }
        else{
            cout<<"NO"<<endl;
        }

        

    }


    return 0;
}
