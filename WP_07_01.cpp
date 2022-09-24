#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    int arr[2][n][m];
    for(int k=0; k<2; k++){
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                cin >> arr[k][i][j];
            }
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout << arr[0][i][j] + arr[1][i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}
