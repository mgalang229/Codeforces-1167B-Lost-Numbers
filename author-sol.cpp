#include <bits/stdc++.h>
using namespace std;

// use endl
// we generate the input, then the judge gives responses
void test_case(int& tc) {
	int a[] = {4, 8, 15, 16, 23, 42};
	int ans[6];
	for (int i = 0; i < 4; i++) {
		cout << "? " << i + 1 << " " << i + 2 << endl;
		cin >> ans[i];
	}
	do {
		bool ok = true;
		for (int i = 0; i < 4; i++) {
			ok &= (a[i] * a[i+1] == ans[i]);
		}
		if (ok) {
			break;
		}
	} while (next_permutation(a, a + 6));
	cout << "! ";
	for (int i = 0; i < 6; i++) {
		cout << a[i] << " ";
	}
	cout << endl;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int T = 1;
	// cin >> T;
	for (int tc = 1; tc <= T; tc++) {
		test_case(tc);
	}
}
