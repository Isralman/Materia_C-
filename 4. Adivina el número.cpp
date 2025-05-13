#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    int numeroSecreto = rand() % 100 + 1;
    int intento, intentos = 0;
    
    cout << "Adivina el número entre 1 y 100" << endl;
    
    while (true) {
        cout << "Ingresa tu intento: ";
        cin >> intento;
        intentos++;
        
        if (intento < numeroSecreto) {
            cout << "Muy bajo" << endl;
        } else if (intento > numeroSecreto) {
            cout << "Muy alto" << endl;
        } else {
            cout << "¡Correcto! Lo adivinaste en " << intentos << " intentos." << endl;
            break;
        }
    }
    
    return 0;
}