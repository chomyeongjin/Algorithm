#include <iostream>
using namespace std;


int main() {
	int v, a, b;
	int cnt = 1;

	cin >> a >> b >> v;
	cnt += (v - a) / (a - b);

	if ((v - a) % (a - b) != 0) {
		cnt++;
	}
	if (v <= a) {
		cnt = 1;
	}

	cout << cnt;

	return 0;
}