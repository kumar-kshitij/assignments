    #include <bits/stdc++.h>
    using namespace std;
     
    #define ll long long
     
    int main() {
    	// your code goes here
    	ll t;
    	scanf("%lld", &t);
    	while(t--) {
    		ll n, f;
    		scanf("%lld %lld", &n, &f);
    		f++;
    		ll r[n];
    		ll lo=0, hi=0;
    		for(ll i=0; i<n; i++) {
    			scanf("%lld", &r[i]);
    			r[i] *= r[i] * (M_PI * 100000);
    			if(r[i] > hi) {
    				hi = r[i];
    			}
    		}
    		while(lo < hi) {
    			ll mid = lo+(hi-lo+1)/2;
    			ll count = 0;
    			for(ll i=0; i<n; i++) {
    				count += r[i]/mid;
    			}
    			if(count < f) {
    				hi = mid-1;
    			} else {
    				lo = mid;
    			}
    		}
    		printf("%.4lf\n", (double)lo/100000);
    	}
    	return 0;
    }
