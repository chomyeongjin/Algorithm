#include <iostream>
using namespace std;

bool arr[21] = { 0 };

void calculate(string s) {
	int x;
	if (s == "add") {
		cin >> x;
		arr[x] = true;
	}
	else if (s == "remove") {
		cin >> x;
		arr[x] = false;
	}
	else if (s == "check") {
		cin >> x;
		cout << arr[x] << "\n";
	}
	else if (s == "toggle") {
		cin >> x;
		arr[x] = !arr[x];
	}
	else if (s == "all") {
		for (int i = 1; i < 21; i++) {
			arr[i] = true;
		}
	}
	else if (s == "empty") {
		for (int i = 1; i < 21; i++) {
			arr[i] = false;
		}
	}
}

int main() {
	ios::sync_with_stdio(0);    
	cin.tie(0);

	int n;
	string s;
	cin >> n;
	
	for (int i = 0; i < n; i++) {
		cin >> s;
		calculate(s);
	}

	return 0;
}