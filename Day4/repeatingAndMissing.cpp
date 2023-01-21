vector<int> Solution::repeatedNumber(const vector<int> &B) {
    vector<int> A(B.size(),0);  //creating a vector of size n

    int a,b;


    for(int i=0 ; i<B.size() ; i++) //storing the frequency of each number in the vector

    {

        A[B[i]-1]++;

    }



    for(int i=0 ; i<A.size() ; i++)

    {

        if(A[i]==0)
        {

            b=i+1;
            }  //if frequency is 0 implies the number is missing in the array


        if(A[i]==2)
        {
            a=i+1;
            }  //if the frequency is 2 implies the number has occurrence more than one time

    }

    vector<int> ans;

    ans.push_back(a);

    ans.push_back(b);



    return ans ;
}
