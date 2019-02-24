#include "stdafx.h"
#include <iostream>
#include "naturales.h"
using namespace std;

void main(){
naturales a,b,c;
bool mayor;

a.leer();
b.leer();
mayor = a.mayor(b);

	if(mayor == false)
		c= a.unir(b);
	else 
		c= b.unir(a);

c.mostrar();

system("pause");
}
