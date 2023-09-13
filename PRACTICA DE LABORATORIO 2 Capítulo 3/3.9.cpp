// 3.9 (Clase de Cuenta Modificada) Modifica la clase Account (Fig. 3.8) para proporcionar una función miembro 
// llamada "withdraw" que retire dinero de una cuenta. Asegúrate de que la cantidad de retiro no exceda el saldo 
// de la cuenta. Si lo hace, el saldo debe permanecer sin cambios y la función miembro debe mostrar un mensaje que 
// indique "La cantidad de retiro excedió el saldo de la cuenta." Modifica la clase AccountTest (Fig. 3.9) para probar 
// la función miembro "withdraw".


#include <iostream>
#include <string>
#include "Account.h"

using namespace std;

int main() {
    Account cuenta1("Jose", 47);
    Account cuenta2("Neymar", -7);

    cout << "Cuenta1: " << cuenta1.getName() << " El saldo es $" << cuenta1.getBalance() << endl;
    cout << "Cuenta2: " << cuenta2.getName() << " El saldo es $" << cuenta2.getBalance() << endl;

    int montoDeposito;
    cout << "\nIngresa el monto a depositar en la cuenta1: ";
    cin >> montoDeposito;
    cuenta1.deposit(montoDeposito);

    cout << "Ingresa el monto a depositar en la cuenta2: ";
    cin >> montoDeposito;
    cuenta2.deposit(montoDeposito);

    int montoRetiro;
    cout << "Ingresa cuánto deseas retirar de la cuenta1: ";
    cin >> montoRetiro;
    cuenta1.withdraw(montoRetiro);

    cout << "Ingresa cuánto deseas retirar de la cuenta2: ";
    cin >> montoRetiro;
    cuenta2.withdraw(montoRetiro);

    cout << "\nSaldos finales:" << endl;
    cout << "Cuenta1: " << cuenta1.getName() << " Tiene un saldo de $" << cuenta1.getBalance() << endl;
    cout << "Cuenta2: " << cuenta2.getName() << " Tiene un saldo de $" << cuenta2.getBalance() << endl;

    return 0;
}
