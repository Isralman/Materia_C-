#include <iostream>
using namespace std;

int main() {
    float dolares;
    int opcion;
    const float PESOS = 20.0;  // Ejemplo: 1 dólar = 20 pesos
    const float EUROS = 0.85;   // Ejemplo: 1 dólar = 0.85 euros
    const float YENES = 110.0;  // Ejemplo: 1 dólar = 110 yenes
    
    do {
        cout << "\nConvertidor de divisas" << endl;
        cout << "1. Dólares a Pesos" << endl;
        cout << "2. Dólares a Euros" << endl;
        cout << "3. Dólares a Yenes" << endl;
        cout << "4. Salir" << endl;
        cout << "Seleccione una opción: ";
        cin >> opcion;
        
        if (opcion >= 1 && opcion <= 3) {
            cout << "Ingrese la cantidad en dólares: ";
            cin >> dolares;
        }
        
        switch (opcion) {
            case 1:
                cout << dolares << " dólares = " << dolares * PESOS << " pesos" << endl;
                break;
            case 2:
                cout << dolares << " dólares = " << dolares * EUROS << " euros" << endl;
                break;
            case 3:
                cout << dolares << " dólares = " << dolares * YENES << " yenes" << endl;
                break;
            case 4:
                cout << "Saliendo del programa..." << endl;
                break;
            default:
                cout << "Opción no válida. Intente de nuevo." << endl;
        }
    } while (opcion != 4);
    
    return 0;
}