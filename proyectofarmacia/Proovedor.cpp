#include "Proovedor.h"
#include "Medicamento.h"



Proovedor::Proovedor(std::string _Nombre, std::string _DireccionFiscal, std::string _Correo, int _NIT, int _Telefono)
{
	NombreProv = _Nombre;
	NIT = _NIT;
	Dfiscal = _DireccionFiscal;
	Correo = _Correo;
	Telefono = _Telefono;
}

//std::string Proovedor::getNombre()
//{
//	return Nombre;
//}
//
std::string Proovedor::setNombre()
{
	return NombreProv;
}
//
//std::string Proovedor::getNIT()
//{
//	return NIT;
//}
//
int Proovedor::setNIT()
{
	return NIT;
}
//
//std::string Proovedor::getDireccionFiscal()
//{
//	return DireccionFiscal;
//}
//
std::string Proovedor::setDireccionFiscal()
{
	return Dfiscal;
}
//
//std::string Proovedor::getCorreo()
//{
//	return Correo;
//}
//
std::string Proovedor::setCorreo()
{
	return Correo;
}
//
//std::string Proovedor::getTelefono()
//{
//	return Telefono;
//}

int Proovedor::setTelefono()
{
	return Telefono; 
}
