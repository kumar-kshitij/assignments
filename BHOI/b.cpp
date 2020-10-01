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

using ll  = long long;

void solve(){
	int n; cin>>n;
	vector<int> a(n);
	for(int &i:a)cin>>i;

	int ans=0,k=0;
	for(int i=n;i>=2;i--){
		if(i!=a[i-1])k++;
		else{
			if(k)ans+=2;
			k=0;
		}
	}
	if(k)ans++;


	for(int i=1;i<n;i++){
		for(int &j:a)cin>>j;
	}
	cout<<ans<<endl;
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
