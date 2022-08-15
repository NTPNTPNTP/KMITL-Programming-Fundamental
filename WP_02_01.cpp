#include <bits/stdc++.h>
using namespace std;

int main() {
	int N;
	cout << "Enter number : ";
	cin >> N;

	for (int i = 0; i < 2*N-1; i++) {
		for (int j = 0; j < abs(N-i-1); j++) cout << " ";
		for (int j = 0; j < 2*((N-1)-abs(N-i-1))+1; j++) cout << "*";
		cout << "\n";
	}
	return 0;
}
