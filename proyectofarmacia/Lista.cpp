#include "Lista.h"

void Lista::AgregarProovedor(std::string Nombre, std::string NIT, std::string Direccion, std::string Correo, std::string Telefono)
{
    Proovedor Nuevo;

    Nuevo.Nombre = Nombre;
    Nuevo.NIT = NIT;
    Nuevo.DireccionFiscal = Direccion;
    Nuevo.Correo = Correo;
    Nuevo.Telefono = Telefono;
    /*
    if (Cabeza == nullptr) {

        Cabeza = Nuevo;

    }
    else {

        Nodo^ Actual = Cabeza;
        while (Actual->Siguiente) {
            Actual = Actual->Siguiente;
        }
        Actual->Siguiente = Nuevo;



    }
    */
}
