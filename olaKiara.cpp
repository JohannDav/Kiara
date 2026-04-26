//Yo
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <fstream>    // Cabecera o biblioteca que permite trabajar con archivos
#include <time.h>     // Cabecera que permite contabilizar el tiempo de ejecucion
using namespace std;
int main (){
int i=0;
int sum = 0;
for (i = 0; i <= 100; i++){
	cout <<endl<< i;
	sum = sum + i;
	cout <<endl<<sum;
	if (i == 100){ 
		cout << sum;
	}
}
	




return (0);
}