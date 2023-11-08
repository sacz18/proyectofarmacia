#pragma once
#include <iostream>

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
	 Proovedor(std::string _Nombre, std::string _NIT, std::string _DireccionFiscal, std::string _Correo, std::string _Telefono);

	 std::string getNombre();
	 void setNombre(std::string _Nombre);

	 std::string getNIT();
	 void setNIT(std::string _NIT);

	 std::string getDireccionFiscal();
	 void setDireccionFiscal(std::string _DireccionFiscal);

	 std::string getCorreo();
	 void setCorreo(std::string _Correo);

	 std::string getTelefono();
	 void setTelefono(std::string _Telefono);
};

