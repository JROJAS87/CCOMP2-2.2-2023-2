// 3.11 (Clase MotorVehicle) Crea una clase llamada MotorVehicle que represente un vehículo de motor utilizando: 
// make (tipo string), fuelType (tipo string), yearOfManufacture (tipo int), color (tipo string) y engineCapacity 
// (tipo int). Tu clase debe tener un constructor que inicialice los tres miembros de datos. Proporciona una función 
// setter y una función getter para cada miembro de datos. Agrega una función miembro llamada displayCarDetails que 
// muestre los cinco miembros de datos en cinco líneas separadas en el formato "nombre del miembro: valor del miembro". 
// Escribe un programa de prueba para demostrar las capacidades de MotorVehicle.


#include <iostream>
#include <string>

class VehiculoMotor {
public:
    VehiculoMotor(std::string marca, std::string tipoCombustible, int añoFabricacion, std::string color, int cilindrada)
        : marca(marca), tipoCombustible(tipoCombustible), añoFabricacion(añoFabricacion), color(color), cilindrada(cilindrada) {}

    void setMarca(std::string marca) {
        this->marca = marca;
    }

    std::string getMarca() const {
        return marca;
    }

    void setTipoCombustible(std::string tipoCombustible) {
        this->tipoCombustible = tipoCombustible;
    }

    std::string getTipoCombustible() const {
        return tipoCombustible;
    }

    void setAñoFabricacion(int añoFabricacion) {
        if (añoFabricacion >= 0) {
            this->añoFabricacion = añoFabricacion;
        }
    }

    int getAñoFabricacion() const {
        return añoFabricacion;
    }

    void setColor(std::string color) {
        this->color = color;
    }

    std::string getColor() const {
        return color;
    }

    void setCilindrada(int cilindrada) {
        if (cilindrada >= 0) {
            this->cilindrada = cilindrada;
        }
    }

    int getCilindrada() const {
        return cilindrada;
    }


    void mostrarDetallesVehiculo() const {
        std::cout << "Marca: " << marca << std::endl;
        std::cout << "Tipo de Combustible: " << tipoCombustible << std::endl;
        std::cout << "Año de Fabricación: " << añoFabricacion << std::endl;
        std::cout << "Color: " << color << std::endl;
        std::cout << "Cilindrada: " << cilindrada << " cc" << std::endl;
    }

private:
    std::string marca;
    std::string tipoCombustible;
    int añoFabricacion;
    std::string color;
    int cilindrada;
};

int main() { 
    VehiculoMotor vehiculo("Toyota Supra", "Gasolina", 2022, "Rojo", 3000);

    // Mostrar los detalles del vehículo
    vehiculo.mostrarDetallesVehiculo();

    return 0;
}
