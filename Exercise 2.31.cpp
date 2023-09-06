// (Car-Pool Savings Calculator) Research severa! car-pooling websites. Create an application that 
// calculares your daily driving cost, so that you can estímate how much money could be saved by car 
// pooling, which also has other advantages such as reducing carbon emissions and reducing traffic congestion. 
// The application should input the following information and display the user's cost per day of driving to work:  
// a) 	Total miles driven per day.
// b)	Cost per gallon of gasoline.
// c)	Average miles per gallon.
// d)	Parking fees per day.
// e)	Tolls per day.



#include <iostream>

using namespace std;

int main() {
    double millas_por_dia, gasolina, millas_por_galon, tarifas_estacionamiento, peajes;

    cout << "Car-Pool Savings Calculator" << endl;

    cout << "Ingresa el recorrido en millas: ";
    cin >> millas_por_dia;

    cout << "Ingresa el monto gastado en gasolina: $";
    cin >> gasolina;

    cout << "Ingresa el promedio de millas por galón : ";
    cin >> millas_por_galon;

    cout << "Ingresa el monto gastado en estacionamiento: $";
    cin >> tarifas_estacionamiento;

    cout << "Ingresa el monto gastado en peajes: $";
    cin >> peajes;

    double costo_diario = (millas_por_dia / millas_por_galon) * gasolina + tarifas_estacionamiento + peajes;

    cout << "Tu gasto diario es de: $" << costo_diario << endl;

    return 0;
}
