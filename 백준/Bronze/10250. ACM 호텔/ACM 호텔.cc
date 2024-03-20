#include <iostream>
using namespace std;


int main() {
	int t, h, w, n;
	cin >> t;

	for (int i = 0; i < t; i++) {
		int x, y;
		cin >> h >> w >> n;
		x = n / h + 1;
		y = n % h;

		if (y == 0) {
			y = h;
			x -= 1;
		}


		cout << y * 100 + x << "\n";
	}

	return 0;

}