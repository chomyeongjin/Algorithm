#include <iostream>
#include <stack>
using namespace std;

bool vps(string s) {
	stack<char> st;

	for (int i = 0; i < s.length(); i++) {
		if (s[i] == '(') {
			st.push(s[i]);
		}
		else {
			if (!st.empty()) {
				st.pop();
			}
			else {
				return false;
			}
		}
	}
	return st.empty();
}

int main() {
	int n;
	string s;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> s;
		if (vps(s)) {
			cout << "YES" << "\n";
		}
		else {
			cout << "NO" << "\n";
		}
	}

	return 0;
}