// 3.13 (Eliminación de Código Duplicado en la Función main) En la Figura 3.9, la función principal contiene seis declaraciones 
// (líneas 14-15, 16-17, 26-27, 28-29, 37-38 y 39-40) que muestran el nombre y el saldo de un objeto Account. Estudia estas 
// declaraciones y notarás que difieren solo en el objeto Account que se está manipulando, ya sea account1 o account2. 
// En este ejercicio, definirás una nueva función llamada displayAccount que contendrá una copia de esa declaración de salida. 
// El parámetro de la función miembro será un objeto Account y la función miembro mostrará el nombre y el saldo del objeto. 
// Luego, reemplazarás las seis declaraciones duplicadas en main con llamadas a displayAccount, pasando como argumento el objeto 
// Account específico que se desea mostrar.


// Modifica la Figura 3.9 para definir la siguiente función displayAccount después de la directiva using y antes de main:
// void displayAccount(Account accountToDisplay) {
// coloca aquí la declaración que muestra
// el nombre y el saldo de accountToDisplay
// }

//Reemplaza el comentario en el cuerpo de la función miembro con una declaración que muestre el nombre y el saldo de accountToDisplay.

// Una vez que hayas completado la declaración de displayAccount, modifica main para reemplazar las declaraciones que 
// muestran el nombre y el saldo de cada Account con llamadas a displayAccount de la forma:
// displayAccount(nombreDelObjetoAccount);
// En cada llamada, el argumento debe ser el objeto account1 o account2, según corresponda. Luego, prueba el programa 
// actualizado para asegurarte de que produzca la misma salida que se muestra en la Figura 3.9.


#include <iostream>
#include <string>

class Cuenta {
public:
    Cuenta(std::string nombreCuenta, int saldoInicial)
        : nombre(nombreCuenta) {
        if (saldoInicial > 0) {
            saldo = saldoInicial;
        }
    }

    void establecerNombre(std::string nombreCuenta) {
        nombre = nombreCuenta;
    }

    std::string obtenerNombre() const {
        return nombre;
    }

    void depositar(int montoDeposito) {
        if (montoDeposito > 0) {
            saldo += montoDeposito;
        }
    }

    void retirar(int montoRetiro) {
        if (montoRetiro > 0 && montoRetiro <= saldo) {
            saldo -= montoRetiro;
        } else {
            std::cout << "La cantidad de retiro excede el saldo de la cuenta." << std::endl;
        }
    }

    int obtenerSaldo() const {
        return saldo;
    }


private:
    std::string nombre;
    int saldo{0};
};

void mostrarCuenta(const Cuenta& cuentaAMostrar) {
    std::cout << "Nombre de la cuenta: " << cuentaAMostrar.obtenerNombre() << " Saldo: $" << cuentaAMostrar.obtenerSaldo() << std::endl;
}

int main() {
    Cuenta cuenta1("Jose", 47);
    Cuenta cuenta2("Neymar", -7);

    mostrarCuenta(cuenta1);
    mostrarCuenta(cuenta2);

    int montoDeposito;
    std::cout << "\nIngresa el monto a depositar en la cuenta1: ";
    std::cin >> montoDeposito;
    cuenta1.depositar(montoDeposito);

    std::cout << "Ingresa el monto a depositar en la cuenta2: ";
    std::cin >> montoDeposito;
    cuenta2.depositar(montoDeposito);

    int montoRetiro;
    std::cout << "Ingresa cuánto deseas retirar de la cuenta1: ";
    std::cin >> montoRetiro;
    cuenta1.retirar(montoRetiro);

    std::cout << "Ingresa cuánto deseas retirar de la cuenta2: ";
    std::cin >> montoRetiro;
    cuenta2.retirar(montoRetiro);

    std::cout << "\nSaldos finales:" << std::endl;
    mostrarCuenta(cuenta1);
    mostrarCuenta(cuenta2);

    return 0;
}
