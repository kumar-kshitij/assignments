    #include <bits/stdc++.h>
    using namespace std;
     
    #define var long long
    #define acc 10000
     
    int main() {
    	// your code goes here
    	var k;
    	scanf("%lld", &k);
    	while(k--) {
    		var n;
    		scanf("%lld", &n);
    		var cisterns[n][4];
    		var lo=0, hi=0, max=0;
    		for(var i=0; i<n; i++) {
    			scanf("%lld %lld %lld %lld", &cisterns[i][0], &cisterns[i][1], &cisterns[i][2], &cisterns[i][3]);
    			if(cisterns[i][0]+cisterns[i][1] > hi) {
    				hi = cisterns[i][0]+cisterns[i][1];
    			}
    			max += cisterns[i][1]*cisterns[i][2]*cisterns[i][3];
    		}
    		hi *= acc;
    		var v;
    		scanf("%lld", &v);
    		if(v == max) {
    			printf("%.2lf\n", (double)hi/acc);
    		} else if(v > max) {
    			printf("OVERFLOW\n");
    		} else {
    			var mid, total, hgt;
    			while(lo < hi) {
    				mid = (lo+hi)/2;
    				total=0;
    				for(auto cistern : cisterns) {
    					hgt = mid-cistern[0]*acc;
    					if(hgt < 0) {
    						hgt = 0;
    					} else if(hgt > cistern[1]*acc) {
    						hgt = cistern[1]*acc;
    					}
    					total += hgt*cistern[2]*cistern[3];
    					// cout << mid << " " << hgt*cistern[2]*cistern[3] << endl;
     
    				}
    				if(total < v*acc) {
    					lo = mid+1;
    				} else {
    					hi = mid;
    				}
    			}
    			printf("%.2lf\n", (double)lo/acc);
    		}
    	}
    	return 0;
    }

