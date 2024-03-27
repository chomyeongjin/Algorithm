#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> card;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, m;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int num;
		cin >> num;
		card.push_back(num);
	}
	sort(card.begin(), card.end());

	cin >> m;
	for (int i = 0; i < m; i++) {
		int num;
		cin >> num;

		cout << upper_bound(card.begin(), card.end(), num) - lower_bound(card.begin(), card.end(), num) << "\n";
	}

	return 0;

}