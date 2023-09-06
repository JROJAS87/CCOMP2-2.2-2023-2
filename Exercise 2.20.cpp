// (Diameter, Circumference and Area of a Circle) Write a program that reads in the radius of 
// a circle as an integer and prints the circle's diameter, circumference and area. 
// Use the constant value 3.14159 for Pi. Do all calculations in output statements. 


#include <iostream>
using namespace std;

int main() {
    int radio;

    cout << "Ingresa el radio del circulo: ";
    cin >> radio;

    const double PI = 3.14159;
    
    int diametro = 2 * radio;
    double circunferencia = 2 * PI * radio;
    double area = PI * radio * radio;

    cout << "El diametro es: " << diametro << endl;
    cout << "La circunferencia es: " << circunferencia << endl;
    cout << "El area es: " << area << endl;
    std::cout << "Gracias :D" << std::endl;

    return 0;
}
