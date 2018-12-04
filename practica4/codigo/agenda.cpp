#include <iostream>
#include <cmath>
#include <cassert>
#include <string>
#include "persona.hpp"
#include "alumno.hpp"
#include "profesor.hpp"
#include "agenda.hpp"

using namespace std;

//Si es la interfaz la que se relaciona con el profesor 
//entonces no es necesaria esta funcion de abajo
//La dejo comentada por si podemos reclicar algo de ella
/*
void Agenda::insertar(){

	bool encontrado;
	string nombre, apellidos, dni, correo, nacimiento;
	int telefono, postal, curso, equipo;
	bool lider;

	//Solicitud de datos
	cout << "Nombre del alumno"<< endl;
	cin >> nombre;
	cout << "Apellidos del alumno"<< endl;
	cin >> apellidos;
	cout << "DNI del alumno"<< endl;
	cin >> dni;
	cout << "Telefono del alumno"<< endl;
	cin >> telefono;
	cout << "E-mail del alumno"<< endl;
	cin >> correo;
	cout << "Direccion postal del alumno"<< endl;
	cin >> postal;
	cout << "Curso mas alto matriculado del alumno"<< endl;
	cin >> curso;
	cout << "Fecha de nacimiento del alumno"<< endl;
	cin >> nacimiento;
	cout << "Equipo del alumno"<< endl;
	cin >> equipo;
	cout << "¿Es lider?"<< endl;
	cin >> lider;

	//Introducir valores en el orden correcto, creo que es:
	Alumno aux(curso, equipo, lider, dni, nacimiento, apellidos, nombre, correo, telefono, postal);

	//Busqueda alumno
	encontrado = BuscarAlumno(aux);

	if(encontrado){

		//Alumno Existe
		cout << "El alumno ya existe en la agenda" << endl;

	}else{

		//Alumno No Existe
		lista.push_back(aux);
		//Se ordena despues de insertar?
		//lista.sort(compare);	//Compare es una funcion auxiliar tipo bool que indica la ordenacion de elementos ( se debe de codificar )

	}

}*/


//Sobrecarga de la funcion insertar usada en la carga de datos desde un fichero.
void Agenda::insertar(Alumno aux){

	//Busqueda alumno
	encontrado = BuscarAlumno(aux);

	if(encontrado){

		//Alumno Existe
		cout << "El alumno ya existe en la agenda" << endl;

	}else{

		//Alumno No Existe
		lista.push_back(aux);
		//Se ordena despues de insertar?
		//lista.sort(compare);	//Compare es una funcion auxiliar tipo bool que indica la ordenacion de elementos ( se debe de codificar )

	}

}