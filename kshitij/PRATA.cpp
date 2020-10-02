    #include <bits/stdc++.h>
    using namespace std;
     
    #define var long long
     
    int main() {
    	// your code goes here
    	var t;
    	scanf("%lld", &t);
    	while(t--) {
    		var p, l;
    		scanf("%lld %lld", &p, &l);
    		var r[l];
    		var lo=0, hi=0;
    		for(var i=0; i<l; i++) {
    			scanf("%lld", &r[i]);
    			if(r[i] > hi) {
    				hi = r[i];
    			}
    		}
    		hi = hi*(p*(p+1))/2;
    		while(lo < hi) {
    			var mid = (lo+hi)/2;
    			var count = 0;
    			for(var i=0; i<l; i++) {
    			    var x = (mid*2)/r[i];
    				var n = sqrt(x);
    				if(n*(n+1) > x) {
    					n--;
    				}
    				count += n;
    			}
    			if(count < p) {
    				lo = mid+1;
    			} else {
    				hi = mid;
    			}
    		}
    		printf("%lld\n", lo);
    	}
    	return 0;
    }
