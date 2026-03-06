#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Ingrese un número entero: ";
    if (!(cin >> n)) return 0;

    cout << "El doble de " << n << " es " << (2 * n) << "\n";
    cout << "El triple de " << n << " es " << (3 * n) << "\n";
    return 0;
}
