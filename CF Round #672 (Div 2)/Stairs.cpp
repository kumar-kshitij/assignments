#include<bits/stdc++.h>
#define ull unsigned long long
#define ll long long
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define pii pair<int,int>
#define vi vector<int>
#define int ll
#define mod 1000000007
#define INF 1000000000
int dx[4] = {-1,0,1,0};
int dy[4] = {0,-1,0,1};
using namespace std;
vector<vi> g;
vi presum(30),val(30);
void solve()
{
    val[0] = presum[0] = 1;
    for(int i=1;i<30;i++)
    {
        int p = pow(2, i);
        p = p*p;
        val[i] = 2*val[i-1] + p;
        presum[i] = presum[i-1] + val[i];
    }

}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    cin>>t;
    solve();
    while(t--)
    {
        int n;
        cin>>n;
        int ans = upper_bound(presum.begin(), presum.end(), n) - presum.begin();
        cout<<ans;



        cout<<endl;
    }


}