#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Ingrese n (cantidad de términos Fibonacci): ";
    cin >> n;

    long long a = 0, b = 1;

    for (int i = 0; i < n; i++) {
        cout << a;
        if (i + 1 < n) cout << " ";
        long long temp = a;
        a = b;
        b = temp + b;
    }

    cout << "\n";
    return 0;
}
