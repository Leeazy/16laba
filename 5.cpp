#include <iostream>
#include <vector>
using namespace std;
int main() {
	int N, b;
	cout << "input N(kol-vo chlenov): ";
	cin >> N;
	vector <int> a(N);
	cout << "input array: ";
	for (int i = 0; i < N; i++) {
		cin >> a[i];
	}
	for (int i = 1; i < N; i += 2) {
		cout << a[i] << " ";
	}
	if (N % 2 == 0) {
		for (int i = N - 2; i >= 0; i -= 2) {
			cout << a[i] << " ";
		}
	}
	else {
		 for (int i = N - 1; i >= 0; i -= 2){
			cout << a[i] << " ";
		 }
	}
	return 0;
}