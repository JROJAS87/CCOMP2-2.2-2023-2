// 3.10 (Clase de Factura) Crea una clase llamada Invoice que una tienda de hardware podría utilizar para representar 
// una factura de un artículo vendido en la tienda. Una factura debe incluir seis miembros de datos: un número de parte 
// (tipo string), una descripción de la parte (tipo string), una cantidad del artículo comprado (tipo int), un precio por 
// artículo (tipo int), una tasa de impuesto al valor agregado (IVA) como decimal (tipo double) y una tasa de descuento como 
// decimal (tipo double). Tu clase debe tener un constructor que inicialice los seis miembros de datos. El constructor debe 
// inicializar los primeros cuatro miembros de datos con valores de parámetros y los dos últimos miembros de datos con valores 
// predeterminados de 0.20 por ciento y cero, respectivamente. Proporciona funciones setter y getter para cada miembro de datos. 
// Además, proporciona una función miembro llamada getInvoiceAmount que calcule el monto de la factura (es decir, multiplique la 
// cantidad por el precio por artículo y aplique los montos de impuesto y descuento), y luego devuelva el monto. Haz que los 
// miembros de datos establecidos realicen verificaciones de validez en sus parámetros; si un valor de parámetro no es positivo, 
// debe dejarse sin cambios. Escribe un programa controlador para demostrar las capacidades de Invoice.


#include <iostream>
#include <string>

class Invoice {
public:
    Invoice(std::string numeroParte, std::string descripcionParte, int cantidad, int precioPorArticulo,
            double tasaIVA = 0.20, double tasaDescuento = 0.0)
        : numeroParte(numeroParte), descripcionParte(descripcionParte), cantidad(cantidad),
          precioPorArticulo(precioPorArticulo), tasaIVA(tasaIVA), tasaDescuento(tasaDescuento) {}


    void setNumeroParte(std::string numeroParte) {
        this->numeroParte = numeroParte;
    }

    std::string getNumeroParte() const {
        return numeroParte;
    }

    void setDescripcionParte(std::string descripcionParte) {
        this->descripcionParte = descripcionParte;
    }

    std::string getDescripcionParte() const {
        return descripcionParte;
    }

    void setCantidad(int cantidad) {
        if (cantidad > 0) {
            this->cantidad = cantidad;
        }
    }

    int getCantidad() const {
        return cantidad;
    }

    void setPrecioPorArticulo(int precioPorArticulo) {
        if (precioPorArticulo > 0) {
            this->precioPorArticulo = precioPorArticulo;
        }
    }

    int getPrecioPorArticulo() const {
        return precioPorArticulo;
    }

    void setTasaIVA(double tasaIVA) {
        if (tasaIVA >= 0.0) {
            this->tasaIVA = tasaIVA;
        }
    }

    double getTasaIVA() const {
        return tasaIVA;
    }

    void setTasaDescuento(double tasaDescuento) {
        if (tasaDescuento >= 0.0) {
            this->tasaDescuento = tasaDescuento;
        }
    }

    double getTasaDescuento() const {
        return tasaDescuento;
    }



    // Formulas
    double getInvoiceAmount() const {
        double monto = cantidad * precioPorArticulo;
        double impuesto = monto * tasaIVA;
        double descuento = monto * tasaDescuento;
        return monto + impuesto - descuento;
    }



private:
    std::string numeroParte;
    std::string descripcionParte;
    int cantidad;
    int precioPorArticulo;
    double tasaIVA;
    double tasaDescuento;
};

int main() {
    Invoice factura("35742", "Tarjeta de Video 4090", 4, 3090, 0.15, 0.05);

    // Mostrar los detalles de la factura
    std::cout << "Número de parte: " << factura.getNumeroParte() << std::endl;
    std::cout << "Descripción de la parte: " << factura.getDescripcionParte() << std::endl;
    std::cout << "Cantidad: " << factura.getCantidad() << std::endl;
    std::cout << "Precio por artículo: $" << factura.getPrecioPorArticulo() << std::endl;
    std::cout << "Tasa de IVA: " << factura.getTasaIVA() * 100 << "%" << std::endl;
    std::cout << "Tasa de descuento: " << factura.getTasaDescuento() * 100 << "%" << std::endl;

    // Calcular y mostrar el monto de la factura
    double montoFactura = factura.getInvoiceAmount();
    std::cout << "Monto de la factura: $" << montoFactura << std::endl;

    return 0;
}
