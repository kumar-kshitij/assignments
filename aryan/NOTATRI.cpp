#include <bits/stdc++.h>
using namespace std;

#define var long long

var bs(var arr[], var size, var key) {
	var lo=0, hi=size-1;
	var index = -1;
	while(lo <= hi) {
		var mid = (lo+hi)/2;
		if(arr[mid] <= key) {
			lo = mid+1;
		} else {
			index = mid;
			hi = mid-1;
		}
	}
	return index;
};

int main() {
	// your code goes here
	var n;
	scanf("%ld", &n);
	while(n != 0) {
		var l[n];
		for(var i=0; i<n; i++) {
			scanf("%ld", &l[i]);
		}
		sort(l, l+n);
		var count=0;
		for(var i=0; i<n-2; i++) {
			for(var j=i+1; j<n-1; j++) {
				var key = l[i]+l[j];
				var index = bs(l, n, key);
				if(index != -1) {
					count += n - index;
				} else {
					break;
				}
				// cout << l[i] << " " << l[j] << " " << index << " " << count << endl;
			}
		}
		printf("%ld\n", count);
		scanf("%ld", &n);
	}
	return 0;
}
