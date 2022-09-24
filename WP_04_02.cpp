#include<bits/stdc++.h>
using namespace std;

int main(){
    int n1, n2, gcd, lcm, temp1, temp2;
    cin >> n1 >> n2;
    if(n2>n1) swap(n1, n2);
    temp1 = n1;
    temp2 = n2;
    
    while(true){
        int temp3;
        temp3 = temp1;
        temp1 = temp2;
        temp2 = temp3%temp2;
        if(temp2==0){
            gcd = temp1;
            break;
        }
    }
    
    lcm = (n1*n2)/gcd;

    cout << "Greatest common divisor : " << gcd << "\n";
    cout << "Least common multiple   : " << lcm << "\n";
    return 0;
}
