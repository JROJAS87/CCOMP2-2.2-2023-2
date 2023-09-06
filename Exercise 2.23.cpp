// (Largest and Smallest lntegers) Write a program that reads in five integers and 
// determines and prints the largest and the smallest integers in the group. 
// Use only the programming techniques you learned in this chapter.


#include <iostream>

using namespace std;

int main() {
    int num1, num2, num3, num4, num5;
    
    cout << "Ingresa el primer numero entero: ";
    cin >> num1;

    cout << "Ingresa el segundo numero entero: ";
    cin >> num2;

    cout << "Ingresa el tercer numero entero: ";
    cin >> num3;

    cout << "Ingresa el cuarto numero entero: ";
    cin >> num4;

    cout << "Ingresa el quinto numero entero: ";
    cin >> num5;

    int max = num1;
    int min = num1;

    if (num2 > max) {
        max = num2;
    }
    if (num2 < min) {
        min = num2;
    }

    if (num3 > max) {
        max = num3;
    }
    if (num3 < min) {
        min = num3;
    }

    if (num4 > max) {
        max = num4;
    }
    if (num4 < min) {
        min = num4;
    }

    if (num5 > max) {
        max = num5;
    }
    if (num5 < min) {
        min = num5;
    }

    cout << "El numero entero mas grande es: " << max << endl;
    cout << "El numero entero mas pequeño es: " << min << endl;

    return 0;
}
