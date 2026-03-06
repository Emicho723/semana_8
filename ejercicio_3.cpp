#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Ingrese n (>=0): ";
    if (!(cin >> n) || n < 0) {
        cout << "Entrada inválida\n";
        return 0;
    }

    unsigned long long factorial = 1;
    for (int i = 1; i <= n; i++) factorial *= i;

    cout << "Factorial de " << n << " es " << factorial << "\n";
    return 0;
}
