#pragma once
#include <iostream>

//MEDICAMENTO ES LA CLASE PADRE

using namespace System;
 ref class Medicamento //NODO MEDICAMENTO
{
protected:
	String^ Nombre;
	int NumeroID;
	String^ Clasificacion;
	String^ PrincipiosActivos;
	String^ Dosis;

public:

	Medicamento();
	Medicamento(String^ _Nombre, int _ID, String^ _Clasificacion, String^ _PrincipiosActivos, String^ _Dosis);

	String^ getNombre();
	void setNombre(String^ _Nombre);

	String^ getClasificacion();
	void setClasificacion(String^ _Clasificacion);

	String^ getPrincipiosActivos();
	void setPrincipiosActivos(String^ _PrincipiosActivos);

	String^ getDosis();
	void setDosis(String^ _Dosis);
	
	int getID();
	void setID(int _ID);

};

