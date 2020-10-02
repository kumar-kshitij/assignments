    #include <bits/stdc++.h>
    using namespace std;
     
    #define var long long
     
    int main() {
    	// your code goes here
    	var n;
    	scanf("%lld", &n);
    	var a[n], b[n], c[n], d[n];
    	for(var i=0; i<n; i++) {
    		scanf("%lld %lld %lld %lld", &a[i], &b[i], &c[i], &d[i]);
    	}
    	vector<var> e, f;
    	for(var i=0; i<n; i++) {
    		for(var j=0; j<n; j++) {
    			e.push_back(a[i]+b[j]);
    		}
    	}
    	for(var i=0; i<n; i++) {
    		for(var j=0; j<n; j++) {
    			f.push_back(c[i]+d[j]);
    		}
    	}
    	sort(f.begin(), f.end());
    	pair<vector<var>::iterator, vector<var>::iterator> ip;
    	var count=0;
    	for(var i=0; i<e.size(); i++) {
    		ip = equal_range(f.begin(), f.end(), -e[i]);
    		count += (ip.second-ip.first);
    	}
    	printf("%lld\n", count);
    	return 0;
    }
