/*Una empresa necesita llevar el control de los datos personales de sus 10 empleados contratados, 
por la motivo la empresa lo ha contratado para la implementacion de este proyecto, los datos a almacenar son:
Codigo Empleado,
Nombre Empleado,
Puesto,
Departamento,
Salario.
Existen 3 departamentos, 1 Gerencia, 2 Administracion y 3 Produccion. 
El programa debera de desplegar la lista de empleados almacenados y el total de la planilla.
Nota: Se debe utilizar ciclos, punteros, arreglos y estructuras.*/

#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>

using namespace std;
//declaramos variables
int main(){
	int n;
	int codigo;
	char nombre;
	char puesto;
	int departamento;
	float salario;
	float sumatotal=0.00;
	
	int *datos = NULL;//Para que reserve en memoria
	int arreglo[10];//Creo un arreglo
	datos = arreglo;//Posición en memoria
	
	for(n=0;n<10;n++){
		cout<<"--Empleado # "<<n+1<<"--"<<endl<<endl;
		cout<<"Ingresar codigo del empleado: "<<endl;
		cin>>codigo;//Asigno el código a la variable codigo
		datos[n] = codigo;
		fflush(stdin);
		cout<<"\nIngrese nombre del empleado: "<<endl;
		cin>>nombre;
		datos[n] = nombre;
		fflush(stdin);
		cout<<"\nIngrese puesto del empleado: "<<endl;
		cin>>puesto;
		datos[n] = puesto;
		fflush(stdin);
		cout<<"\nIngrese el numero de departamento del empleado: "<<endl;
		cout<<"1 -- Gerencia"<<endl;
		cout<<"2 -- Administracion"<<endl;
		cout<<"3 -- Produccion"<<endl;
		cin>>departamento;
		datos[n] = departamento;
		fflush(stdin);
		cout<<"\nIngrese salario del empleado"<<endl;
		cin>>salario;
		datos[n] = salario;
		system("cls");
		sumatotal+=salario;
	}
	for(n=0;n<10;n++){//Recorrido del arreglo
		cout<<"Empleado # "<<n+1<<"\t : Q"<<*datos<<endl;//Mostramos lo que hay en memoria
	}
	cout<<"El total de planilla es de: "<<sumatotal<<endl;
	delete [] datos;
	
}
