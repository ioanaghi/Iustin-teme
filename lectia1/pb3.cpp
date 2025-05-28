#include <iostream>
using namespace std;
int estePalindrom(int n) {
    int ogl=0, x;
    x = n;
    while (x != 0)
    {
        ogl = ogl * 10 + x % 10;

        x = x / 10;
    }
    if (n == ogl)
        return 1;
    else
        return 0;

}
int main() {
    int n;
    cin >> n;
    if (estePalindrom(n))
        cout << "DA";
    else
        cout << "NU";
}
