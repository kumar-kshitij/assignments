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
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    // cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        sort(arr, arr+n);
        vi a(n);
        int l = 0;
        for(int i=1;i<n;i+=2)
            a[i] = arr[l++];
        for(int i=0;i<n;i+=2)
            a[i] = arr[l++];
        int ans=0;
        for(int i=1;i<n-1;i++)
        {
            if(a[i]<a[i-1] && a[i]<a[i+1])
                ans++;
        }
        cout<<ans<<endl;
        for(int i=0;i<n;i++)
            cout<<a[i]<<' ';



        cout<<endl;
    }


}