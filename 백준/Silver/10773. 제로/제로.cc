#include <iostream>
#include <stack>
using namespace std;

int main() {
	stack<int> s;
	int k, n;
	int sum = 0;

	cin >> k;
	for (int i = 0; i < k; i++) {
		cin >> n;
		if (n == 0) {
			s.pop();
		}
		else {
			s.push(n);
		}
	}

	int len = s.size();
	for (int i = 0; i < len; i++) {
		sum += s.top();
		s.pop();
	}

	cout << sum;

	return 0;
}

