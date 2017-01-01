#include <iostream>
#include <set>
#include <vector>
using namespace std;

int n, C, I;
vector<int> items;

void getAns() {
	for (int j = 0; j < items.size() - 1; j++) {
		for (int k = j + 1; k < items.size(); k++) {
			if (items[j] + items[k] == C) {
				printf("%d %d\n", j + 1, k + 1);
				return;
			}
		}
	}
}

int main() {
	freopen("inputA.txt", "r", stdin);
	freopen("outputA.txt", "w", stdout);
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		scanf("%d%d", &C, &I);
		items.clear();
		int item;
		for (int j = 0; j < I; j++) {
			scanf("%d", &item);
			items.push_back(item);
		}
		printf("Case #%d: ", i);
		getAns();
	}
	return 0;
}