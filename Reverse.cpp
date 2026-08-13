# include <iostream>
using namespace std;

int main() {
    int n, d = 0;
    cout << "Enter a number: ";
    cin >> n;

    while (n) {
        d = d * 10 + n % 10;
        n /= 10;
    }

    cout << d << endl;

    return 0;
}