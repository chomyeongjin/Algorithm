#include <iostream>
using namespace std;

int alpha[26] = { 0 };
void search(string s) {
	int askii;
	for (int i = 0; i < s.length(); i++) {
		askii = s[i] - 'a';
		if(alpha[askii] == -1) {
			alpha[askii] = i;
		}
	}

	for (int i = 0; i < 26; i++) {
		cout << alpha[i] << " ";
	}
}


int main() {
	string s;
	for (int i = 0; i < 26; i++) {
		alpha[i] = -1;
	}

	cin >> s;

	search(s);

	return 0;
	
}