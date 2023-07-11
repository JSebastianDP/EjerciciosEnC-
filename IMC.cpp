//Hola Mundo en C++


#include <iostream>
#include<math.h>
#include<iomanip>

using namespace std;

int main(){
	 
	float peso=0;
	float altura = 0;
	float resultado = 0;
	
	
	cout<<"Calculadora de Indice de Masa coportal (IMC) \n ";
	cout<<"Ingrese su peso en kilogramos";
	//Se ingresa el peso por consola
	cin>> peso;
	cout<< "Ahora ingrese su altura en metros: ";
	//Se ingresa la altura por consola
	cin>> altura;
	
	//Operacion que calcula el IMC
	resultado = peso / pow(altura,2);
	cout<<"Su IMC es: "<<setprecision(4)<<resultado<<" kg/m2^2";
	
	return 0;	
}
