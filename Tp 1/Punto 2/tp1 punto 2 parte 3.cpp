#include <iostream>
using namespace std;
int main () {
	//Escribir un programa en el cual se ingresen cuatro números calcular e informar la suma de los dos primeros y el producto del tercero y el cuarto.
	int num1;
	int num2;
	int num3;
	int num4;
	int rest1;
	int rest2;
	cout<<"ingresar el primer valor para la suma:";
	cin>>num1;
	cout<<"ingresar el segundo valor para la suma:";
	cin>>num2;
	cout<<"ingresar el tercero valor para la multiplicacion:";
	cin>>num3;
	cout<<"ingresar el cuarto valor para la multiplicacion:";
	cin>>num4;
	rest1=num1+num2;
	rest2=num3*num4;
	cout<<"el valor de la suma es:"<<rest1;
	cout<<"  /  el valor de la multiplicacion es:"<<rest2;
	return 0;
}
