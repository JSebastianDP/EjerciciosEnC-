//Programa para repartir pizzas
//Indicar el nª de personas y el nª de pizzas encargadas 
//Retornar el nª trozos por persona y cuantos sobran
//Tener en cuenta que las pizzas se parten en 8 porciones



//libreria estandar de C++ para poder tener acceso a operaciones de entrada/salida
#include<iostream>

using namespace std;

int main(){
	
	int numero_personas,pizzas,numero_trozos,numero_trozos_persona, numero_trozos_sobrantes;
	
	cout<<"Bienvenido a la pizzeria, cuantas personas son?\n";
	cin>>numero_personas;
	cout<<"Cuantas pizzas van a llevar?\n";
	cin>>pizzas;
	
	numero_trozos = pizzas * 8;
	numero_trozos_persona = numero_trozos / numero_personas;
	numero_trozos_sobrantes = numero_trozos - numero_trozos_persona * numero_personas;
	
	//Sirven para parar el programa luego de las preguntas anteriores, y antes de mostrar los siguientes textos va a borrar la pantalla y mostrara las siguientes lineas
	//system("pause");
	//system("cls");
	
	cout<<"Entendido, tocaran de a "<<numero_trozos_persona<<" trozos por persona. \n";
	cout<<"Adicionalmente, sobrara(n) "<<numero_trozos_sobrantes<<" trozo(s)";
	
	
	return 0;	
}
