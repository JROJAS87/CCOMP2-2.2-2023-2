// (Body Mass Index Calculator) Create a BMI calculator application that reads the user's weight 
// in pounds and height in inches (or, if you prefer, the user's weight in kilograms and height in meters), 
// then calculates and displays the user's body mass index. 


#include <iostream>

using namespace std;

int main() {
    double peso, altura;
    
    cout << "Calculadora de IMC (Índice de Masa Corporal)" << endl;
    cout << "Ingresa tu peso en kilogramos: ";
    cin >> peso;
    
    cout << "Ingresa tu altura en metros: ";
    cin >> altura;
    
    double imc = peso / (altura * altura);
    
    cout << "Tu IMC es:\n " << imc << endl;
    
    cout << "BMI VALUES: " << endl;
    cout << "Underweight: less than 18.5" << endl;
    cout << "Normal: between 18.5 and 24.9" << endl;
    cout << "Overweight: between 25 and 29.9" << endl;
    cout << "Obese: 30 or greater" << endl;
    
    return 0;
}
