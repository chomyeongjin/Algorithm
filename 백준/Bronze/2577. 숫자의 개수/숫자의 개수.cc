#include <iostream>
#include <string>
using namespace std;

int main() {
	int a, b, c;
	int multi = 0;
	int num[10] = { 0, };
	cin >> a >> b >> c;
	multi = a * b * c;

	string s = to_string(multi);

	for (char ch : s) {
		num[ch - '0']++;
	}

	for (int k = 0; k < 10; ++k) {
		cout << num[k] << endl;
	}

	return 0;
}