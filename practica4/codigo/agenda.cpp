#include <iostream>
#include <cmath>
#include <cassert>
#include <string>
#include <list>
#include <fstream>
#include <cstring>
#include "persona.hpp"
#include "alumno.hpp"
#include "profesor.hpp"
#include "agenda.hpp"


using namespace std;

bool ascendenteAlfabeticamente(Alumno alumno1, Alumno alumno2){

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

	while( (i < alumno1.getDni().length()) && (i < alumno2.getDni().length()) ){

		if( tolower(alumno1.getDni()[i])<tolower(alumno2.getDni()[i])){

			return true;

		}else if( tolower(alumno1.getDni()[i])>tolower(alumno2.getDni()[i]) ){

			return false;

		}
		i++;
	}
	return ( alumno1.getDni().length() < alumno2.getDni().length() );

}


bool descendenteDNI(Alumno alumno1, Alumno alumno2){

	unsigned int i=0;

	while( (i < alumno1.getDni().length()) && (i < alumno2.getDni().length()) ){

		if( tolower(alumno1.getDni()[i])>tolower(alumno2.getDni()[i])){

			return true;

		}else if( tolower(alumno1.getDni()[i])<tolower(alumno2.getDni()[i]) ){

			return false;

		}
		i++;
	}
	return ( alumno1.getDni().length() < alumno2.getDni().length() );

}




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
bool Agenda::insertar(Alumno aux){


	if(esAlumno(aux)){

		//Alumno Existe
		//cout << "El alumno ya existe en la agenda" << endl;
		return false;

	}else{

		//Alumno No Existe
		_listaAlumnos.push_back(aux);
		//Se ordena despues de insertar?
		//ordenar(criterio, descendente?)	//Compare es una funcion auxiliar tipo bool que indica la ordenacion de elementos ( se debe de codificar )
		return true;

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

			_listaAlumnos.sort(ascendenteAlfabeticamente);

		}else if(criterioOrdenacion == 1){

			_listaAlumnos.sort(ascendenteCurso);

		}else if(criterioOrdenacion == 2){

			_listaAlumnos.sort(ascendenteDNI);

		}
		


	}else{
		//De manera Descendente

		if(criterioOrdenacion == 0){

			_listaAlumnos.sort(descendenteAlfabeticamente);

		}else if(criterioOrdenacion == 1){

			_listaAlumnos.sort(descendenteCurso);

		}else if(criterioOrdenacion == 2){

			_listaAlumnos.sort(descendenteDNI);
			
		}

	}

}


bool Agenda::esAlumno(Alumno aux){

	list<Alumno>::iterator it;
	for(it = _listaAlumnos.begin(); it != _listaAlumnos.end(); it++){

		if (it->getDni() == aux.getDni())
		{
			return true;
		}

	}

	return false;

}

Alumno Agenda::buscarAlumno(string dni){

	Alumno vacio(0, 0, false, "0", "", "", "", "", 0, 0);
	for (list<Alumno>::iterator it=_listaAlumnos.begin(); it != _listaAlumnos.end(); ++it)
	{
		if (it->getDni() == dni)
		{
			return *it;
		}
	}
	return vacio;

}

//Pues hay un problema, no se si mostrar alumno se le tiene que pasar un alumno o un dni asi que hago ambas y se borra la que no sea

bool Agenda::mostrarAlumno(Alumno aux){

	ofstream fs;
	Alumno alumnoMostrado(0, 0, false, "0", "", "", "", "", 0, 0);

	if(esAlumno(aux)){

		alumnoMostrado = buscarAlumno(aux.getDni());

		string NombreAux = alumnoMostrado.getNombre() + ".md"; 
		char NombreFichero[100];
		strcpy(NombreFichero,NombreAux.c_str());
		fs.open (NombreFichero, std::ofstream::out | std::ofstream::app);

		if(fs.is_open()){

			fs << "---" << endl;
			fs << " Nombre: " << alumnoMostrado.getNombre() << endl;
			fs << " Apellidos: " << alumnoMostrado.getApellidos() << endl;
			fs << " DNI: " << alumnoMostrado.getDni() << endl;
			fs << " Telefono: " << alumnoMostrado.getTelefono() << endl;
			fs << " Correo: " << alumnoMostrado.getCorreo() << endl;
			fs << " Postal: " << alumnoMostrado.getPostal() << endl;
			fs << " Nacimiento: " << alumnoMostrado.getNacimiento() << endl;
			fs << " Curso: " << alumnoMostrado.getCurso() << endl;
			fs << " Equipo: " << alumnoMostrado.getEquipo() << endl;
			fs << " **Lider: " << alumnoMostrado.getLider() <<"**" << endl;
			fs << "---" << endl;

			fs.close();

		}else{ 

			return false;
		}

	}else{

		return false;

	}
}


bool Agenda::mostrarAlumno(string dni){

	ofstream fs;
	Alumno alumnoMostrado(0, 0, false, dni, "", "", "", "", 0, 0);

	if(esAlumno(alumnoMostrado)){

		alumnoMostrado = buscarAlumno(dni);

		string NombreAux = alumnoMostrado.getNombre() + ".md"; 
		char NombreFichero[100];
		strcpy(NombreFichero,NombreAux.c_str());
		fs.open (NombreFichero, std::ofstream::out | std::ofstream::app);

		if(fs.is_open()){

			fs << "---" << endl;
			fs << " Nombre: " << alumnoMostrado.getNombre() << endl;
			fs << " Apellidos: " << alumnoMostrado.getApellidos() << endl;
			fs << " DNI: " << alumnoMostrado.getDni() << endl;
			fs << " Telefono: " << alumnoMostrado.getTelefono() << endl;
			fs << " Correo: " << alumnoMostrado.getCorreo() << endl;
			fs << " Postal: " << alumnoMostrado.getPostal() << endl;
			fs << " Nacimiento: " << alumnoMostrado.getNacimiento() << endl;
			fs << " Curso: " << alumnoMostrado.getCurso() << endl;
			fs << " Equipo: " << alumnoMostrado.getEquipo() << endl;
			fs << " **Lider: " << alumnoMostrado.getLider() <<"**" << endl;
			fs << "---" << endl;

			fs.close();

		}else{ 

			return false;
		}


	}else{

		return false;

	}


}