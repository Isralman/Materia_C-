#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string frase;
    int mayusculas = 0, minusculas = 0;
    
    cout << "Ingrese una frase: ";
    cin.ignore();  // Limpiar el buffer antes de getline
    getline(cin, frase);
    
    for (char c : frase) {
        if (isupper(c)) {
            mayusculas++;
        } else if (islower(c)) {
            minusculas++;
        }
    }
    
    cout << "Mayúsculas: " << mayusculas << endl;
    cout << "Minúsculas: " << minusculas << endl;
    
    return 0;
}