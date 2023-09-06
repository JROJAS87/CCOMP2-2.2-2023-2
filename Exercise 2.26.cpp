// (Checkerboard Pattern) Display the following checkerboard pattern with eight output
// statements, then display the same pattern using as few statements as possible
//   * * * * * * * *
//    * * * * * * * *
//   * * * * * * * *
//    * * * * * * * *
//   * * * * * * * *
//    * * * * * * * *
//   * * * * * * * *
//    * * * * * * * *


#include <iostream>

using namespace std;

int main() {
    cout << "Ocho declaraciones de salida: " << endl;
    cout << "* * * * * * * * " << endl;
    cout << " * * * * * * * *" << endl;
    cout << "* * * * * * * * " << endl;
    cout << " * * * * * * * *" << endl;
    cout << "* * * * * * * * " << endl;
    cout << " * * * * * * * *" << endl;
    cout << "* * * * * * * * " << endl;
    cout << " * * * * * * * *" << endl;

    cout << "Menos declaraciones de salida: " << endl;
    for (int i = 1; i <= 8; i++) {
        if (i % 2 == 1) {
            cout << "* * * * * * * * " << endl;
        } else {
            cout << " * * * * * * * *" << endl;
        }
    }
    return 0;
}
