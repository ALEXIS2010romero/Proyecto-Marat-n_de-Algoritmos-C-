#include <iostream>
using namespace std;

int main() {
    // Declarar variables
    float num1, num2, num3, promedio;

    // Pedir datos al usuario
    cout << "Ingrese el primer numero: ";
    cin >> num1;

    cout << "Ingrese el segundo numero: ";
    cin >> num2;

    cout << "Ingrese el tercer numero: ";
    cin >> num3;

    // Calcular promedio
    promedio = (num1 + num2 + num3) / 3;

    // Mostrar resultado
    cout << "El promedio es: " << promedio << endl;

    return 0;
}
