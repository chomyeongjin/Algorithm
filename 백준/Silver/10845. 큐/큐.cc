#include <iostream>
#include <queue>
using namespace std;


int main() {
	queue<int> q;
	string s;
	int t;

	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> s;
		if (s == "push") {
			int n;
			cin >> n;
			q.push(n);
		}
		else if (s == "pop") {
			if (q.size() == 0) {
				cout << "-1" << "\n";
			}
			else {
				cout << q.front() << "\n";
				q.pop();
			}
		}
		else if (s == "size") {
			cout << q.size() << "\n";
		}
		else if (s == "empty") {
			if (q.size() == 0) {
				cout << "1" << "\n";
			}
			else {
				cout << "0" << "\n";
			}
		}
		else if (s == "front") {
			if (q.size() == 0) {
				cout << "-1" << "\n";
			}
			else {
				cout << q.front() << "\n";
			}
		}
		else if (s == "back") {
			if (q.size() == 0) {
				cout << "-1" << "\n";
			}
			else {
				cout << q.back() << "\n";
			}
		}
	}

	return 0;
}