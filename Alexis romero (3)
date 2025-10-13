#include <iostream>
using namespace std;

// Función para verificar si un número es primo
bool esPrimo(int n) {
    if (n <= 1) return false;
    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main() {
    int numero;
    cout << "Ingrese un numero: ";
    cin >> numero;

    if (esPrimo(numero))
        cout << numero << " es un numero primo." << endl;
    else
        cout << numero << " no es un numero primo." << endl;

    return 0;
}
