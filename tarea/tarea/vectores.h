#pragma once
#include <iostream>
#include <string>
#include "naturales.h"
using namespace std;

const int N = 25;

class vectores{
private: 
	int tamano;
	int entero[N];
public:
	int get_tamano(){return tamano;}
	void set_tamano(int tam){tamano = tam;}

	int get_entero(){return entero[N];}
	void set_entero(int i, int y){entero[i] = y;}

	void leer(){
	int i=0;
	cout<<"introduccir cantidad deseadas de datos: ";
	cin>>tamano;
		while(i < tamano){
			cout<<"ingrese el numero: ";
			cin>>entero[i];
			i++;
		}
	}

	void mostrar(){
	int i=0;
	naturales c;

		while(i <tamano){
			c.set_x(entero[i]);
			cout<<entero[i]<<"---";
			if(c.automorfico() == true){
				cout<<"Es automorfico"<<endl;
			} else {
				cout<<"No es automorfico"<<endl;
			}
		i++;
		}
	}

};

