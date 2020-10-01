#define LOCAL
#include "bits/stdc++.h"
using namespace std;

typedef vector<int> VI;

#define sim template < class c
#define ris return * this
#define dor > debug & operator <<
#define eni(x) sim > typename \
  enable_if<sizeof dud<c>(0) x 1, debug&>::type operator<<(c i) {
sim > struct rge { c b, e; };
sim > rge<c> range(c i, c j) { return rge<c>{i, j}; }
sim > auto dud(c* x) -> decltype(cerr << *x, 0);
sim > char dud(...);
struct debug {
#ifdef LOCAL
~debug() { cerr << endl; }
eni(!=) cerr << boolalpha << i; ris; }
eni(==) ris << range(begin(i), end(i)); }
sim, class b dor(pair < b, c > d) {
  ris << "(" << d.first << ", " << d.second << ")";
}
sim dor(rge<c> d) {
  *this << "[";
  for (auto it = d.b; it != d.e; ++it)
    *this << ", " + 2 * (it == d.b) << *it;
  ris << "]";
}
#else
sim dor(const c&) { ris; }
#endif
};
#define imie(...) " [" << #__VA_ARGS__ ": " << (__VA_ARGS__) << "] "

#define f first
#define s second 

void solve(){
	int n; cin>>n;
	vector<int> v(n);
	for(int &i:v)cin>>i;
	
	vector<vector<double>> t(n,vector<double> (n,-1));
	//find the time  of interection when crossing
	
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(i==j)
				t[i][j]=0;
			else{
				if(v[i]==v[j]){t[i][j]=-1; continue;}
				double time= (1.0*(i-j))/(1.0*(v[j]-v[i]));
				
				if(time > 0){
					t[i][j]=time;
					t[j][i]=time;
				}
			}
		}
	}
	//precomputation done
	
	int lo=5,hi=0;
	for(int i=0;i<n;i++){
		int cnt=1;
		vector<int> a,b;
		for(int j=0;j<n;j++){
			if(i!=j){
				if(t[i][j]>0)cnt++,a.push_back(j);
				else b.push_back(j);
			}
		}
		
		for(int u:b){
			for(int j:a){
				if(t[i][j] < t[j][u]){cnt++; break; }
			}
		}
		
		lo=min(lo,cnt);
		hi=max(hi,cnt);
	}
	cout<<lo<<" "<<hi<<endl;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	
	int tt=1;
	cin>>tt;
	while(tt--){
		solve();
	}
	
	return 0;
}
