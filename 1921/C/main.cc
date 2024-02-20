#include <iostream>
#include <queue>
#include <vector>

signed main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	int t;
	long long n, f, a, b, prev, cur;

	for (std::cin >> t; t--; ) {
		std::cin >> n >> f >> a >> b >> prev;
		if (prev * a < b) {
			f -= prev * a;
		} else {
			f -= b;
		}
		for (int i = 1; i < n; ++i) {
			std::cin >> cur;
			if ((cur - prev) * a < b) {
				f -= (cur - prev) * a;
			} else {
				f -= b;
			}
			prev = cur;
		}
		std::cout << (f > 0 ? "YES" : "NO") << '\n';
	}
}
