#include <iostream>
#include <string.h>
using namespace std;

int main(int argc, char *argv[]) {
	char enunciado[] = "Hola mundo de la Programacion ";
	char *tokenPtr;  //funcion de tokens 
	string cadena;   //cadena para modificar
	string letra;    //primera letra de la palabra
	cout<<"La cadena a dividir en tokens es: "<< enunciado
		<<"\nLos tokens son: \n\n";
	
	tokenPtr = strtok ( enunciado, " " ); //Primer llamado a la función
	
	while ( tokenPtr != NULL ) //ciclo para mostrar los tokens 
	{
	    cadena=tokenPtr;
		 letra=cadena.front();
		 cadena.front()=cadena.back(); 
		 cadena.back()=letra.at(0);
		cout<<cadena<<endl; 

		tokenPtr = strtok( NULL, " " );
	
	}
	
	/*
	
	tokenPtr = strtok( NULL, " " ); Significa que se debe empezar el siguiente token desde el fin del token anterior y se
	debe finalizar cuando aparezca un espacio en blanco.
	*/
	return 0;
}
