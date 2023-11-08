#include "Inventario.h"

Inventario::Inventario(std::string Nombre, int ID, std::string Clasificacion, std::string PrincipisActivos, std::string Dosis, double _PrecioCompra, double _PrecioVenta, int _Stock, Proovedor _Supplier, std::string _Caducidad)
	: Medicamento(Nombre, ID, Clasificacion, PrincipisActivos, Dosis)
{

	PrecioCompra = _PrecioCompra;
	PrecioVenta = _PrecioVenta;
	Stock = _Stock;
	Supplier = _Supplier;
	Caducidad = _Caducidad;

}

double Inventario::getPrecioCompra()
{
	return PrecioCompra;
}

void Inventario::setPrecioCompra(double _PrecioCompra)
{
	PrecioCompra = _PrecioCompra;
}

double Inventario::getPrecioVenta()
{
	return PrecioVenta;
}

void Inventario::setPrecioVenta(double _PrecioVenta)
{
	PrecioVenta = _PrecioVenta;
}

int Inventario::getStock()
{
	return Stock;
}

void Inventario::setStock(int _Stock)
{
	Stock = _Stock;
}

Proovedor Inventario::getSupplier()
{
	return Supplier;
}

void Inventario::setSupplier(Proovedor _Supplier)
{
	Supplier = _Supplier;
}

/*void Inventario::setProovedor(std::string Nombre, std::string NIT, std::string DireccionFiscal, std::string Correo, std::string Telefono, int ID)
{

	switch (ID) {

	case 1:

		Proovedor1 = Proovedor(Nombre, NIT, DireccionFiscal, Correo, Telefono);

		break;

	case 2:

		Proovedor2 = Proovedor(Nombre, NIT, DireccionFiscal, Correo, Telefono);

		break;

	case 3:

		Proovedor3 = Proovedor(Nombre, NIT, DireccionFiscal, Correo, Telefono);

		break;

	case 4:

		Proovedor4 = Proovedor(Nombre, NIT, DireccionFiscal, Correo, Telefono);

		break;

	}
}
*/
