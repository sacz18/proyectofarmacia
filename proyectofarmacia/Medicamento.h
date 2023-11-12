#pragma once
#include <iostream>

//MEDICAMENTO ES LA CLASE PADRE

using namespace System;
 class Medicamento //NODO MEDICAMENTO
{
protected:
	/*std::string Nombre;
	int NumeroID;
	std::string Clasificacion;
	std::string PrincipiosActivos;
	std::string Dosis;*/

public:

	int Telefono;
	std::string NombreProv;
	int NIT;
	std::string Dfiscal;
	std::string Correo;


	virtual std::string setNombre();
	virtual int setTelefono() = 0;
	virtual int setNIT() = 0;
	virtual std::string setDireccionFiscal();
	virtual std::string setCorreo();

	//Medicamento(std::string _DireccionFiscal,std::string _Nombre, int _NIT, std::string _Clasificacion, std::string _PrincipiosActivos, std::string _Dosis);
	//std::string getCorreo();
	//virtual void setCorreo(std::string _Correo);

	//int getTelefono();
	//virtual void setTelefono() = 0;

	//std::string getDireccionFiscal();
	//virtual void setDireccionFiscal(std::string _DireccionFiscal);

	//std::string getNombre();
	//virtual void setNombre(/*std::string _Nombre*/);

	//int getNumeroNIT();
	//virtual void setNumeroNIT(int _NIT);

	//std::string getClasificacion();
	//virtual void setClasificacion(std::string _Clasificacion);

	//std::string getPrincipiosActivos();
	//virtual void setPrincipiosActivos(std::string _PrincipiosActivos);

	//std::string getDosis();
	//virtual void setDosis(std::string _Dosis);
	
};

