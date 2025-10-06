#include <iostream>
using namespace std;

int main() {
    int opcion;
    float a, b;

    do {
        cout << "\n===== CALCULADORA SIMPLE =====" << endl;
        cout << "1. Sumar" << endl;
        cout << "2. Restar" << endl;
        cout << "3. Multiplicar" << endl;
        cout << "4. Dividir" << endl;
        cout << "5. Salir" << endl;
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        if (opcion >= 1 && opcion <= 4) {
            cout << "Ingrese el primer numero: ";
            cin >> a;
            cout << "Ingrese el segundo numero: ";
            cin >> b;
        }

        switch (opcion) {
            case 1:
                cout << "Resultado: " << a + b << endl;
                break;
            case 2:
                cout << "Resultado: " << a - b << endl;
                break;
            case 3:
                cout << "Resultado: " << a * b << endl;
                break;
            case 4:
                if (b != 0)
                    cout << "Resultado: " << a / b << endl;
                else
                    cout << "❌ Error: division por cero." << endl;
                break;
            case 5:
                cout << "👋 Saliendo del programa..." << endl;
                break;
            default:
                cout << "❌ Opcion no valida." << endl;
        }

    } while (opcion != 5);

    return 0;
}
