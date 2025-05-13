#include <iostream>
using namespace std;

int main() {
    int numero;
    
    do {
        cout << "Ingrese un número (0 para salir): ";
        cin >> numero;
        
        if (numero > 0) {
            cout << "Positivo" << endl;
        } else if (numero < 0) {
            cout << "Negativo" << endl;
        }
    } while (numero != 0);
    
    cout << "Programa terminado." << endl;
    return 0;
}