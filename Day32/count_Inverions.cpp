class Solution
{
     static long count = 0;

    static long[] merge2(long left[], long right[]){
        int i = 0;
        int j = 0;
        int k = 0;

        long merged[] = new long[left.length + right.length];

        while (i < left.length && j < right.length) {
            if(left[i] <= right[j]) {
                merged[k++] = left[i++];
            } else {
                // slight modification for counting inversions
                count += left.length - i;
                merged[k++] = right[j++];
            }
        }

        while (i < left.length) {
            merged[k++] = left[i++];
        }

        while (j < right.length) {
            merged[k++] = right[j++];
        }

        return merged;
    }


    public static long[] mergeSort(long arr[], int i, int j){
        if(i == j){
            long baseArray[] = new long[1];
            baseArray[0] = arr[i];
            return baseArray;
        }

        int mid = i + (j - i)/2;
        long left[] = mergeSort(arr, i, mid);
        long right[] = mergeSort(arr, mid+1, j);
        long merged[] = merge2(left, right);

        return merged;
    }

    // arr[]: Input Array
    // N : Size of the Array arr[]
    //Function to count inversions in the array.
    static long inversionCount(long arr[], long N)
    {
        // Your Code Here
        count = 0;
        mergeSort(arr, 0, (int)N-1);

        return count;
    }
}
