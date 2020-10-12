#include"Estudiante.cpp"
#include<iostream>
using namespace std;
main(){
	string carne,carrera,seccion,nombres,apellidos,res;
	
	cout<<"Ingrese Carne No ";
	cin>>carne;
	cout<<"Ingrese el Nombre: ";
	cin>>nombres;
	cout<<"Ingrese la Apellido:";
	cin>>apellidos;
	cout<<"Ingrese la Carrera: ";
	cin>>carrera;
	cout<<"Ingrese la Seccion: ";
	cin>>seccion;

	system ("cls");
	cout<<"____________________________________________"<<endl;
	cout<<endl;
	Estudiante obj = Estudiante(nombres,apellidos,carne,carrera,seccion);
	cout<<"Carne No.:";cout<<obj.getCarne()<<endl;
	cout<<"Nombre:";cout<<obj.getNombres()<<endl;
	cout<<"Apellido:";cout<<obj.getApellidos()<<endl;
	cout<<"Carrera:";cout<<obj.getCarrera()<<endl;
	cout<<"Seccion:";cout<<obj.getSeccion()<<endl;
	
	cout<<"____________________________________________"<<endl;
	
	cout<<"Desea modificar el registro? s/n "<<endl;
	cin>>res;
	if (res=="s"){
		system ("cls");
		
	cout<<"_________________Modificar__________________"<<endl;
	cout<<"Ingrese Carne : ";
	cin>>carne;
	cout<<"Ingrese el Nombre: ";
	cin>>nombres;
	cout<<"Ingrese el Apellido:";
	cin>>apellidos;
	cout<<"Ingrese la Carrera: ";
	cin>>carrera;
	cout<<"Ingrese la seccion: ";
	cin>>seccion;
	system ("cls");
	
	cout<<"____________________________________________"<<endl;
	obj.setCarne(carne);
	obj.setNombres(nombres);
	obj.setApellidos(apellidos);
	obj.setCarrera(carrera);
	obj.setSeccion(seccion);
	
	//obj.mostrar();
	cout<<"Carne No.:";cout<<obj.getCarne()<<endl;
	cout<<"Nombre:";cout<<obj.getNombres()<<endl;
	cout<<"Apellido:";cout<<obj.getApellidos()<<endl;
	cout<<"Carrera:";cout<<obj.getCarrera()<<endl;
	cout<<"Seccion:";cout<<obj.getSeccion()<<endl;
	
	cout<<"____________________________________________"<<endl;
	}
	

	
	
}
