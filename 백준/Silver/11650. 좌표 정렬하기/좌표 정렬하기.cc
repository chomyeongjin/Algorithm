#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<pair<int, int>> p;

bool cmp(pair<int, int> a, pair<int, int> b) {
	if (a.first == b.first) {
		return a.second < b.second;
	}
	return a.first < b.first;
}

int main() {
	int n;
	cin >> n;

	int x, y;
	for (int i = 0; i < n; i++) {
		cin >> x >> y;
		p.push_back({x, y});
	}

	sort(p.begin(), p.end(), cmp);

	for (int i = 0; i < n; i++) {
		cout << p[i].first << " " << p[i].second << "\n";
	}

	return 0;
}