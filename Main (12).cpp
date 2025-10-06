#include <iostream>
#include <string>
using namespace std;

// Función para contar vocales
int contarVocales(string texto) {
    int contador = 0;
    for (int i = 0; i < texto.length(); i++) {
        char c = tolower(texto[i]);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
            contador++;
    }
    return contador;
}

int main() {
    string frase;
    cout << "Ingrese una palabra o frase: ";
    getline(cin, frase);  // Permite leer espacios

    int totalVocales = contarVocales(frase);
    cout << "La cantidad de vocales es: " << totalVocales << endl;

    return 0;
}
