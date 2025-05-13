#include <iostream>
using namespace std;

int main() {
    int numero;
    cout << "Ingrese un número para la cuenta regresiva: ";
    cin >> numero;
    
    while (numero >= 0) {
        cout << numero << endl;
        numero--;
    }
    
    return 0;
}