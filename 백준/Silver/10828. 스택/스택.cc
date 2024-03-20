#include <iostream>
#include <stack>
using namespace std;


int main() {
	stack<int> s;
	string str;
	int t;

	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> str;

		if (str == "push") {
			int num;
			cin >> num;
			s.push(num);
		}
		else if (str == "pop") {
			if (s.size() == 0) {
				cout << "-1" << "\n";
			} else {
				cout << s.top() << "\n";
				s.pop();
			}
		}
		else if (str == "size") {
			cout << s.size() << "\n";
		}
		else if (str == "empty") {
			if (s.size() == 0) {
				cout << "1" << "\n";
			}
			else {
				cout << "0" << "\n";
			}
		}
		else if (str == "top") {
			if (s.size() == 0) {
				cout << "-1" << "\n";
			} 
			else {
				cout << s.top() << "\n";
			}
		}

	}
	return 0;
}