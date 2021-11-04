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

int solve(){
    def(a,n);
    vector<pll> v;
    for(int i=0;i<n;i++){
        v.pb({a[i],i});
    }
    sort(all(v));
    int l1=-1,r1=-1;
    for(int i=0;i<n;i++){
        if(v[i].first==0)continue;
        if(v[i].first==v[i+1].first){
            l1=v[i].second;
            r1=v[i+1].second;
            break;

        }
    }

    if(n==1){
        cout<<0<<endl;
    }
    else if(n==2){
        if(a[0]!=a[1]){
            cout<<0<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }
    else if(n==3){
        if(a[0]==a[2]){
            if(a[0]==a[1]){
                if(a[0]!=0){
                    cout<<1<<endl;
                    cout<<0<<sp<<2<<sp<<1<<endl;
                }
                else{
                    cout<<-1<<endl;
                }
            
            }
            else{
                cout<<0<<endl;
            }

        }
        else{
            cout<<-1<<endl;
        }
    }
    else{
        vector<pair<int,pair<int,int>>> v(0);
        int f1=0;
        if(l1!=-1){
            f1=1;
            for(int i=0;i<n;i++){
                if(i==l1 || i==r1)continue;
                v.pb({l1,{r1,i}});
                a[i]=0;
                break;


            }
        }
        int f=0;
        int g=-1;
        int l=-1;

        for(int i=0;i<n-1;i++){
            if(a[i]==0 && a[i+1]>0){
                g=i;
                l=i+1;

            }
            else if(a[i+1]==0 && a[i]>0){
                g=i+1;
                l=i;
            }
            
        }
        for(int i=2;i<n;i+=2){
            if(a[i-2]!=a[i]){
                f=1;
            }

        }
        for(int i=3;i<n;i+=2){
            if(a[i-2]!=a[i]){
                f=1;
            }
        }
       
    
            if(g==-1){
                cout<<-1<<endl;

            }
            else{
                //vector<pair<int,pair<int,int>>> v(0);
                if(l%2==0){
                    int j;
                    for(int i=0;i<n;i+=2){
                      if(i==l)continue;
                            j=i;
                            if(a[i]==a[l])continue;
                        
                        v.pb({l,{g,i}});
                    }
                    for(int i=1;i<n;i+=2){
                        if(a[i]==a[g])continue;
                        v.pb({j,{l,i}});
                    }

                }
                else{
                    int j;
                    for(int i=1;i<n;i+=2){
                        if(i==l)continue;
                        j=i;
                        if(a[i]==a[l])continue;
                        
                        v.pb({l,{g,i}});
                    }
                     for(int i=0;i<n;i+=2){
                         if(a[i]==a[g])continue;
                         
                        v.pb({j,{l,i}});
                    }

                }
                cout<<v.size()<<endl;
                for(int i=0;i<v.size();i++){
                    cout<<v[i].first+1<<sp<<v[i].second.first+1<<sp<<v[i].second.second+1<<endl;
                }
            }

        
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
        solve();
        

    }


    return 0;
}
