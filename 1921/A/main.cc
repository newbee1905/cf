#include <iostream>
#include <queue>
#include <vector>

signed main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	int t;
	std::priority_queue<std::pair<int, int>> pq;

	for (std::cin >> t; t--; ) {
		for (int i = 0, x, y; i < 4; ++i) {
			std::cin >> x >> y;
			pq.push(std::make_pair(x, y));
		}
		std::pair<int, int> pos1 = pq.top();
		pq.pop();
		std::pair<int, int> pos2 = pq.top();
		pq.pop();
		pq.pop();
		pq.pop();
		std::cout << (pos1.first - pos2.first) * (pos1.first - pos2.first) + (pos1.second - pos2.second) * (pos1.second- pos2.second) << '\n';
	}
}
