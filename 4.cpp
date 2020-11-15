#include <iostream>
#include <vector>
using namespace std;
int main() {
	int N, j = 0;
	cout << "input N(kol-vo chlenov): ";
	cin >> N;
	vector <int> a(N);
	vector <int> b(N);
	cout << "input array: ";
	for (int i = 0; i < N; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < N; i += 2) {
		b[i] = a[j];
		j++;
	}
	j = N-1;
	for (int i = 1; i < N; i += 2) {
		b[i] = a[j];
		j--;
	}
	for (int i = 0; i < N; i++) {
		cout << b[i] << " ";
	}
	return 0;
}