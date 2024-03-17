#include <iostream>
using namespace std;

int min(int a, int b) {
	int c = a % b;
	while (c != 0) {
		a = b;
		b = c;
		c = a % b;
	}
	return b;
}

int max(int a, int b) {
	return (a * b) / min(a, b);
}


int main() {
	int a, b;
	cin >> a >> b;

	cout << min(a, b) << "\n" << max(a, b);

	return 0;
}