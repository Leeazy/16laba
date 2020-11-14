#include <iostream>
#include <vector>
using namespace std;
int main() {
	int N, a, b;
	cout << "input N(kol-vo chlenov), a(first number), b(second number): ";
	cin >> N >> a >> b;
	vector <int> ar(N);
	ar[0] = a;
	ar[1] = b;
	ar[2] = a + b;
	for (int i = 3; i < N; i++) {
		ar[i] = ar[i-1] * 2;
	}
	for (int i = 0; i < N; i++) {
		cout << ar[i] << " ";
	}
	return 0;
}