#include <bits/stdc++.h>
using namespace std;

int main() {
	int N;
	cin >> N;
	for (int i = 0; i < N * 2 - 1; i++) {
		for (int j = 0; j < N * 2 - 1; j++) {
			if (i == 0 || i == N * 2 - 2 || i==j || i+j==N*2-2)
				cout << "*";
			else
				cout << " ";
		}
		cout << "\n";
	}
	return 0;
}
