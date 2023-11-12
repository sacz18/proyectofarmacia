#pragma once
#include <iostream>
#include "Medicamento.h"

using namespace System;

 class Proovedor : public Medicamento//NUESTRO NODO DE PROVEDOOR
{

public:
	/* std::string Nombre;
	 std::string NIT;
	 std::string DireccionFiscal;
	 std::string Correo;
	 std::string Telefono;*/
	 
	 Proovedor(std::string _Nombre, std::string _DireccionFiscal, std::string _Correo, int _NIT, int _Telefono);
	 
	 int setTelefono()override;
	 std::string setNombre()override;
	 int setNIT()override;
	 std::string setDireccionFiscal()override;
	 std::string setCorreo()override;

	 /*std::string getNombre();
	 

	 std::string getNIT();
	 void setNIT(std::string _NIT)override;

	 std::string getDireccionFiscal();
	 void setDireccionFiscal(std::string _DireccionFiscal)override;

	 std::string getCorreo();
	 void setCorreo(std::string _Correo)override;

	 std::string getTelefono();*/
	 
};

