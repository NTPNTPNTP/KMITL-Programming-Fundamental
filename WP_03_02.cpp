#include <bits/stdc++.h>
using namespace std;

int main() {
	int N;
	cin >> N;

	for (int i = 0; i < N - 1; i++) {
		for (int j = 0; j < N * 2 - 1; j++) {
			if (i == 0 || i == j || i + j == N * 2 - 2)
				cout << "*";
			else
				cout << " ";
		}
		cout << "\n";
	}

	for (int i = N-1; i >= 0; i--) {
		for (int j = 0; j < N * 2 - 1; j++) {
			if (i == 0 || i == j || i + j == N* 2 - 2)
				cout << "*";
			else
				cout << " ";
		}
		cout << "\n";
	}
	return 0;
}
