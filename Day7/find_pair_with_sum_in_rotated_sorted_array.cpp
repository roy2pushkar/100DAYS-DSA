bool pairInSortedRotated(int arr[], int n, int x)
{


    for (int i = 0; i < n - 1; i++)
        if (arr[i] > arr[i + 1])
            break;


    int st= (i + 1) % n;


    int end = i;

    while (st != end) {

        if (arr[st] + arr[end] == x)
            return true;


        if (arr[st] + arr[end] < x)
            st = (st + 1) % n;

        else
            end = (n + end - 1) % n;
    }
    return false;
}
