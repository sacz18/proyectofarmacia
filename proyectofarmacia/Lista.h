#pragma once
#include "Proovedor.h"
#include "Medicamento.h"
#include <iostream>

using namespace System;
class Lista
{
private:

	Proovedor& ProovedorDeLista;
	Proovedor& Cabeza;

public:

	void AgregarProovedor(std::string Nombre, std::string NIT, std::string Direccion, std::string Correo, std::string Telefono);
	void AgregarMedicamento(std::string Nombre, int ID, std::string Clasificacion, std::string PrincipiosActivos, std::string Dosis );
	void EliminarTodo();
	void EliminarUno();
	void Imprimir();
	int size();
	int Particion();
};

