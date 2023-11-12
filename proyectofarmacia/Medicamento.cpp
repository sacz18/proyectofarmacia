#include "Medicamento.h"

Medicamento::Medicamento()
{

}

Medicamento::Medicamento(String^ _Nombre, int _ID, String^ _Clasificacion, String^ _PrincipiosActivos, String^ _Dosis)
{
	Nombre = _Nombre;
	NumeroID = _ID;
	Clasificacion = _Clasificacion;
	PrincipiosActivos = _PrincipiosActivos;
	Dosis = _Dosis;
}

String^ Medicamento::getNombre()
{
	return Nombre;
}

void Medicamento::setNombre(String^ _Nombre)
{
	Nombre = _Nombre;

}


String^ Medicamento::getClasificacion()
{
	return Clasificacion;
}

void Medicamento::setClasificacion(String^ _Clasificacion)
{
	Clasificacion = _Clasificacion;
}

String^ Medicamento::getPrincipiosActivos()
{
	return PrincipiosActivos;
}

void Medicamento::setPrincipiosActivos(String^ _PrincipiosActivos)
{
	PrincipiosActivos = _PrincipiosActivos;
}

String^ Medicamento::getDosis()
{
	return Dosis;
}

void Medicamento::setDosis(String^ _Dosis)
{
	Dosis = _Dosis;
}

int Medicamento::getID()
{
	return NumeroID;
}

void Medicamento::setID(int _ID)
{
	NumeroID = _ID;
}
