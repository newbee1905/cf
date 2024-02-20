#include <iostream>
#include <string>

signed main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	int t, sz;
	std::string line;
	std::cin >> t;
	while (t--) {
		std::cin >> sz;
		bool is_square = true;
		int start = -1, prev_start = -1;
		while (sz--) {
			std::cin >> line;
			for (int i = 0; i < line.length(); ++i) {
				if (line[i] == '1') {
					if (start == -1) {
						start = i;
					} else {
						prev_start = start;
						start = i;
					}
					break;
				}
			}
			if (prev_start != -1 && start != -1 && prev_start != start) {
				is_square = false;
			}
		}
		std::cout << (is_square ? "SQUARE" : "TRIANGLE") << '\n';
	}
}
