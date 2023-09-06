// (Digits of an integer)  Write a program that inputs a four-digit integer, separates the integer
// into its digits and prints them in reverse order separated by two spaces each. 
// [Hint: Use the integer division and remainder operators.] 
// For example, if the user types in 4315, the program should print: 5 1 3 4


#include <iostream>

using namespace std;

int main() {
    int numero;

    cout << "Ingresa un numero entero de cuatro dígitos: ";
    cin >> numero;

    int digito4 = numero % 10;
    numero /= 10;
    int digito3 = numero % 10;
    numero /= 10;
    int digito2 = numero % 10;
    numero /= 10;
    int digito1 = numero % 10;

    cout << digito4 << "  " << digito3 << "  " << digito2 << "  " << digito1 << endl;

    return 0;
}
