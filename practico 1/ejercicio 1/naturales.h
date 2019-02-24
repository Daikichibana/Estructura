#pragma once
#include <iostream>
#include <string>
using namespace std;

class naturales{
private:
	int entero;
public:
	int get_entero(){
		return entero;
	}


	void set_entero(int e){
		entero=e;
	}


	bool mayor(naturales y){
		if (y.entero<entero)
			return true;
		else 
			return false;
	}

	int contar_digitos(){
		int i = entero;
		int contar = 0;
			while(i>0){
				i=i/10;
				contar=contar + 1;
			}
		return contar;
	}

	void leer(){
		cout<<"Ingrese el numero a unir"<<endl;
		cin>>entero;
	}
	
	void mostrar(){
		cout<<"La suma de enteros es: "<<entero<<endl;
	}

	naturales unir(naturales y){
		naturales c;
		int i = entero;
		int conta = y.contar_digitos();
			while(conta>0){
				i=i*10;
				conta=conta-1;
			}
		i = i+y.entero;
		c.entero = i;
		return c;
	}
};
