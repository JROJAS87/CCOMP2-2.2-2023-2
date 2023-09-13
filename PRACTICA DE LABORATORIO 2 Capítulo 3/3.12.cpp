// 3.12 (Clase Date) Crea una clase llamada Date que incluya tres piezas de información como miembros de datos:
// un mes (tipo int), un día (tipo int) y un año (tipo int). Tu clase debe tener un constructor con tres parámetros 
//  que utilice los parámetros para inicializar los tres miembros de datos. Para efectos de este ejercicio, asume que 
//  los valores proporcionados para el año y el día son correctos, pero asegúrate de que el valor del mes esté en el 
//  rango de 1 a 12; si no lo está, establece el mes en 1. Proporciona una función setter y una función getter para 
//  cada miembro de datos. Proporciona una función miembro llamada displayDate que muestre el mes, el día y el año 
//  separados por barras diagonales (/). Escribe un programa de prueba que demuestre las capacidades de la clase Date.


#include <iostream>

class Date {
public:
    Date(int dia, int mes, int ano)
        : dia{ dia }, mes{ validarMes(mes) }, ano{ ano } {}

    // Funciones setter y getter para cada miembro de datos
    void setDia(int dia) {
        this->dia = dia;
    }

    int getDia() const {
        return dia;
    }

    void setMes(int mes) {
        this->mes = validarMes(mes);
    }

    int getMes() const {
        return mes;
    }

    void setAno(int ano) {
        this->ano = ano;
    }

    int getAno() const {
        return ano;
    }

    void displayDate() const {
        std::cout << dia << '/' << mes << '/' << ano << std::endl;
    }



private:
    int dia;
    int mes;
    int ano;
    
    int validarMes(int mes) const {
        if (mes >= 1 && mes <= 12) {
            return mes;
        } else {
            return 1; // Si el mes no está en el rango válido, establecemos el mes en 1 por defecto.
        }
    }
};

int main() {
    int dia, mes, ano;

    std::cout << "Ingrese el día: ";
    std::cin >> dia;

    std::cout << "Ingrese el mes: ";
    std::cin >> mes;

    std::cout << "Ingrese el año: ";
    std::cin >> ano;

    Date fecha1(dia, mes, ano);

    std::cout << "Fecha ingresada: ";
    fecha1.displayDate();

    return 0;
}
