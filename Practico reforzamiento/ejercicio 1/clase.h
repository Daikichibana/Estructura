#pragma once
#include <iostream>
using namespace std;

class naturales{
private:
	int x;
public:
	int getx(){return x;}
	void setx(int y){x=y;}
	
	void leer(){
		cout<<"por favor ingrese el numero: ";
		cin>>x;
	}

	void mostrar(){
		cout<<"El resultado es: "<<x<<endl;
	}

	naturales depurar(){
		naturales resp;
		int i=x, d, r=0;
		while(i>0){
			d = i%10;
			if(serepite(d,x) == true){
				r = r*10 + d;
			}
			i/=10;
		}
		resp.setx(r);
		return resp;
	}

	bool serepite(int d, int num){
	int count=0;
		while(num > 0){
			if((num%10)==d){
				count++;
			}
			num /= 10;
		}
		if(count > 2){
			return true;
		} else {
			return false;
		}
	}
};

