#include <bits/stdc++.h>
using namespace std;

bool pairInSortedRotated(int arr[], int n, int x)
{

    int i;
    for (i = 0; i < n - 1; i++)
        if (arr[i] > arr[i + 1])
            break;


    int l = (i + 1) % n;

    int r = i;


    while (l != r) {


        if (arr[l] + arr[r] == x)
            return true;

        if (arr[l] + arr[r] < x)
            l = (l + 1) % n;


        else
            r = (n + r - 1) % n;
    }
    return false;
}

// Driver code
int main()
{
    int arr[] = { 11, 15, 6, 8, 9, 10 };
    int X = 16;
    int N = sizeof(arr) / sizeof(arr[0]);

    // Function call
    if (pairInSortedRotated(arr, N, X))
        cout << "true";
    else
        cout << "false";

    return 0;
}
