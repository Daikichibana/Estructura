#include "stdafx.h"
#include <iostream>
#include "Vector.h"
using namespace std;

void main(){
Vector a,b,c;
int opcion;
int pos;
string valor;
do {
	cout<<"1. llenar todo"<<endl;
	cout<<"2. Borrar todo"<<endl;
	cout<<"3. Insertar Uno"<<endl;
	cout<<"4. Eliminar Uno"<<endl;
	cout<<"5. Mostrar"<<endl;
	cout<<"0. Salir"<<endl;
	cin>>opcion;
	switch(opcion){
		case 1: {
			a.leer("A");		
			break;
		}
		case 2:{
			if(a.Borrar()!=true){cout<<" Vector vacio"<<endl;}
			break;
		}
		case 3:{
			cout<<" de la posicion: ";
			cin>>pos;
			cout<<"de el valor: ";
			cin>>valor;
			if(a.insertar(pos, valor) != true){cout<<" vector lleno o posicion mala"<<endl;}
			break;
		
		}
		case 4:{
			cout<<"de la posicion: ";
			cin>>pos;
			if(a.eliminar(pos, valor) != true){cout<<"vector vacio o posicion mala"<<endl;}
			else {cout<<"el dato es: "<<valor;}
			break;
		}
		case 5:{
			a.mostrar("A");
			break;
			default: break;
		}
	}
} while((opcion>0)&&(opcion<6));

system("pause");
}
