// (Factors) Write a program that reads in three integers and determines and prints if the first
// two integers are factors of the second. [Hint: Use the remainder operator (%).]


#include <iostream>

using namespace std;

int main() {
    int num1, num2, num3;

    cout << "Ingresa el primer numero entero: ";
    cin >> num1;

    cout << "Ingresa el segundo numero entero: ";
    cin >> num2;

    cout << "Ingresa el tercer numero entero: ";
    cin >> num3;


    if (num3 % num1 == 0 && num3 % num2 == 0) {
        cout << num1 << " y " << num2 << " son factores de " << num3 << endl;
    } else {
        cout << num1 << " y " << num2 << " no son factores de " << num3 << endl;
    }

    return 0;
}
