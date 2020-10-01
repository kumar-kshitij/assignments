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
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string m;
        cin>>m;
        if(n == 1)
        {
            if((m[0]-'0')%2)
                cout<<1;
            else
                cout<<2;
        }
        else if(n%2 == 0)
        {
            int odd=0;
            for(int i=1;i<n;i+=2)
            {
                if((m[i]-'0')%2)
                    odd++;
            }
            if(odd == n/2)
                cout<<1;
            else
                cout<<2;
        }
        else
        {
            int odd=0;
            for(int i=0;i<n;i+=2)
            {
                if((m[i]-'0')%2)
                    odd++;
            }
            if(odd)
                cout<<1;
            else
                cout<<2;

        }




        cout<<endl;
    }


}