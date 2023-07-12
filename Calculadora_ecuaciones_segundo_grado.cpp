//Calculadora de ecucaciones de segundo grado
//Introducir los valores de a,b y c de una ecuacion de segundo grado
//Devolver el resultado de la ecuacion

#include <iostream>
#include <math.h>
using namespace std;

int main(){
	float a,b,c,x1,x2,raiz,denominador;
	cout<<"Bienvenido a la calculadora de ecuaciones de segundo grado \n";
	cout<<"Introduzca su variable a: ";
	cin>>a;
	cout<<"Introduzca su variable b: ";
	cin>>b;
	cout<<"Introduzca su variable c: ";
	cin>>c;
	
	// sqrt devuelve la raiz cuadrada de un valor númerico,  y el pow se utiliza para las potencias.
	raiz=sqrt(pow(b,2)-4*a*c);
	denominador=2*a;
	x1=(-b+raiz)/denominador;
	x2=(-b-raiz)/denominador;
	
	cout<<"Calculando el resultado, por favor espere...  \n";
	
	//Funciones para pausar el programa y borrar los lineas anteriores
	system("pause");
	system("cls");
	
	cout<<"Los resultados son los siguientes: \n";
	cout<<"El valor de x1 es igual a "<<x1<<"\n";
	cout<<"El valor de x2 es igual a "<<x2<<"\n";
	
	cout<<"Fin \n";
	
	return 0;
	
	
}

