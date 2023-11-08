#pragma once
#include <iostream>

using namespace System;
 class Medicamento //NODO MEDICAMENTO
{
protected:
	std::string Nombre;
	int NumeroID;
	std::string Clasificacion;
	std::string PrincipiosActivos;
	std::string Dosis;

public:
	Medicamento();
	Medicamento(std::string _Nombre, int _ID, std::string _Clasificacion, std::string _PrincipiosActivos, std::string _Dosis);

	std::string getNombre();
	void setNombre(std::string _Nombre);

	int getNumeroID();
	void setNumeroID(int _NumeroID);

	std::string getClasificacion();
	void setClasificacion(std::string _Clasificacion);

	std::string getPrincipiosActivos();
	void setPrincipiosActivos(std::string _PrincipiosActivos);

	std::string getDosis();
	void setDosis(std::string _Dosis);

	
};

