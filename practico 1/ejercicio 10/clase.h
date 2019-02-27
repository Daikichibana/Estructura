#pragma once
#include <iostream>
using namespace std;
class naturales{
private:
	int x;
public:
	int getx(){
		return x;
	}
	void setx(int y){
		x=y;
	}

	int contardigitos(){
		int total= 0, num = x;
		while(num >0){
		num = num/10;
		total++;
		}
	return total;
	}

	int elevar(int exp){
	int base =x;
		while(exp>0){
			base *= base;
			exp--;
		}
		return base;
	}

	bool comparardigitos(int y){
	naturales a;
	a.setx(x);
	int tota=0, num = x, res=0, res2=0, num2=y, cont=0, digito = a.contardigitos();
		while(digito > 0){
			res = num%10;
			res2 = num2%10;
				if(res == res2){
					cont++;
				}
				if(cont >= 1){
					return true;
				}
			digito--;
		}
		return false;
	}

	void Automorfico(){
	naturales y;
	y.setx(x);
	int total = 0, i = 1, cont = 1;
	bool aux;
		while(cont == 1){
			int cua = y.elevar(i);
			if(cua < 1000){
				aux = y.comparardigitos(cua);
					if(aux == true)cout<<cua<<endl;
					else cout<<"nop";
			} else cont++;
			i++;
		}
	}
};

