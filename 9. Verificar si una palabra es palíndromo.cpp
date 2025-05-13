#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string palabra;
    cout << "Ingrese una palabra: ";
    cin >> palabra;
    
    string reversa = palabra;
    reverse(reversa.begin(), reversa.end());
    
    if (palabra == reversa) {
        cout << "Es un palíndromo." << endl;
    } else {
        cout << "No es un palíndromo." << endl;
    }
    
    return 0;
}