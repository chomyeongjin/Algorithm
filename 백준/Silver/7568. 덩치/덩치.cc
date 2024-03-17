#include <iostream>
#include <vector>
using namespace std;


int main() {
	int n, a, b;
	vector <pair<int, int>> v;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> a >> b;
		v.push_back(pair<int, int>(a, b));
	}

	for (int i = 0; i < n; i++) {
		int cnt = 1;
		for (int j = 0; j < n; j++) {
			if (i == j) { continue; }
			if (v[i].first < v[j].first && v[i].second < v[j].second) {
				cnt++;
			}
		}
		cout << cnt << " ";
	}

	return 0;
}