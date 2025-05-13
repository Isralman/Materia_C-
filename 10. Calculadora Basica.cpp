#include <iostream>
using namespace std;

int main() {
    float num1, num2;
    char operacion;
    
    cout << "Ingrese el primer número: ";
    cin >> num1;
    cout << "Ingrese el segundo número: ";
    cin >> num2;
    cout << "Seleccione la operación (+, -, *, /): ";
    cin >> operacion;
    
    switch (operacion) {
        case '+':
            cout << "Resultado: " << num1 + num2 << endl;
            break;
        case '-':
            cout << "Resultado: " << num1 - num2 << endl;
            break;
        case '*':
            cout << "Resultado: " << num1 * num2 << endl;
            break;
        case '/':
            if (num2 != 0) {
                cout << "Resultado: " << num1 / num2 << endl;
            } else {
                cout << "Error: división por cero." << endl;
            }
            break;
        default:
            cout << "Operación no válida." << endl;
    }
    
    return 0;
}