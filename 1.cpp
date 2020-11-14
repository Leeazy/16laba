#include <iostream>
#include <vector>
using namespace std;
int main() {
	int N;
	cin >> N;
	vector <int> a(N);
	a[0] = 1;
	for (int i = 1; i < N; i++) {
		a[i] = a[i-1] + 2;
	}
	for (int i = 0; i < N; i++) {
		cout << a[i] << " ";
	}
	return 0;
}