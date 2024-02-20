#include <iostream>
#include <queue>
#include <vector>

signed main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	int t, len;
	std::string inp, out;
	int c1, c2, check;

	for (std::cin >> t; t--; ) {
		std::cin >> len >> inp >> out;
		c1 = 0;
		c2 = 0;
		check = 0;
		for (int i = 0; i < len; ++i) {
			c1 += inp[i] == '1';
			c2 += out[i] == '1';
			check += inp[i] == out[i] && inp[i] == '1';
		}
		// std::cout << c2 << ' ' << c1 << ' ' << check << '\n';
		c2 -= check;
		c1 -= check;
		std::cout << std::max(c2, c1) << '\n';
	}
}
