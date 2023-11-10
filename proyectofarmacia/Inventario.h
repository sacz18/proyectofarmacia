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
	//da error el getprecio porque 
	//falta agregar todo en Padre 
	//al igual que ya se hizo con getprecio
	
	Inventario(std::string Nombre, int ID, std::string Clasificacion, std::string PrincipisActivos, std::string Dosis, double _PrecioCompra, double _PrecioVenta, int _Stock, Proovedor _Supplier, std::string _Caducidad);

	double getPrecioCompra();
	void setPrecioCompra(double _PrecioCompra);

	double getPrecioVenta();
	void setPrecioVenta(double _PrecioVenta);

	int getStock();
	void setStock(int _Stock);

	Proovedor getSupplier();
	void setSupplier(Proovedor _Supplier);

	//void setProovedor(std::string Nombre, std::string NIT, std::string DireccionFiscal, std::string Correo, std::string Telefono, int ID);

	
};

 // clase mas