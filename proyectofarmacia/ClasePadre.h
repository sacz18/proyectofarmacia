#pragma once
class ClasePadre
{
public:
	double PrecioCompra;
	double PrecioVenta;
	int Stock;

	virtual int getPrecioCompra() = 0;
	

};

