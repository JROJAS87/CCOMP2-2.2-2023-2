// (Displaying Large Letters) What does the following code print?
// cout << *****\n****\n***\n **\n*\n " << endl;


#include <iostream>

using namespace std;

int main() {
    // cout << AQUI *****\n****\n***\n **\n*\n " << endl;
    cout << "*****\n****\n***\n **\n*\n " << endl;
    return 0;
}

// El codigo original muestra un error de sintaxis, 
// faltan comillas despues de cout <<, al corregirlo 
// muestra asteriscos con saltos de linea.