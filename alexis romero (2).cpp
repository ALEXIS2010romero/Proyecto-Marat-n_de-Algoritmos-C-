#include <iostream>
using namespace std;

int main() {
    float c;
    cout << "Ingrese grados Celsius: ";
    cin >> c;
    cout << "Equivalen a " << (c * 9 / 5) + 32 << " Fahrenheit." << endl;
    return 0;
}
