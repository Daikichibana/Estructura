#pragma once
#include <string>
#include <iostream>
using namespace std;

class cadena{
private:
	string cad;
public:
//Metodos de entrada
	string getx(){
		return cad;
	}
	void setx(string y){
		cad = y;
	}
//Metodos de la funcion
	void leer(){
		cout<<"Ingrese la palabra: ";
		getline(cin, cad);
	}
	void mostrar(){
		cout<<"El resultado es: "<<cad<<endl;
	}
//Ejercicio 11
	cadena invertir(){
		cadena resp;
		string aux;
		int longitud = cad.length();
		while(longitud > 0){
			aux += cad[longitud-1];
			longitud--;
		}
		resp.setx(aux);
		return resp;
	}
//Ejercicio 12
	cadena palindromo(){
		cadena resp;
		int longitud = cad.length(), j=0, stop = longitud/2, count=0;
		while(stop > 0){
			if(cad[j] == cad[longitud-1]){
				count++;
			}
			j++;
			longitud--;
			stop--;
		}
		if(count == cad.length()/2) resp.setx("Es palindromo");
		else resp.setx("No es palindromo");
	
		return resp;
	}
//Ejercicio 13
	int minusculas(){
	int longitud = cad.length(), cont=0;
	while(longitud >0){
		if(cad[longitud-1] >= 97 && cad[longitud-1]<=122){
			cont++;
		}
		longitud--;
	}
	return cont;
	}
//Ejercicio 14
	int mayusculas(){
	int longitud = cad.length(), cont=0;
	while(longitud >0){
		if(cad[longitud-1] >= 65 && cad[longitud-1] <=90){
			cont++;
		}
		longitud--;
	}
	return cont;
	}
//Ejercicio 15
	int repetido(char caracter){
		cadena resp;
		int longitud = cad.length()-1, cont=0;
		while(longitud >= 0 ){
			if(cad[longitud] == caracter){
				cont++;
			}
			longitud--;
		}
		return cont;
	} 
//Ejercicio 16
	cadena transformacion(){
	cadena resp;
	string aux;
	int longitud = cad.length();
	while(longitud >0){
		if(cad[longitud-1]>= 65 && cad[longitud-1]<= 90){
			cad[longitud-1] += 32; 
		}
		longitud--;
	}
	resp.setx(cad);
	return resp;
	}
//Ejercicio 17


//Ejercicio 18


//Ejercicio 19
	int costos(){
	cadena c;
	string numero = "0123456789";
	int longitud = cad.length(), i=0, costo=0;
		while(longitud > 0){
			if(cad[i] == ' '){
				costo += 0;
			} else {
				if((cad[i]>64 && cad[i]<91) || (cad[i]>96 && cad[i]<123)){
					costo += 10;
				} else {
					if(numero.find(cad[i]) != -1){
						costo += 30;
					} else{
						costo += 20;
					}
				}
			}
			i++;
			longitud--;
		}
		return costo;
	}
};
