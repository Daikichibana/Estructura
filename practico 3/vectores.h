#pragma once
#include <iostream>
#include <string>
using namespace std;

const int n = 10;
class Vector
{
	int vector[n];
	int tamano;
public:
	//Metodos de acceso
	int get_vector(int p){
		return vector[p];
	}
	int set_vector(int p, int s){
		vector[p] = s;
	}
	//metodos vector
	int get_tamano(){
		return tamano;
	}
	void set_tamano(int t){
		tamano = t;
	}
	Vector(){
		tamano=0;
	}
	bool vacio(){
		if (tamano == 0){
			return true;
		}
		else{
			return false;
		}
	}
	bool lleno(){
		if (tamano == n){
			return true;
		}
		else{
			return false;
		}
	}
	bool insertar(int s){
	int j=0, p=-1;
		if (lleno()){
			return false;
		}

		while(tamano > j){
			if(s>vector[j-1] && s<vector[j+1]){
				p = j;
			} 
			if(s>vector[j]){
				p = j+1;
			} 
			j++;
		}

		if (p<0 || p>tamano){
			return false;
		}
		else{
			int i = tamano;
			while (i > p){	
				vector[i] = vector[i - 1];
				i--;
			}
			vector[p] = s;
			tamano++;
			return true;
		}
	}
	bool eliminar(int p) //Devuelve el valor al main
	{
		if (vacio()){
			return false;
		}

		if (p < 0 || p > tamano){ 
			return false; 
		}
		else{
			int i = p;
			while (i < tamano)
			{
				vector[i] = vector[i + 1];
				i++;
			}
			tamano--;
			return true;
		}
	}
	void leer(string letra){
		int tam;
		cout<<"El tamaño es:";
		cin>>tam;
		int i=0;
		while(i<tam){
			cout<<"vector "<<letra<<"["<<i<<"]:";
			cin>>vector[i];
			i++;
		}
		tamano=i;
	}
	void mostrar(string letra){
		int i=0;
		cout<<endl;
		while(i<tamano){
			cout<<"vector "<<letra<<":["<<i<<"]"<<vector[i]<<endl;
			i++;
		}
	}
	bool Borrar(){
		int i;
		if(vacio()==true){return false;}
		i=0;
		while(i<tamano){
			i++;
		}
		tamano =0;
		return true;
	}

	//metodos practico
	int frecuencia(int dig){
		int i = tamano, cont=0;
		while(i >= 0){
			if(vector[i] == dig){
				cont++;
			}
			i--;
		}
		return cont;
	}
	int busqueda(int digito){
		int i = tamano;
		while(i > 0){
			if(vector[i] == digito){
				return i;
				i=0;
			}
			i--;
		}
		return -1;
	}
	void recorrer(){
		int i = tamano;

		while (i > 0){	
				vector[i] = vector[i-1];
				i--;
		}
		tamano++;
		vector[0] = vector[tamano-1];
		i--;
		tamano--;
	}
	void recorrer2(){
		int i = tamano, aux = vector[0], j=0;

		while (i > 0){
				vector[j] = vector[j+1];
				i--;
				j++;
		}
		vector[tamano-1] = aux;
	}
};
