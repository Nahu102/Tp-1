#include <iostream>
using namespace std;
int main () {
	//Realizar un programa que lea cuatro valores numéricos e informar su suma y promedio.
	int num1;
	int num2;
	int num3;
	int num4;
	int suma;
	int promediacion;
	cout<<"ingrese el primer valor:";
	cin>>num1;
	cout<<"ingrese el segundo valor:";
	cin>>num2;
	cout<<"ingrese el tercer valor:";
	cin>>num3;
	cout<<"ingrese el cuarto valor:";
	cin>>num4;
	suma=num1+num2+num3+num4;
	promediacion=suma/4;
	cout<<"el valor de la promediacion es "<<promediacion<<" y el total de la suma es "<<suma;
	return 0;
}
