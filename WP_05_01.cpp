#include <bits/stdc++.h>
using namespace std;

int main() {
	int arr[11] = {};
	cout << "Data in array : ";
	for (int i = 0; i < 10; i++)
		cin >> arr[i];

	cout << "Result : ";
		for (int i = 1; i < 9; i++) {
			if (arr[i - 1] % 2 && arr[i + 1] % 2)
				cout << arr[i] << " ";
	}
	return 0;
}
