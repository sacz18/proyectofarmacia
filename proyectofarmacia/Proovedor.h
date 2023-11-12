#pragma once
#include <iostream>
#include "Medicamento.h"

using namespace System;

ref class Proovedor //NUESTRO NODO DE PROVEDOOR
{

public:
	 String^ Nombre;
	 String^ NIT;
	 String^ DireccionFiscal;
	 String^ Correo;
	 String^ Telefono;
	 
	 Proovedor();
	 Proovedor(String^ _Nombre, String^ _DireccionFiscal, String^ _Correo, String^ _NIT, String^ _Telefono);
	 
	 String^ getNombre();
	 void setNombre(String^ _Nombre);

	 String^ getNIT();
	 void setNIT(String^ _Nombre);

	 String^ getDireccionFiscal();
	 void setDireccionFiscal(String^ _Nombre);

	 String^ getCorreo();
	 void setCorreo(String^ _Nombre);

	 String^ getTelefono();
	 void setTelefono(String^ _Nombre);

};

