// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
  public:
    vector<int> duplicates(int arr[], int n) {
        // code here
        vector<int> res;
       sort(arr, arr+n);
       int t = -1;

       for(int i = 0; i<n; i++){
           if(arr[i] == arr[i+1] && t!=arr[i]){
               res.push_back(arr[i]);
               t=arr[i];
           }
       }
       if(res.size()>0)
       return res;

       else {
           res.push_back(-1);
           return res;
       }
    }
};


// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        Solution obj;
        vector<int> ans = obj.duplicates(a, n);
        for (int i : ans) cout << i << ' ';
        cout << endl;
    }
    return 0;
}
  // } Driver Code Ends
