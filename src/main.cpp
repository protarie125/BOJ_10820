#include <iostream>
#include <string>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	string s;
	getline(cin, s);
	while (cin.good()) {
		const auto& n = s.length();
		int a = 0, b = 0, c = 0, d = 0;
		for (auto i = 0; i < n; ++i) {
			const auto& x = s[i];
			if ('a' <= x && x <= 'z') {
				++a;
			}
			else if ('A' <= x && x <= 'Z') {
				++b;
			}
			else if ('0' <= x && x <= '9') {
				++c;
			}
			else if (' ' == x) {
				++d;
			}
		}

		cout << a << ' ' << b << ' ' << c << ' ' << d << '\n';
		getline(cin, s);
	}

	return 0;
}