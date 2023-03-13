#include <bits/stdc++.h>
void solve(vector<string>& ans, string str, string output, int i)
{
    //base case
    if(i >= str.length())
    {
        if(output.length() > 0)
            ans.push_back(output);

        return ;
    }

    //Recursion for exclude
    solve(ans, str, output, i+1);

    //Recursion for include
    int element=str[i];
    output.push_back(element);
    solve(ans ,str,  output, i+1);
}
vector<string> subsequences(string str){

	// Write your code here

    vector<string> ans;
    string output = "";
    solve(ans,str,output,0);
    return ans;

}
