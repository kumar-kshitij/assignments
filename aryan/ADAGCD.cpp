    #include <bits/stdc++.h>
    using namespace std;
     
    #define ll long long
     
    ll modulo = 1000000007;
     
    long size = 10000001;
    vector<long> spf;
     
    bool compareMaps(map<long, long> m1, map<long, long> m2) {
    	return m1.size() <= m2.size();
    };
     
    long minimum(long &a, long &b) {
    	return a>b ? b : a;
    };
     
    int main() {
        for(long i=0; i<size; i++) {
            spf.push_back(i);
        }
        vector<long> primes;
        for(long i=2; i<size; i++) {
            if(spf[i] == i) {
                primes.push_back(i);
            }
            for(long j=0; j<primes.size() && primes[j]*i < size; j++) {
                spf[primes[j]*i] = primes[j];
            }
        }
    	long n;
    	scanf("%ld", &n);
    	map<long, long> pfactors[n];
    	for(int i=0; i<n; i++) {
    		long m;
    		scanf("%ld", &m);
    		while(m--) {
    			long a;
    			scanf("%ld", &a);
    			while(a != 1) {
    				pfactors[i][spf[a]]++;
    				a /= spf[a];
    			}
    		}
    	}
    	sort(pfactors, pfactors+n, compareMaps);
    	map<long, long> :: iterator itr;
    	ll gcd = 1;
    	for(itr=pfactors[0].begin(); itr!=pfactors[0].end(); itr++) {
    		long min = LONG_MAX;
    		for(int i=0; i<n; i++) {
    			min = minimum(min, pfactors[i][itr->first]);
    		}
    		ll factor = pow(itr->first, min);
    		gcd = (gcd * factor) % modulo;
    	}
    	printf("%lld\n", gcd);
    	return 0;
    }
