#include "Inventario.h"

void Inventario::setProovedor(std::string Nombre, std::string NIT, std::string DireccionFiscal, std::string Correo, std::string Telefono, int ID)
{

	switch (ID) {

	case 1:

		Proovedor1 = Proovedor(Nombre, NIT, DireccionFiscal, Correo, Telefono);

		break;

	case 2:

		Proovedor2 = Proovedor(Nombre, NIT, DireccionFiscal, Correo, Telefono);

		break;

	case 3:

		Proovedor3 = Proovedor(Nombre, NIT, DireccionFiscal, Correo, Telefono);

		break;

	case 4:

		Proovedor4 = Proovedor(Nombre, NIT, DireccionFiscal, Correo, Telefono);

		break;

	}
}

void Inventario::AgregarMedicina(Medicamento MedicinaInsertada, int Opcion)
{
	InventarioTotal.push_back(MedicinaInsertada);

	switch (Opcion) {
	 case 1:
		 Lista1.push_back(MedicinaInsertada);
		break;
	 case 2:
		 Lista2.push_back(MedicinaInsertada);
		 break;
	 case 3:
		 Lista3.push_back(MedicinaInsertada);
		 break;
	 case 4:
		 Lista4.push_back(MedicinaInsertada);
		 break;
	}

}

Medicamento Inventario::DeclararMedicina(std::string Nombre, int ID, std::string Clasificacion, std::string PrincipisActivos, std::string Dosis, double PrecioCompra, double PrecioVenta)
{
	Medicamento Medicina = Medicamento(Nombre, ID, Clasificacion, PrincipisActivos, Dosis, PrecioCompra, PrecioVenta);

	return Medicina;

}
