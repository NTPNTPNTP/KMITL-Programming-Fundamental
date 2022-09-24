#include<bits/stdc++.h>
using namespace std;

int main(){
    string str, ans="";
    cin >> str;
    for(int i=str.length()-1; i>=0; i--){
        ans += str[i];
    }
    cout << ans;
    return 0;
}
