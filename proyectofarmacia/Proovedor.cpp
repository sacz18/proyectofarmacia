#include "Proovedor.h"



Proovedor::Proovedor()
{
}

Proovedor::Proovedor(String^ _Nombre, String^ _DireccionFiscal, String^ _Correo, String^ _NIT, String^ _Telefono)
{
	Nombre = _Nombre;
	NIT = _NIT;
	DireccionFiscal = _DireccionFiscal;
	Correo = _Correo;
	Telefono = _Telefono;
}

String^ Proovedor::getNombre()
{
	return Nombre;
}

void Proovedor::setNombre(String^ _Nombre)
{
	Nombre = _Nombre;
}

String^ Proovedor::getNIT()
{
	return NIT;
}

void Proovedor::setNIT(String^ _Nombre)
{
	NIT = _Nombre;
}

String^ Proovedor::getDireccionFiscal()
{
	return DireccionFiscal;
}

void Proovedor::setDireccionFiscal(String^ _Nombre)
{
	DireccionFiscal = _Nombre;
}

String^ Proovedor::getCorreo()
{
	return Correo;
}

void Proovedor::setCorreo(String^ _Nombre)
{
	Correo = _Nombre;
}

String^ Proovedor::getTelefono()
{
	return Telefono;
}

void Proovedor::setTelefono(String^ _Nombre)
{
	Telefono = _Nombre;
}

