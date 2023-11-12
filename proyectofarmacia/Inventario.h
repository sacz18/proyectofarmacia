#pragma once
#include "Proovedor.h"
#include "Medicamento.h"
#include <iostream>
#include <list>
using namespace System;

ref class Inventario : public Medicamento
{
private:

	double PrecioCompra;
	double PrecioVenta;
	int Stock;
	Proovedor^ Supplier;
	String^ Caducidad;

	//TERMINAR MEDICINAS MEJOR
	//TODA ESTA SHIT LISTAS MEJOR HACERLA EN EL MAIN
	/*
	 Proovedor& Proovedor1;
	 Proovedor& Proovedor2;
	 Proovedor& Proovedor3;
	 Proovedor& Proovedor4;


	 std::list<Medicamento> InventarioTotal;
	 std::list<Medicamento> Lista1;
	 std::list<Medicamento> Lista2;
	 std::list<Medicamento> Lista3;
	 std::list<Medicamento> Lista4;
	 */

public:
	Inventario();
	Inventario(String^ Nombre, int ID, String^ Clasificacion, String^ PrincipisActivos, String^ Dosis, double _PrecioCompra, double _PrecioVenta, int _Stock, Proovedor^ _Supplier, String^ _Caducidad);

	double getPrecioCompra();
	void setPrecioCompra(double _PrecioCompra);

	double getPrecioVenta();
	void setPrecioVenta(double _PrecioVenta);

	int getStock();
	void setStock(int _Stock);

	Proovedor getSupplier();	

	
};

