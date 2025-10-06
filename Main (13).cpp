#include <iostream>
#include <string>
using namespace std;

// Función para invertir una cadena
string invertirCadena(string texto) {
    string invertida = "";
    for (int i = texto.length() - 1; i >= 0; i--) {
        invertida += texto[i];
    }
    return invertida;
}

// Función para contar vocales
int contarVocales(string texto) {
    int contador = 0;
    for (char c : texto) {
        c = tolower(c);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
            contador++;
    }
    return contador;
}

// Función para contar consonantes
int contarConsonantes(string texto) {
    int contador = 0;
    for (char c : texto) {
        c = tolower(c);
        if ((c >= 'a' && c <= 'z') && !(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'))
            contador++;
    }
    return contador;
}

int main() {
    string frase;
    cout << "Ingrese una frase: ";
    getline(cin, frase);

    cout << "\nF
