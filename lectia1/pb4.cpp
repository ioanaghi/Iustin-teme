#include <iostream>
using namespace std;
int estePrim(int n) {
	int nr = 0, d;
	for (d = 1; d <= n; d++)
		if (n % d == 0)
			nr++;
	if (nr == 2)
		return 1;
	else
		return 0;
}
int main() {
	int n;
	cin >> n;
	if (estePrim(n)) cout << "DA";
	else
		cout << "NU";
	return 0;
}
