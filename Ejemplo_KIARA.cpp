// Autor: Quirino González Johann David
#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <fstream>
#include <time.h>
#include <string>
using namespace std;
int main() {
	int i = 0;
	int sal = 1;
	int opcion;
	
	while (sal == 1){
		cout << "\nSeleccione una opcion" << endl;
		cout << "\n1. Calcular area de un rectangulo" << endl;
		cout << "\n2. Calcular area de un triangulo" << endl;
		cout << "\n3. Salir" << endl;
		cin >> opcion;
		system("cls");
		switch(opcion){
			case(1):
				cout << "\nEscogiste Calcular area de un rec" << endl;
				//AQUÍ DEBES PONER LA LOGICA DEL RECTANGULO
				for (i=1)
				cout << "\nIntroduce el lado1: ";
				cin >>l1;
				cout << "\nintroduce el lado2: ";
				cin >> l2;
				area = l1*l2;
				cout << "El area es " << area;
				break;
				
			case(2):
				cout << "\nEscogiste Calcular area de un triang" << endl;
				break;
				
			case(3):
				cout << "\n3. SEE YOU LATER MADAFUCKER" << endl;
				sal = 0;
				break;
			
			default:
				cout << "\nESCRIBE BIEN" << endl;
				break;
		}
	}
	
	
	return(0);
}
