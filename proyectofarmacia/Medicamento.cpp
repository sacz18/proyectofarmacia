#include "Medicamento.h"

Medicamento::Medicamento(std::string _Nombre, int _ID, std::string _Clasificacion, std::string _PrincipiosActivos, std::string _Dosis)
{
	Nombre = _Nombre;
	NumeroID = _ID;
	Clasificacion = _Clasificacion;
	PrincipiosActivos = _PrincipiosActivos;
	Dosis = _Dosis;
}

std::string Medicamento::getNombre()
{
	return Nombre;
}

void Medicamento::setNombre(std::string _Nombre)
{
	Nombre = _Nombre;

}

int Medicamento::getNumeroID()
{
	return NumeroID;
}

void Medicamento::setNumeroID(int _NumeroID)
{
	NumeroID = _NumeroID;
}

std::string Medicamento::getClasificacion()
{
	return Clasificacion;
}

void Medicamento::setClasificacion(std::string _Nombre)
{
	Clasificacion = _Clasificacion;
}

std::string Medicamento::getPrincipiosActivos()
{
	return PrincipiosActivos;
}

void Medicamento::setPrincipiosActivos(std::string _PrincipiosActivos)
{
	PrincipiosActivos = _PrincipiosActivos;
}

std::string Medicamento::getDosis()
{
	return Dosis;
}

void Medicamento::setDosis(std::string _Dosis)
{
	Dosis = _Dosis;
}
