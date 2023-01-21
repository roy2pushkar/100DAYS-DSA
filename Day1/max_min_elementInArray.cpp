class Solution

{

    private :

    int minimumarray(int A[] , int n){

        int min = 7362367;

        for(int i = 0 ; i< n ; i++) {

            if(A[i] < min ){

                min = A[i];

            }

        }

        return min;

    }

    int maximumarray(int A[] , int n){

        int max = -2332323;

        for(int i = 0 ; i< n ; i++) {

            if(A[i] > max ){

                max = A[i];

            }

        }

        return max;

    }

   public:

    int findSum(int A[], int N)

    {

     //code here.

     int mi = minimumarray(A,  N);

     int ma = maximumarray(A , N);

     int sum = mi + ma;

     return sum;



    }

};
