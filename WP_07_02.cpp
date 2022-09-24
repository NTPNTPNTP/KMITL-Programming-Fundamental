#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    int arr[n][m];
    for(int k=0; k<2; k++){
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(k){
                    int z;
                    cin >> z;
                    arr[i][j] += z;
                }else
                    cin >> arr[i][j];
            }
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++)
            cout << arr[i][j] << " ";
        cout << "\n";
    }
    return 0;
}
