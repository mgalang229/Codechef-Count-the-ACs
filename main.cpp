#include <bits/stdc++.h>
using namespace std;

void solve() {
	int p;
	cin >> p;
	// 1 1 1 1 1 1 1 1
	// 100, 1, 2, ..., 9
	// 100, 100, 1, 2, ..., 8
	// 100, 100, 100, 1, 2, ... 7
	// ...
	// 100, 100, 100, ... 100, 1
	int ans = p / 100 + p % 100;
	cout << (ans <= 10 ? ans : -1)  << "\n";
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int T;
	cin >> T;
	while (T--)
		solve();
}
