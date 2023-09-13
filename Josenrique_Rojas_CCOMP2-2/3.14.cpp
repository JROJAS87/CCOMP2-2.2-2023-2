// 3.14 (Inicializadores de Lista en C++11) Escribe una declaración que utilice la inicialización de lista para 
// inicializar un objeto de la clase Account que proporciona un constructor que recibe un unsigned int, dos strings 
// y un double para inicializar los miembros de datos accountNumber, firstName, lastName y balance de un nuevo objeto de la clase.


#include <iostream>
#include <string>

class Cuenta {
public:
    // Constructor con inicialización de lista
    Cuenta(unsigned int numeroCuenta, std::string primerNombre, std::string apellido, double saldoInicial, int edad)
        : numeroCuenta(numeroCuenta), primerNombre(primerNombre), apellido(apellido), saldo(saldoInicial), edad(edad) {
    }

    unsigned int obtenerNumeroCuenta() const {
        return numeroCuenta;
    }

    std::string obtenerPrimerNombre() const {
        return primerNombre;
    }

    std::string obtenerApellido() const {
        return apellido;
    }

    int obtenerEdad() const {
        return edad;
    }

    double obtenerSaldo() const {
        return saldo;
    }

private:
    unsigned int numeroCuenta;
    std::string primerNombre;
    std::string apellido;
    double saldo;
    int edad;
};



int main() {
    Cuenta cuentaEjemplo(78492, "Josenrique", "Rojas", 3605.0, 18);

    std::cout << "Número de cuenta: " << cuentaEjemplo.obtenerNumeroCuenta() << std::endl;
    std::cout << "Nombre: " << cuentaEjemplo.obtenerPrimerNombre() << " " << cuentaEjemplo.obtenerApellido() << std::endl;
    std::cout << "Edad: " << cuentaEjemplo.obtenerEdad() << " años" << std::endl;
    std::cout << "Saldo: $" << cuentaEjemplo.obtenerSaldo() << std::endl;

    return 0;
}
