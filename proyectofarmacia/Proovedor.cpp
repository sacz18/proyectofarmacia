#include "Proovedor.h"

Proovedor::Proovedor(std::string _Nombre, std::string _NIT, std::string _DireccionFiscal, std::string _Correo, std::string _Telefono)
{
	Nombre = _Nombre;
	NIT = _NIT;
	DireccionFiscal = _DireccionFiscal;
	Correo = _Correo;
	Telefono = _Telefono;
}

std::string Proovedor::getNombre()
{
	return Nombre;
}

void Proovedor::setNombre(std::string _Nombre)
{
	Nombre = _Nombre;
}

std::string Proovedor::getNIT()
{
	return NIT;
}

void Proovedor::setNIT(std::string _NIT)
{
	NIT = _NIT;
}

std::string Proovedor::getDireccionFiscal()
{
	return DireccionFiscal;
}

void Proovedor::setDireccionFiscal(std::string _DireccionFiscal)
{
	DireccionFiscal = _DireccionFiscal;
}

std::string Proovedor::getCorreo()
{
	return Correo;
}

void Proovedor::setCorreo(std::string _Correo)
{
	Correo = _Correo;
}

std::string Proovedor::getTelefono()
{
	return Telefono;
}

void Proovedor::setTelefono(std::string _Telefono)
{
	Telefono = _Telefono;
}
