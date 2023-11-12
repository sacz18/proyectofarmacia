#include "Proovedor.h"



Proovedor::Proovedor(std::string _Nombre, std::string _NIT, std::string _DireccionFiscal, std::string _Correo, int _Telefono)
{
	/*getNombre = _Nombre;
	getNumeroNIT = _NIT;
	getDireccionFiscal = _DireccionFiscal;
	getCorreo = _Correo;*/
	Telefono = _Telefono;
}

//std::string Proovedor::getNombre()
//{
//	return Nombre;
//}
//
//void Proovedor::setNombre(std::string _Nombre)
//{
//	getNombre = _Nombre;
//}
//
//std::string Proovedor::getNIT()
//{
//	return NIT;
//}
//
//void Proovedor::setNIT(std::string _NIT)
//{
//	NIT = _NIT;
//}
//
//std::string Proovedor::getDireccionFiscal()
//{
//	return DireccionFiscal;
//}
//
//void Proovedor::setDireccionFiscal(std::string _DireccionFiscal)
//{
//	DireccionFiscal = _DireccionFiscal;
//}
//
//std::string Proovedor::getCorreo()
//{
//	return Correo;
//}
//
//void Proovedor::setCorreo(std::string _Correo)
//{
//	Correo = _Correo;
//}
//
//std::string Proovedor::getTelefono()
//{
//	return Telefono;
//}

int Proovedor::setTelefono()
{
	return Telefono; 
}
