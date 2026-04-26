//Yo
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <fstream>    // Cabecera o biblioteca que permite trabajar con archivos
#include <time.h>     // Cabecera que permite contabilizar el tiempo de ejecucion
using namespace std;
int main (){


float b, h, area;
int n = 0;
int i = 0;
cout <<"Cuantos triangulos vas a calcular: ";
cin >> n;
n = n + 1;
for (i = 1; i < n; i++){
	
	cout<< "\nJohann David Quirino Gonzalez me odia :(" <<endl;
	cout <<"\nIntroduce la base del triangulo " << i << " : " ;
	cin >> b;
	cout <<"\nIntroduce la altura del triangulo " << i << " : ";
	cin>> h;
	area = (b*h)/2;
	cout << "\nEl triangulo " << i << " con base: "<<b <<" y altura: "<< h << " tiene un area igual a: " << area;

	if (area < 10){
		cout << "\n El triangulo es chico";
	} 
	else{
		if ((10 <= area) && (area < 20)){
			cout << "\n El triangulo es mediano.";
		}
		else{
			cout << " \nEl triangulo es grande.";
		}
	}
	
}


return (0);
}