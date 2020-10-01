#include <bits/stdc++.h>
using namespace std;

int main()
{
	int q;
	cin>>q;
	unsigned long long int a,b,c,sum;
	for (int i=0;i<q;i++)
	{	
		sum =0;
		cin>>a>>b>>c;
		sum = a+b+c;
		cout<<(sum/2)<<endl;
	}
}