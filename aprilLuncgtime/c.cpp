vector<int> height,euler,first,segtree;
vector<bool> visited;
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
if(l==-1)return r;
if(r==-1)return l;
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
    return height[left]<height[right]?left:right;

}
void LCA(vector<vector<int>> &adj,int root=0){
    int n=adj.size();
    height.resize(n);
    first.resize(n);
    euler.reserve(n*2);
    visited.assign(n,false);
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



int example()
{

int n,m;
cin>>n>>m;

 vector<vector<int>> g(n);
 for(int i=0;i<m;i++){
     int a,b;
     cin>>a>>b;
     g[a].pb(b);
     g[b].pb(a);

 }
 LCA(g,0);
 cout<<lca(4,3)<<endl;





    return 0;
}