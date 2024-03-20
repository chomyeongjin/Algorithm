#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> v;
vector<int> v2;

int main() {
	int n, m;
	cin >> n;

	for (int i = 0; i < n; i++) {
		int num;
		cin >> num;
		v.push_back(num);
	}
	sort(v.begin(), v.end());

	cin >> m;
	int find = 0;
	bool f;
	for (int i = 0; i < m; i++) {
		cin >> find;
		f = binary_search(v.begin(), v.end(), find);

		if (f) {
			v2.push_back(1);
		}
		else {
			v2.push_back(0);
		}
	}

	for (int i = 0; i < m; i++) {
		cout << v2[i] << "\n";
	}
	return 0;
}