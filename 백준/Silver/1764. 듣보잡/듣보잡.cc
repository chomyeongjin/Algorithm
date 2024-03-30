#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

int main() {
	int n, m;
	cin >> n >> m;

	set<string> heard;
	vector<string> seen;

	for (int i = 0; i < n; i++) {
		string s;
		cin >> s;
		heard.insert(s);
	}
	for (int i = 0; i < m; i++) {
		string s;
		cin >> s;
		if (heard.find(s) != heard.end()) {
			seen.push_back(s);
		}
	}

	sort(seen.begin(), seen.end());

	cout << seen.size() << "\n";
	for (int i = 0; i < seen.size(); i++) {
		cout << seen[i] << "\n";
	}

	return 0;
}