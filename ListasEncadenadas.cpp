#pragma once
#include <iostream>
#include <string>
#include "NODO.h"
using namespace std;
const int N=20;
class Lista
{
	int list, disp;
	NODO lista[N];
	void Liberar_nodo(int pos);
public:
	Lista(void);
	bool insertar(int pos, NODO x);
	bool eliminar(int pos, NODO &x);
	int Buscar_nodo();
	int Primero();
	int Ultimo();
	int Proximo(int pos);
	int Fin_lista();
	bool Equivalente(int p, int q);
	bool lista_vacia();
	bool lista_llena();
	NODO get_lista(int p);
	void set_lista(int p, NODO x);
	Lista this_apuntador();
	void this_apuntador(Lista l);
};

