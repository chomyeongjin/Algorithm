#include <iostream>
using namespace std;

int main() {
	int n, ans = 0;
	cin >> n;

	for (int i = 1; i < n; i++) {
		int sum = 0; int num = i;
		while(num != 0){
			sum += num % 10;
			num /= 10;
		}
		if (i + sum == n) {
			ans = i;
			break;
		}
	}

	cout << ans;
	return 0;
}