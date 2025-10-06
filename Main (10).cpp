#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "¿Cuantos numeros desea ingresar?: ";
    cin >> n;

    float numeros[n], suma = 0, mayor, menor;

    for (int i = 0; i < n; i++) {
        cout << "Numero " << i + 1 << ": ";
        cin >> numeros[i];
        suma += numeros[i];
    }

    mayor = menor = numeros[0];

    for (int i = 1; i < n; i++) {
        if (numeros[i] > mayor)
            mayor = numeros[i];
        if (numeros[i] < menor)
            menor = numeros[i];
    }

    cout << "\nEl numero mayor es: " << mayor << endl;
    cout << "El numero menor es: " << menor << endl;
    cout << "El promedio es: " << suma / n << endl;

    return 0;
}

