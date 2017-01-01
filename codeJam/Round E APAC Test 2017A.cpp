#include <iostream>
#include <string>
using namespace std;


int t;
string s;
long long fir, last;
int fir_ys, last_ys;
long long fir_s, last_s;

int len, bnum;
long long ans;

int main() {
	freopen("inputA.txt", "r", stdin);
	freopen("outputA.txt", "w", stdout);
	cin >> t;
	for (int k = 1; k <= t; k++) {
		printf("Case #%d: ", k);
		cin >> s;
		len = s.size();
		bnum = 0;
		for (int i = 0; i < len; i++) {
			if (s[i] == 'B') {
				bnum++;
			}
		}
		cin >> fir >> last;
		fir--; last--;
		fir_s = fir / len;
		last_s = last / len;
		fir_ys = fir % len;
		last_ys = last % len;
		ans = 0;
		if (fir_s == last_s) {
			for (int i = fir_ys; i <= last_ys; i++) {
				if (s[i] == 'B') {
					ans++;
				}
			}
		}
		else {
			for (int i = fir_ys; i <= len - 1; i++) {
				if (s[i] == 'B') {
					ans++;
				}
			}
			for (int i = 0; i <= last_ys; i++) {
				if (s[i] == 'B') {
					ans++;
				}
			}
			ans += (last_s - fir_s - 1) * bnum;
		}
		printf("%lld\n", ans);
	}
	return 0;
}