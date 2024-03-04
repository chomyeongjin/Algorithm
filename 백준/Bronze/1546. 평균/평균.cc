#include <iostream>
#include <string>
using namespace std;

int main() {
	int n = 0, big = 0;
	double sum = 0, mean = 0;

	cin >> n;
	double* score = new double[n];
	for (int i = 0; i < n; ++i) {
		cin >> score[i];
	}

	for (int j = 0; j < n; ++j) {
		if (j == 0) {
			big = score[j];
		}
		else if (big < score[j]) {
			big = score[j];
		}
	}

	for (int k = 0; k < n; ++k) {
		score[k] = score[k] / big * 100;
		sum += score[k];
	}
	mean = sum / n;

	cout << mean;

	return 0;
}