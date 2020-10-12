#include<iostream>
using namespace std;
class Persona{
	protected : string nombres,apellidos;
					
	protected :
		Persona(string nom,string ape){
			nombres=nom;
			apellidos=ape;
				
		}
		
		void agregar();
		void mostrar();
};
