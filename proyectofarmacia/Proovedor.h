#pragma once
#include <iostream>
#include "Medicamento.h"
#include <string>

using namespace System;

class Proovedor //NUESTRO NODO DE PROVEDOOR
{

public:
	std::string Nombre;
	std::string NIT;
	std::string DireccionFiscal;
	std::string Correo;
	std::string Telefono;
	 
	 Proovedor();
	 Proovedor(std::string _Nombre, std::string _DireccionFiscal, std::string _Correo, std::string _NIT, std::string _Telefono);
	 
	 std::string getNombre();
	 void setNombre(std::string _Nombre);

	 std::string getNIT();
	 void setNIT(std::string _Nombre);

	 std::string getDireccionFiscal();
	 void setDireccionFiscal(std::string _Nombre);

	 std::string getCorreo();
	 void setCorreo(std::string _Nombre);

	 std::string getTelefono();
	 void setTelefono(std::string _Nombre);

};

