
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
#define nl cout<<endl;
#define precision(x) cout << fixed << setprecision(x);
#define gcd(a,b)    __gcd((a),(b))
#define lcm(a,b)    ((a)*(b)) / gcd((a),(b))
#define endl "\n"
using namespace std;
//KnightMareVoid
vector<int> height,euler,first,segtree;
vector<bool> visited;
//int level[200001];
void dfs(vector<vector<int>> &adj,int node,int h=0){
    visited[node]=true;
    height[node]=h;
    first[node]=euler.size();
    euler.push_back(node);
    for(auto to:adj[node]){
        if(!visited[to]){
            dfs(adj,to,h+1);
            euler.push_back(node);
        }

    }
}
void build(int node,int b,int e){
    if(b==e){
        segtree[node]=euler[b];
    }
    else{
    int mid=(e+b)/2;
    build(node*2,b,mid);
    build(node*2 +1,mid+1,e);
    int l=segtree[node*2],r=segtree[node*2+1];
    segtree[node]=(height[l]<height[r])?l:r;
    }
}
int query(int node,int b,int e,int l,int r){
    if(b>r||e<l)return -1;
    if(b>=l && e<=r){
        return segtree[node];
    }
    int mid=(b+e)/2;
    int left=query(node*2,b,mid,l,r);
    int right=query(node*2+1,mid+1,e,l,r);
    if(left==-1)return right;
    if(right==-1)return left;
    return height[left]<height[right]?left:right;

}
void LCA(vector<vector<int>> &adj,int root=0){
    height.resize(0);
    first.resize(0);
    euler.resize(0);
    visited.resize(0);
       
    int n1=adj.size();
    height.resize(n1);
    first.resize(n1);
    euler.reserve(n1*2);
    visited.assign(n1,false);
    dfs(adj,root);
    int m=euler.size();
    segtree.resize(4*m);
    build(1,0,m-1);
}
int lca(int u,int v){
    int left=first[u],right=first[v];
    if(left>right)swap(left,right);
    return query(1,0,euler.size()-1,left,right);
}







int main()
{
ios_base::sync_with_stdio(0);
cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n,k,a;
        cin>>n>>k>>a;
        a--;
        vector<int> s;
        for(int i=0;i<k;i++){
            int m;
            cin>>m;
            m--;
            s.pb(m);

        }
         vector<vector<int>> adj(n);
       
      
        for(int i=0;i<n-1;i++){
            int a1,b1;
            cin>>a1>>b1;
            a1--;
            b1--;
            adj[a1].pb(b1);
            adj[b1].pb(a1);
            

        }
        LCA(adj,0);
        //cout<<lca(2,3)<<endl;
        //ll ans=0;
        //int j=0;
        ll mina =-100000;
        vector<ll> v1,v2;
        for(int i=0;i<n;i++){
            int p=n;
            mina=-100000;
            for(int j=0;j<k;j++){

                int lca1=lca(a,s[j]);
                int lca2=lca(i,s[j]);
                ll ans=(height[a]-height[lca1])+(height[s[j]]-height[lca1]);
                ll p2=((height[i]-height[lca2])+(height[s[j]]-height[lca2]));
                ans-=p2;
                //cout<<ans<<endl;
                if(ans>=mina){
                    mina=ans;
                    p=s[j]+1;
                }
              



            }
            v2.pb(mina);
            v1.pb(p);
           
           
            //cout<<mina<<sp;
        }
       
        for(int i=0;i<n;i++){
            cout<<v2[i]<<sp;
        }
        nl;
         for(int i=0;i<n;i++){
            cout<<v1[i]<<sp;
        }
        nl;
       
        //cout<<mina<<endl;
        




        

    }


    return 0;
}
