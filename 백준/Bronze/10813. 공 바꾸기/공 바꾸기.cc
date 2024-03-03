#include <iostream>
#include <string>
using namespace std;

int main() {
	int n, m;
	cin >> n >> m;
	int* arr = new int[n];

	for (int k = 0; k < n; ++k) {
		arr[k] = k + 1;
	}

	int tmp = 0;
	int i, j;
	for (int q = 0; q < m; ++q) {
		cin >> i >> j;
		tmp = arr[i - 1];
		arr[i - 1] = arr[j - 1];
		arr[j - 1] = tmp;
	}

	for (int w = 0; w < n; ++w) {
		cout << arr[w] << " ";
	}

	return 0;
}
