#include <iostream>
using namespace std;

int main() {
	int num[8] = { 0 };
	for (int i = 0; i < 8; i++) {
		cin >> num[i];
	}

	int asc = 0, des = 0;
	for (int i = 0; i < 8; i++) {
		if (num[i] == i + 1) {
			asc++;
		}
		else if (num[i] == 8 - i) {
			des++;
		}
	}

	if (asc == 8) {
		cout << "ascending";
	}
	else if (des == 8) {
		cout << "descending";
	}
	else {
		cout << "mixed";
	}

	return 0;
}