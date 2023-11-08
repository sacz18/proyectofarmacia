#pragma once
#include "Proovedor.h"
#include "Medicamento.h"
#include <iostream>
#include <list>
using namespace System;

 class Inventario : public Medicamento
{
private:

	//TERMINAR MEDICINAS MEJOR
	//TODA ESTA SHIT LISTAS MEJOR HACERLA EN EL MAIN
	 Proovedor& Proovedor1;
	 Proovedor& Proovedor2;
	 Proovedor& Proovedor3;
	 Proovedor& Proovedor4;


	 std::list<Medicamento> InventarioTotal;
	 std::list<Medicamento> Lista1;
	 std::list<Medicamento> Lista2;
	 std::list<Medicamento> Lista3;
	 std::list<Medicamento> Lista4;

public:

	void setProovedor(std::string Nombre, std::string NIT, std::string DireccionFiscal, std::string Correo, std::string Telefono, int ID);
	void AgregarMedicina(Medicamento MedicinaInsertada, int Opcion);
	Medicamento DeclararMedicina(std::string Nombre, int ID, std::string Clasificacion, std::string PrincipisActivos, std::string Dosis, double PrecioCompra, double PrecioVenta);

};

