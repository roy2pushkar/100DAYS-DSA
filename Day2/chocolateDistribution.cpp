class Solution{
    public:
    long long findMinDiff(vector<long long> a, long long n, long long m){
    //code
    long long  ans=INT_MAX;
    sort(a.begin(),a.end());
    int res=0;

    for(int i=0;i+m-1<n;i++)
    {
        ans=min((a[i+m-1]-a[i]),ans);
    }
   return  ans;

    }
};
