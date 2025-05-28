#include <iostream>
using namespace std;


int maxim(int a, int b) {
	if (a > b)
		return a;
	else
		return b;
}
int main() {
	int a, b;
	cin >> a >> b;
	cout << "Maximul este: " << maxim(a, b);
}
