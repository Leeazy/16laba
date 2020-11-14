#include <iostream>
#include <vector>
using namespace std;
int main() {
	int N, a, d;
	cout << "input N(kol-vo chlenov), A(first number), D(znamenatel): ";
	cin >> N >> a >> d;
	vector <int> ar(N);
	ar[0] = a;
	for (int i = 1; i < N; i++) {
		ar[i] = ar[i-1] * d;
	}
	for (int i = 0; i < N; i++) {
		cout << ar[i] << " ";
	}
	return 0;
}