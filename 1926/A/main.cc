#include <iostream>
#include <queue>
#include <vector>

signed main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	int t;
	std::cin >> t;
	int count = 0;
	for (char inp; t--; count = 0) {
		for (int i = 0; i < 5; ++i)	{
			std::cin >> inp;
			count += inp == 'A';
		}
		std::cout << (count > 2 ? 'A' : 'B') << '\n';
	}
}
