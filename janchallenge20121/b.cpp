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

int maxSubarraySum(int arr[], int N, int K)
{
 
    // Hash to lookup for value (cum_sum - K)
    set<int> cum_set;
    cum_set.insert(0);
 
    int max_sum = INT_MIN, cSum = 0;
 
    for (int i = 0; i < N; i++) {
 
        // getting cummulative sum from [0 to i]
        cSum += arr[i];
 
        // lookup for upperbound
        // of (cSum-K) in hash
        set<int>::iterator sit
            = cum_set.lower_bound(cSum - K);
 
        // check if upper_bound
        // of (cSum-K) exists
        // then update max sum
        if (sit != cum_set.end())
 
            max_sum = max(max_sum, cSum - *sit);
 
        // insert cummulative value in hash
        cum_set.insert(cSum);
    }
 
    // return maximum sum
    // lesser than K
    return max_sum;
}
int findMin(int arr[], int n)
{
    // Calculate sum of all elements
    int sum = 0; 
    for (int i = 0; i < n; i++)
        sum += arr[i];
 
    // Create an array to store results of subproblems
    bool dp[n+1][sum+1];
 
    // Initialize first column as true. 0 sum is possible 
    // with all elements.
    for (int i = 0; i <= n; i++)
        dp[i][0] = true;
 
    // Initialize top row, except dp[0][0], as false. With
    // 0 elements, no other sum except 0 is possible
    for (int i = 1; i <= sum; i++)
        dp[0][i] = false;
 
    // Fill the partition table in bottom up manner
    for (int i=1; i<=n; i++)
    {
        for (int j=1; j<=sum; j++)
        {
            // If i'th element is excluded
            dp[i][j] = dp[i-1][j];
 
            // If i'th element is included
            if (arr[i-1] <= j)
                dp[i][j] |= dp[i-1][j-arr[i-1]];
        }
    }
  
    // Initialize difference of two sums. 
    int diff = INT_MAX;
     
    // Find the largest j such that dp[n][j]
    // is true where j loops from sum/2 t0 0
    for (int j=sum/2; j>=0; j--)
    {
        // Find the 
        if (dp[n][j] == true)
        {
            diff = sum-2*j;
            break;
        }
    }
    return diff;
}


int main()
{
ios_base::sync_with_stdio(0);
cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        
        int a[n];
        for(int i=0;i<n;i++)cin>>a[i];
        sort(a,a+n);
        reverse(a,a+n);
        ll s=0;
        int i=0;
        while(s<2*k){
        if(i==n)break;
           s+=a[i];
           //cout<<a[i]<<" ";
           i++;
        }
        if(s<2*k){
            cout<<-1<<endl;
            continue;
        }
        //sort(a,a+i);
        ll d=s-2*k;
        
         ll dif=findMin(a,i);
         if(dif<=d)cout<<i<<endl;
         else{
             ll h1=(s-dif)/2;
             //cout<<i<<endl;
             while(h1<k){
                 if(i==n)break;
                 h1+=a[i];
                 i++;
             }
             if(h1<k)cout<<-1<<endl;
             else{
                 cout<<i<<endl;
             }

         }
         //cout<<dif<<" "<<s<<endl;
        





    }


    return 0;
}
