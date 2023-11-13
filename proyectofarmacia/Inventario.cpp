#include "Inventario.h"



Inventario::Inventario()
{
}

Inventario::Inventario(std::string Nombre, int ID, std::string Clasificacion, std::string PrincipisActivos, std::string Dosis, double _PrecioCompra, double _PrecioVenta, int _Stock, Proovedor _Supplier, std::string _Caducidad) : Medicamento(Nombre, ID, Clasificacion, PrincipisActivos, Dosis)
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

std::string Inventario::getCaducidad()
{
	return Caducidad;
}

std::string Inventario::getSupplier()
{
	return Supplier.Nombre;
}


