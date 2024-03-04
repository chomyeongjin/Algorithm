#include <iostream>
#include <string>
using namespace std;

int main() {
	char alpha[26];
	int cnt[26] = { 0, };
	for (int i = 0; i < 26; ++i) {
		alpha[i] = 'A' + i;
	}


	string s;
	cin >> s;
	for (int i = 0; i < s.size(); ++i) {
		s[i] = toupper(s[i]);

		for (int j = 0; j < 26; ++j) {
			if (s[i] == alpha[j]) {
				cnt[j]++;
			}
		}
	}

	char biggest;
	int tmp = 0;
	int k;
	for (k = 0; k < 26; ++k) {
		if (k == 0) {
			tmp = cnt[k];
			biggest = alpha[k];
		}
		else {
			if (tmp < cnt[k]) {
				tmp = cnt[k];
				biggest = alpha[k];
			}
			else if (tmp == cnt[k]) {
				biggest = '?';
			}
		}
	}
	cout << biggest;

	return 0;
}