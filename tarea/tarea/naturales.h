#pragma once
#include <iostream>
using namespace std;
class naturales{
private:
	int x;
public:
	int get_x(){
		return x;
	}

	void set_x(int y){
		x = y;
	}

	void leer(){
		cout<<"Ingrese el numero: ";
		cin>>x;
	}

	void mostrar(){
		cout<<"El numero "<<x;
	}
	
	int contar(){
	int dig=0, i=x;
		while(i>0){
			i = i/10;
			dig++;
		}
	return dig;
	}

	int elevar(int base, int n){
	int aux= 1, exp = n, i=0;
		while(i <exp){
			aux = aux*base;
			exp--;
		}
		return aux;
	}

	bool automorfico(){
		bool resp = false;
		int numero = x, aux;
		int cuadrado = elevar(x,2);

		aux = cuadrado%elevar(10,contar());
			
			if(aux == numero){
				return true;
			} else {
				return false;
			}
	}
};

