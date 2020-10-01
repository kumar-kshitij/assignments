#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int arr[n],arr1[n*(n-1)/2],count=1,k=0,max=1;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		//cout<<arr[i]<<" ";
	}
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			arr1[k] = arr[i]+arr[j];
			k++;
		}
		
	}
	sort(arr1,arr1+k);
	
	for(int i=0;i<k-1;)
	{
	    count =1;
	    if(arr1[i+1] != arr1[i])
	    i++;
	    while(arr1[i+1] == arr1[i])
	    {
    	    count++;
    	    i++;
	    }
	    
	    if(count>max)
	    max = count;
	    
	}

	cout<<max;
}