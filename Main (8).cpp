#include <iostream>
using namespace std;

int main() {
    float saldo = 1000.0, retiro;
    char opcion;

    do {
        cout << "\n===== CAJERO AUTOMATICO =====" << endl;
        cout << "Saldo disponible: $" << saldo << endl;
        cout << "Ingrese el monto a retirar: $";
        cin >> retiro;

        if (retiro <= 0)
            cout << "❌ Monto invalido." << endl;
        else if (retiro > saldo)
            cout << "❌ Saldo insuficiente." << endl;
        else {
            saldo -= retiro;
            cout << "✅ Retiro exitoso. Saldo restante: $" << saldo << endl;
        }

        cout << "\n¿Desea realizar otro retiro? (s/n): ";
        cin >> opcion;

    } while ((opcion == 's' || opcion == 'S') && saldo > 0);

    cout << "\nGracias por usar el cajero. Saldo final: $" << saldo << endl;

    return 0;
}
