#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <fstream>    // Cabecera o biblioteca que permite trabajar con archivos
#include <time.h>     // Cabecera que permite contabilizar el tiempo de ejecucion
using namespace std;
int main (){
	//variables
	
	float l1, l2, b, h, a;
	int n = 0;
	int i = 0;
	int op;
	
	do{
		cout<< "\nJohann David Quirino Gonzalez me qre cgr :(" <<endl;
		cout<< "\n1. calcular area de triangulo." <<endl; //me cg mucho
		cout<< "\n2. calcular area de rectangulo." <<endl;  // no me deja de manosear
		cout<< "\nSelecciona una opcion: ";
		cin >> op;				// no me quiere dejar de cgr
		switch (op){
			case(1):	
				for(i = 1; i < n; i++){
					cout <<"introduce la base del triangulo "<<i << " : (David Quirino m gusta mucho) ";
					cin >> b;
					cout << "introduce la altura del triangulo "<<i << " : ";
					cin >> h;
					a = (b*h)/2;
					cout << "\nEl triangulo " << i << " con base: "<<b <<" y altura: "<< h << " tiene un area igual a: " << a;
					break;
				}
			case (2):
				for(i = 1; i < n; i++){
					cout <<"introduce el lado 1  del rectangulo "<<i << " : ";
					cin >> l1;
					cout << "introduce la altura del rectangulo "<<i << " : ";
					cin >> h;
					a = (b*h)/2;
					cout << "\nEl triangulo " << i << " con base: "<<b <<" y altura: "<< h << " tiene un area igual a: " << a;
				}
			}
	}
	
	
		
return (0);
}