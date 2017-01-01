#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int n;
string line;

void printchar(char c) {
	int buf[] = { 0, 0, 'A', 'D', 'G', 'J', 'M', 'P', 'T', 'W', 'Z'+1 };
	for (int i = 2; i <= 9; i++) {
		if (c >= buf[i] && c < buf[i + 1]) {
			int times = c - buf[i] + 1;
			for (int j = 0; j < times; j++) {
				cout << c;
			}
		}
	}
}

int main() {
	freopen("inputC.txt", "r", stdin);
	//freopen("outputC.txt", "w", stdout);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		printf("Case #%d: ", i);
		getline(cin, line);
		char lastchar = 0;
		//lastchar=0:什么都没有，='0'表示上一个为开始0,=1表示上一个为中间0
		for (int j = 0; j < line.size(); j++) {
			char c = line[j];
			if (c == ' ') {
				if (lastchar == 0 || isalpha(lastchar)) {
					cout << '0';
					lastchar = '0';
				}
				else if (lastchar == '0') {
					cout << " 0";
					lastchar = 1;
				}
			}
			else {
				if (lastchar != c) {
					printchar(c);
				}
				else {
					cout << ' ';
					printchar(c);
				}
				lastchar = c;
			}
		}
	}
	return 0;
}