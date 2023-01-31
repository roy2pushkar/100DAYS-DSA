//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    vector<int> nextPermutation(int N, vector<int> arr){
        // code here
        int idx1=-1;


        for(int i=N-2;i>=0;i--)
        {
            if(arr[i] < arr[i+1])
            {
                idx1=i;
                break;
            }
        }
        if(idx1==-1)
        {
            sort(arr.begin(),arr.end());
        }
        else
        {
            int idx2=idx1;
        for(int i=N-1;i>idx1;i--)
        {
            if(arr[i] > arr[idx2])
            {
                idx2=i;
                break;
            }
        }
        swap(arr[idx1],arr[idx2]);
        sort(arr.begin()+idx1+1 , arr.end());
       }
       return arr;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0;i < N;i++)
            cin>>arr[i];

        Solution ob;
        vector<int> ans = ob.nextPermutation(N, arr);
        for(int u: ans)
            cout<<u<<" ";
        cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends
