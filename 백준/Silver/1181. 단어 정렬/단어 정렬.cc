#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp(string a, string b) {
	if (a.length() == b.length()) {
		return a < b;
	}
	return a.length() < b.length();
}


int main() {
	int t;
	cin >> t;

	vector<string> v;

	for (int i = 0; i < t; i++) {
		string tmp;
		cin >> tmp;
		v.push_back(tmp);
	}

	sort(v.begin(), v.end(), cmp);

	cout << v[0] << endl;
	for (int i = 1; i < t; i++) {
		if(v[i-1] != v[i]) {
			cout << v[i] << endl;
		}
	}
	return 0;
}