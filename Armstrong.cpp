# include <iostream>
using namespace std;

int main() {
    int n, d, sum = 0, temp;
    cout << "Enter a number: ";
    cin >> n;
    temp = n;

    for (int i = 0; i < 3; i++) {
        d = temp % 10;
        sum += d * d * d;
        temp /= 10;
    }

    if (sum == n) {
        cout << "Armstrong number" << endl;
    } else {
        cout << "Not an Armstrong number" << endl;
    }

    return 0;
}