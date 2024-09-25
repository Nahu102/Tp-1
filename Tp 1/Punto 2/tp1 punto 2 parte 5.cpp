#include <iostream>
using namespace std;
int main () {
	//Desarrollar un programa que pida el ingreso del precio de un artículo y la cantidad que lleva el cliente. Mostrar lo que debe abonar el comprador.
	int precio;
	int articulo;
	int rts1;
	cout<<"ingrese el valor del precio del producto:";
	cin>>precio;
	cout<<"ingrese la cantidad del articulo:";
	cin>>articulo;
	rts1=precio*articulo;
	cout<<"el precio que debe abonar el comprador es "<<rts1<<"$";
	return 0;
}
