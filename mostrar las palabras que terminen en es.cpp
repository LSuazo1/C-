#include <iostream>
#include <string.h>
using namespace std;

int main(int argc, char *argv[]) {
	char enunciado[] = "Los peces y las aves no se llevan mal ";
	char *tokenPtr;  //funcion de tokens 
	string cadena;   //cadena para modificar
	cout<<"La cadena a dividir en tokens es: "<< enunciado
		<<"\nLos tokens son: \n\n";
	
	tokenPtr = strtok ( enunciado, " " ); //Primer llamado a la función
	
	while ( tokenPtr != NULL ) //ciclo para mostrar los tokens 
	{
		cadena=tokenPtr;
		for (int i=0;i<cadena.length();i++){      //hace un ciclo para recorrer toda la palabra
		  if((cadena[i]=='e') && (cadena[i+1]=='s')){ //si la letra en la posicion i es e y la palabra en al posicion siguien es s 
			  cout<<cadena<<","; //entonces la vamos imprimir
		  }
		}
	
		
		tokenPtr = strtok( NULL, " " );
		
	}
