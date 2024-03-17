#include <iostream>
using namespace std;

int cal(int a) {
	int result = 1;
	for (int i = 1; i <= a; i++) {
		result *= i;
	}
	return result;
}

int main() {
	int n, k;
	cin >> n >> k;

	int a = cal(n - k);
	int b = cal(k);
	int c = cal(n);

	int ans = c / (a * b);

	cout << ans;

	return 0;
}