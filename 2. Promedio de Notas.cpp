#include <iostream>
using namespace std;

int main() {
    float nota, suma = 0;
    
    cout << "Ingrese 5 notas:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Nota " << i+1 << ": ";
        cin >> nota;
        suma += nota;
    }
    
    float promedio = suma / 5;
    cout << "El promedio es: " << promedio << endl;
    
    return 0;
}