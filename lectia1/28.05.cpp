#include <iostream>
using namespace std;


int estePar(int x)
{
	if (x % 2 != 0)
		return 0;
	else
		return 1;
}

int main() {
    int x;
    cin >> x;
    if (estePar(x))
        cout << "Numarul este par.";
    else
        cout << "Numarul este impar.";
}