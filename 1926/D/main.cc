#include <iostream>
#include <map>

signed main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	int t, max = 2147483647;
	std::map<int, int> check;
	std::cin >> t;
	int count = 0, num, i;
	for (int n; t--; count = 0, check.clear()) {
		std::cin >> n;
		for (i = 0; i < n; ++i) {
			std::cin >> num;
			if (check[num]) {
				count++;
				check[num]--;
			} else {
				check[max - num]++;
			}
		}
		std::cout << n - count << '\n';
	}
}
