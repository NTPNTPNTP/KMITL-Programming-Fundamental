#include<bits/stdc++.h>
using namespace std;

const int n = 10;

int main(){
    int arr[n];
    float avg=0, sum_1=0, sum_2=0;
    for(int i=0; i<n; i++){
        cin >> arr[i];
        avg += arr[i];
    }
    avg /= n;

    for(int i=0; i<n; i++){
        sum_1 += arr[i];
        sum_2 += arr[i]*arr[i];
    }

    int up = n*sum_2 - sum_1*sum_1;
    cout << sqrt(up/(n*(n-1)));
    return 0;
}
