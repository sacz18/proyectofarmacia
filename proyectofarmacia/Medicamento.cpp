#include "Medicamento.h"

Medicamento::Medicamento(std::string _Nombre, int _ID, std::string _Clasificacion, std::string _PrincipiosActivos, std::string _Dosis, double _PrecioCompra, double _PrecioVenta)
{
	Nombre = _Nombre;
	NumeroID = _ID;
	Clasificacion = _Clasificacion;
	PrincipiosActivos = _PrincipiosActivos;
	Dosis = _Dosis;
	PrecioCompra = _PrecioCompra;
	PrecioVenta = _PrecioVenta;
}
