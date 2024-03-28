#include <iostream>
#include <vector>
using namespace std;


int main() {
	ios::sync_with_stdio(0);    
	cin.tie(0);
	cout.tie(0);

	int n, m;
	cin >> n >> m;

	vector<long> num(n+1);
	num[0] = 0;
	for (int i = 1; i <= n; i++) {
		long x;
		cin >> x;
		num[i] = num[i - 1] + x;
	}

	for (int k = 0; k < m; k++) {
		int i, j;
		cin >> i >> j;

		cout << num[j] - num[i - 1] << "\n";
	}

	return 0;
}