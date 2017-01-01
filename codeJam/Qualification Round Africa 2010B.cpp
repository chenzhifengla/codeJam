#include <iostream>
#include <stack>
#include <string>
#include <sstream>
using namespace std;

int n;
stack<string> S;
string line, word;

int main() {
	freopen("inputB.txt", "r", stdin);
	freopen("outputB.txt", "w", stdout);
	scanf("%d", &n);
	getchar();
	while (!S.empty()) S.pop();
	for (int k = 1; k <= n; k++) {
		printf("Case #%d:", k);
		getline(cin, line);
		stringstream ss(line);
		while (ss >> word) {
			S.push(word);
		}
		while (!S.empty()) {
			cout << " " << S.top();
			S.pop();
		}
		cout << endl;
	}
	return 0;
}