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
		//ordenar(criterio, descendente?)	//Compare es una funcion auxiliar tipo bool que indica la ordenacion de elementos ( se debe de codificar )

	}

}

void Agenda::ordenar(int criterioOrdenacion, bool descendente){

	//alfabeticamente, ascendente, descendente, curso mas alto, dni

	/* Se puede ordenar segun los siguientes criterios:
			0 == alfabeticamente
			1 == curso mas alto matriculado
			2 == DNI
		El bool descendente indica si se hace la ordenacion de manera descendente o no
	*/

	if(descendente == false){
		//De manera Ascendente

		if(criterioOrdenacion == 0){

			lista.sort(ascendenteAlfabeticamente);

		}else if(criterioOrdenacion == 1){

			lista.sort(ascendenteCurso);

		}else if(criterioOrdenacion == 2){

			lista.sort(ascendenteDNI);

		}
		


	}else{
		//De manera Descendente

		if(criterioOrdenacion == 0){

			lista.sort(descendenteAlfabeticamente);

		}else if(criterioOrdenacion == 1){

			lista.sort(descendenteCurso);

		}else if(criterioOrdenacion == 2){

			lista.sort(descendenteDNI);
			
		}

	}

}

bool ascendenteAlfabeticamente(Alumno::Alumno alumno1, Alumno alumno2){

	unsigned int i=0;

	while( (i < alumno1.getNombre().length()) && (i < alumno2.getNombre().length()) ){

		if( tolower(alumno1.getNombre()[i])<tolower(alumno2.getNombre()[i])){

			return true;

		}else if( tolower(alumno1.getNombre()[i])>tolower(alumno2.getNombre()[i]) ){

			return false;

		}
		i++;
	}
	return ( alumno1.getNombre().length() < alumno2.getNombre().length() );

}


bool descendenteAlfabeticamente(Alumno alumno1, Alumno alumno2){

	unsigned int i=0;

	while( (i < alumno1.getNombre().length()) && (i < alumno2.getNombre().length()) ){

		if( tolower(alumno1.getNombre()[i])>tolower(alumno2.getNombre()[i])){

			return true;

		}else if( tolower(alumno1.getNombre()[i])<tolower(alumno2.getNombre()[i]) ){

			return false;

		}
		i++;
	}
	return ( alumno1.getNombre().length() < alumno2.getNombre().length() );

}


bool ascendenteCurso(Alumno alumno1, Alumno alumno2){

	return ( alumno1.getCurso() < alumno2.getCurso() );

}

bool descendenteCurso(Alumno alumno1, Alumno alumno2){

	return ( alumno1.getCurso() > alumno2.getCurso() );

}

bool ascendenteDNI(Alumno alumno1, Alumno alumno2){

	unsigned int i=0;

	while( (i < alumno1.getDNI().length()) && (i < alumno2.getDNI().length()) ){

		if( tolower(alumno1.getDNI()[i])<tolower(alumno2.getDNI()[i])){

			return true;

		}else if( tolower(alumno1.getDNI()[i])>tolower(alumno2.getDNI()[i]) ){

			return false;

		}
		i++;
	}
	return ( alumno1.getDNI().length() < alumno2.getDNI().length() );

}


bool descendenteDNI(Alumno alumno1, Alumno alumno2){

	unsigned int i=0;

	while( (i < alumno1.getDNI().length()) && (i < alumno2.getDNI().length()) ){

		if( tolower(alumno1.getDNI()[i])>tolower(alumno2.getDNI()[i])){

			return true;

		}else if( tolower(alumno1.getDNI()[i])<tolower(alumno2.getDNI()[i]) ){

			return false;

		}
		i++;
	}
	return ( alumno1.getDNI().length() < alumno2.getDNI().length() );

}