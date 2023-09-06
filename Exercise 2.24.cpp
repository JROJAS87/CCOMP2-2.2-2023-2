// (Odd or Even} Write a program that reads in two integers and determines and prints
// whether each integer, as well as the sum of the two integers is an odd number. 
// [Hint: Use the remainder operator (%). An odd number is not a multiple of two. 
// Any odd number has a remainder of one when divided by 2.]


#include <iostream>

using namespace std;

int main() {
    int num1, num2;

    cout << "Ingresa el primer numero entero: ";
    cin >> num1;

    cout << "Ingresa el segundo numero entero: ";
    cin >> num2;

    if (num1 % 2 != 0) {
        cout << "El primer numero entero es impar." << endl;
    } else {
        cout << "El primer numero entero no es par." << endl;
    }

    if (num2 % 2 != 0) {
        cout << "El segundo numero entero es impar." << endl;
    } else {
        cout << "El segundo numero entero es par." << endl;
    }

    int suma = num1 + num2;

    if (suma % 2 != 0) {
        cout << "La suma de los dos numeros enteros es impar." << endl;
    } else {
        cout << "La suma de los dos numeros enteros es par." << endl;
    }

    return 0;
}

