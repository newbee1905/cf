#include <iostream>
#include <vector>

std::vector<long long> sums_of_digits(200001, -1);
std::vector<long long> sums(200001, -1);

signed main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	long long sum = 0;
	for (int i = 1; i <= 200000; ++i) {
		sums_of_digits[i] = i % 10 + (i / 10 > 0 ? sums_of_digits[i / 10] : 0);
		sum += sums_of_digits[i];
		sums[i] = sum;
	}

	int t;
	std::cin >> t;
	for (int n; t--; ) {
		std::cin >> n;
		std::cout << sums[n] << '\n';
	}
}
