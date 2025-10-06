#include <iostream>
using namespace std;

int main() {
    int n, numero, pares = 0, impares = 0;

    cout << "¿Cuantos numeros desea ingresar?: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cout << "Numero " << i << ": ";
        cin >> numero;

        if (numero % 2 == 0)
            pares++;
        else
            impares++;
    }

    cout << "\nCantidad de numeros pares: " << pares << endl;
    cout << "Cantidad de numeros impares: " << impares << endl;

    return 0;
}
