#pragma once
#include <iostream>

using namespace System;
 class Medicamento //NODO MEDICAMENTO
{

public:
	std::string Nombre;
	int NumeroID;
	std::string Clasificacion;
	std::string PrincipiosActivos;
	std::string Dosis;

	Medicamento& Siguiente; //PUNTERO
	Medicamento& Anterior; //PUNTERO
};

