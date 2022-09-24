#include<bits/stdc++.h>
using namespace std;

const int n = 10;

int main(){
    int arr[n];
    float avg=0, sum=0;
    for(int i=0; i<n; i++){
        cin >> arr[i];
        avg += arr[i];
    }
    avg /= n;
    for(int i=0; i<n; i++){
        sum += (arr[i]-avg)*(arr[i]-avg);
    }

    cout << sqrt(sum/n);
    return 0;
}
