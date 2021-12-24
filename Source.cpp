#include <iostream>
#include <string>
using namespace::std;

int main() {
	bool is_double = false;
	setlocale(LC_ALL, "Russian");
	string a;
	cout << "¬ведите исходную строку" << endl;
	getline(cin, a);
	for (int i = 0; i < a.length(); i++) {
		for (int j = 0; j < a.length(); j++) {
			if (i != j) {
				if (a[i] - 0 > 64) {
					if ((a[i] == a[j]) or (a[i] - 32 == a[j] - 32) or (a[i] - 0 == a[j] - 32) or (a[i] - 32 == a[j] - 0)) {
						is_double = true;
					}
				}
				else {
					if (a[i] == a[j]) {
						is_double = true;
					}
				}
			}
		}
		if (is_double) {
			cout << ")";
			is_double = false;
		}
		else {
			cout << "(";
		}
	}
	return 0;
	system("pause");
}