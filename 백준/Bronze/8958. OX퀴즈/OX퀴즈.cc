#include <iostream>
using namespace std;

void score(string s) {
	int rcnt = 0, score = 0;

	for (int i = 0; i < s.length(); i++) {
		if (s[i] == 'O') {
			rcnt++;
			score += rcnt;
		}
		else {
			rcnt = 0;
		}
	}

	cout << score << "\n";
	return;
}

int main() {
	int n;
	string s;

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> s;
		score(s);
	}
	return 0;
}