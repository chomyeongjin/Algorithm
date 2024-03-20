#include <iostream>
#include <deque>
using namespace std;

int main() {
	deque<int> d;
	string s;
	int t, n;

	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> s;
		if (s == "push_front") {
			cin >> n;
			d.push_front(n);
		}
		else if (s == "push_back") {
			cin >> n;
			d.push_back(n);
		}
		else if (s == "pop_front") {
			if (d.size() == 0) {
				cout << "-1" << "\n";
			}
			else {
				cout << d.front() << "\n";
				d.pop_front();
			}
		}
		else if (s == "pop_back") {
			if (d.size() == 0) {
				cout << "-1" << "\n";
			}
			else {
				cout << d.back() << "\n";
				d.pop_back();
			}
		}
		else if (s == "size") {
			cout << d.size() << "\n";
		}
		else if (s == "empty") {
			if (d.size() == 0) {
				cout << "1" << "\n";
			}
			else {
				cout << "0" << "\n";
			}
		}
		else if (s == "front") {
			if (d.size() == 0) {
				cout << "-1" << "\n";
			}
			else {
				cout << d.front() << "\n";
			}
		}
		else if (s == "back") {
			if (d.size() == 0) {
				cout << "-1" << "\n";
			}
			else {
				cout << d.back() << "\n";
			}
		}
	}
    return 0;
}