// (Integer Equivalentof a Character)  Write a program that prints the integer equivalent of a 
// character typed at the keyboard. Store the input in a variable of type char. Test your program 
// severa! times using uppercase letters, lowercase letters, dig­its and special characters (such as$). 


#include <iostream>

using namespace std;

int main() {
    char caracter;

    cout << "Ingresa un caracter: ";
    cin >> caracter;

    int equivalente = static_cast<int>(caracter);

    cout << "El equivalente entero de '" << caracter << "' es: " << equivalente << endl;

    return 0;
}
