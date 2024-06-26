#include <iostream>
#include <queue>
using namespace std;

priority_queue<int, vector<int>, greater<int>> pq;

void minheap(int a) {
	if (a == 0) {
		if (pq.empty()) {
			cout << "0" << "\n";
		}
		else {
			cout << pq.top() << "\n";
			pq.pop();
		}
	}
	else {
		pq.push(a);
	}

	return;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		minheap(x);
	}

	return 0;
}