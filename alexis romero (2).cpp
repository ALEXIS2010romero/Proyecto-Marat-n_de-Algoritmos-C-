#include <iostream>
#include <limits> // Para limpiar el buffer de entrada

using namespace std;

void limpiarBuffer() {
    cin.clear(); // Limpiar el error del flujo
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Limpiar el buffer
}

int main() {
    int opcion;
    double num1, num2;

    do {
        // Mostrar el menú
        cout << "Calculadora Simple\n";
        cout << "1. Sumar\n";
        cout << "2. Restar\n";
        cout << "3. Multiplicar\n";
        cout << "4. Dividir\n";
        cout << "5. Salir\n";
        cout << "Elige una opción: ";
        
        // Leer la opción
        cin >> opcion;

        // Comprobar si la opción es válida
        if(cin.fail()) {
            limpiarBuffer();
            cout << "Opción no válida. Por favor, ingresa un número.\n";
            continue;
        }

        if(opcion != 5) {
            // Pedir los números
            cout << "Ingresa el primer número: ";
            cin >> num1;
            cout << "Ingresa el segundo número: ";
            cin >> num2;

            // Realizar la operación según la opción elegida
            switch (opcion) {
                case 1:
                    cout << "Resultado: " << num1 + num2 << endl;
                    break;
                case 2:
                    cout << "Resultado: " << num1 - num2 << endl;
                    break;
                case 3:
                    cout << "Resultado: " << num1 * num2 << endl;
                    break;
                case 4:
                    if (num2 != 0) {
                        cout << "Resultado: " << num1 / num2 << endl;
                    } else {
                        cout << "Error: División por cero no permitida.\n";
                    }
                    break;
                default:
                    cout << "Opción no válida. Intenta de nuevo.\n";
            }
        }

    } while (opcion != 5);

    cout << "¡Hasta luego!" << endl;

    return 0;
}
