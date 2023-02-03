//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

//User function template for C++

class Solution{
  public:
	int lps(string s) {
	    // Your code goes here
	    string ans="";
	    vector<int>res(s.size(),0);
	    int i=0;
	    int j=1;
	    while(j<s.size())
	    {
	        if(s[i]==s[j])
	        {
	            res[j]=i+1;
	            i++;
	            j++;

	        }
	        else if(i)
	        {
	            i=res[i-1];
	        }
	        else
	        {
	            j++;
	        }
	    }
	    ans=s.substr(0,i);
	    return ans.size();
	}
};

//{ Driver Code Starts.

int main()
{


   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string str;
   		cin >> str;

   		Solution ob;

   		cout << ob.lps(str) << "\n";
   	}

    return 0;
}

// } Driver Code Ends
