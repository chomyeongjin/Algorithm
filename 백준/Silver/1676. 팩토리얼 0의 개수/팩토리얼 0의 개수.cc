#include <iostream>
using namespace std;


int main() {
	int num;
	int cnt = 0;
	cin >> num;

	for (int i = 5; i <= num; i *= 5) {
		cnt += num / i;
	}

	cout << cnt;

	return 0;
}