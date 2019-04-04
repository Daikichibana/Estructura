#pragma once
#include <iostream>
#include <string>
using namespace std;

class Naturales
{ private:
	int entero;
public:
	//Metodos de acceso para numero (entero)
	int Get_entero()
	{
		return entero;
	}
	void Set_entero(int e)
	{
		entero = e;
	}

	Naturales sumar(Naturales x){
		Naturales c;
		c.entero =entero+x.entero;
		return c;
	}

};