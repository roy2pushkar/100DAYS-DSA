#include <iostream>
#include <algorithm>
#include <string.h>
#include <vector>
#include <limits.h>
using namespace std;

void SayDigits(int n, string arr[]){

    if(n==0)
        return;

    int digit = n % 10;
    n = n / 10;

    SayDigits(n, arr);

    cout<<arr[digit]<<" ";

}

int main(){

    string arr[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    int n;
    cin>>n;
    SayDigits(n, arr);

    return 0 ;
}
