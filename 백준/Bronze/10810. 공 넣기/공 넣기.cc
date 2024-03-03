#include <iostream>
#include <string>
using namespace std;

int main() {
	int n, m;
	int i, j, k;
	cin >> n >> m;
	int* arr = new int[n];

	for (int r = 0; r < n; ++r) {
		arr[r] = 0;
	}

	for (int q = 0; q < m; ++q) {
		cin >> i >> j >> k;
		for (int w = i - 1; w < j; ++w) {
			arr[w] = k;
		}
	}

	for (int e = 0; e < n; ++e) {
		cout << arr[e] << " ";
	}

	delete[] arr;

	return 0;
}
