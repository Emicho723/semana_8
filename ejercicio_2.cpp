#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Ingrese dos enteros separados por espacio: ";
    if (!(cin >> a >> b)) return 0;

    cout << a << " es " << (a % 2 == 0 ? "par" : "impar") << "\n";
    cout << b << " es " << (b % 2 == 0 ? "par" : "impar") << "\n";
    return 0;
}
