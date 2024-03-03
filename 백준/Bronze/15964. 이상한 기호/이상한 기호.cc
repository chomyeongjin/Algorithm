#include <iostream>
using namespace std;

int cal(int a, int b) {
	return (a + b) * (a - b);
}

int main() {
	int a, b;
	cin >> a >> b;

	cout << cal(a, b);
	return 0;
}