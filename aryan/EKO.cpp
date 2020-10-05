    #include <bits/stdc++.h>
    using namespace std;
     
    #define var long
     
    int main() {
    	// your code goes here
    	var n, m;
    	scanf("%ld %ld", &n, &m);
    	vector<var> hgt;
    	var lo=0, hi=0, k=0;
    	for(var i=0; i<n; i++) {
    		scanf("%ld", &k);
    		hgt.push_back(k);
    		if(hgt[i] > hi) {
    			hi = hgt[i];
    		}
    	}
    	while(lo < hi) {
    		var mid = lo+(hi-lo+1)/2;
    		var count = 0;
    		for(var i=0; i<n; i++) {
    			count += hgt[i]-mid > 0 ? hgt[i]-mid : 0;
    		}
    		if(count < m) {
    			hi = mid-1;
    		} else {
    			lo = mid;
    		}
    	}
    	printf("%ld\n", lo);
    	return 0;
    }
