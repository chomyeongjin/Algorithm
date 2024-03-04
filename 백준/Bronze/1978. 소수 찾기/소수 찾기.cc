#include <iostream>
#include <string>
using namespace std;

int main() {
	int n, num;
	int cnt = 0;
	cin >> n;
	
	for (int i = 0; i < n; ++i) {
		cin >> num;

		int j;
		for (j = 2; j < num; ++j) {
			if (num % j == 0) { break; }
		}
		if (j == num) { cnt++; }
	}

	cout << cnt;
	
	return 0;
}