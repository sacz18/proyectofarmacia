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
	double PrecioCompra;
	double PrecioVenta;

public:
	


	Medicamento();
	Medicamento(std::string _Nombre, int _ID, std::string _Clasificacion, std::string _PrincipiosActivos, std::string _Dosis, double _PrecioCompra, double _PrecioVenta);
};

