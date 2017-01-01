#include <iostream>

using namespace std;

int t, n, d;
long long ans;
int n_right, n_other;
int p2_sum, p1_sum;

int main() {
	freopen("inputC.txt", "r", stdin);
	freopen("outputC.txt", "w", stdout);
	cin >> t;
	for (int k = 1; k <= t; k++) {
		printf("Case #%d: ", k);
		cin >> n >> d;
		ans = 0;
		for (int i = 1; i <= n; i++) {
			if (i % d == 0) {
				n_right = n - i;
				for (int p2 = 0; ; p2++) {
					p2_sum = p2 * (i + 2);
					if (p2_sum > n_right) break;
					n_other = n_right - p2_sum;
					for (int p1 = 0; ; p1++) {
						p1_sum = p1 * (i + 1);
						if (p1_sum > n_other) break;
						if ((n_other - p1_sum) % i == 0) ans++;
					}
				}

			}
		}
		printf("%lld\n", ans);
	}
	return 0;
}