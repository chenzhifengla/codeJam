#include <iostream>

using namespace std;

int t;
long long n;

bool isAllOne(int base) {
	long long num = n;
	while (num) {
		if (num % base != 1) return false;
		else num /= base;
	}
	return true;
}

int main() {
	freopen("inputB.txt", "r", stdin);
	freopen("outputB.txt", "w", stdout);

	cin >> t;
	for (int k = 1; k <= t; k++) {
		printf("Case #%d: ", k);
		cin >> n;
		for (int i = 2; i < n; i++) {
			if (isAllOne(i)) {
				printf("%d\n", i);
				break;
			}
		}
	}
	return 0;
}