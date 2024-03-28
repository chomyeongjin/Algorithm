#include <iostream>
#include <algorithm>
using namespace std;


int main() {
	ios::sync_with_stdio(0);    
	cin.tie(0);
	cout.tie(0);

	int n;
	cin >> n;
	int* arr = new int[n];

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	sort(arr, arr + n);

	int sum = arr[0];
	for (int i = 1; i < n; i++) {
		arr[i] = arr[i - 1] + arr[i];
		sum += arr[i];
	}

	cout << sum;

	
	delete[] arr;
	return 0;
}