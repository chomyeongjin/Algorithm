#include <iostream>
#include <algorithm>
using namespace std;

class Person {
public:
	int age;
	string name;
};

Person* p = new Person[100001];

bool cmp(Person a, Person b) {
	return a.age < b.age;
}

int main() {
	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> p[i].age >> p[i].name;
	}

	stable_sort(p, p + n, cmp);

	for (int i = 0; i < n; i++) {
		cout << p[i].age << " " << p[i].name << "\n";
	}
}