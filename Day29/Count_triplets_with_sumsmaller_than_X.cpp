//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{


	public:
	long long countTriplets(long long arr[], int n, long long sum)
	{
	    // Your code goes here
	    long long count=0;
	    sort(arr,arr+n);
	    for(int i=0;i<n;i++)
	    {
	        int start=i+1;
	        int end=n-1;
	        while(start<end)
	        {
	            long long check=arr[i]+arr[start]+arr[end];
	            if(check>=sum)
	            {
	                end--;
	            }
	            else if(check<sum)
	            {

	                count+=end-start;
	                start++;
	            }

	           }
	    }
	    return count;
	}


};
