#pragma once
#include "Proovedor.h"
#include "Medicamento.h"
#include <iostream>
#include <list>
using namespace System;

class Inventario : public Medicamento
{
private:

	double PrecioCompra;
	double PrecioVenta;
	int Stock;
	Proovedor Supplier;
	std::string Caducidad;

public:
	Inventario();
	Inventario(std::string Nombre, int ID, std::string Clasificacion, std::string PrincipisActivos, std::string Dosis, double _PrecioCompra, double _PrecioVenta, int _Stock, Proovedor _Supplier, std::string _Caducidad);

	double getPrecioCompra();
	void setPrecioCompra(double _PrecioCompra);

	double getPrecioVenta();
	void setPrecioVenta(double _PrecioVenta);

	int getStock();
	void setStock(int _Stock);

	std::string getCaducidad();

	std::string getSupplier();

	
};

