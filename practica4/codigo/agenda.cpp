#include <iostream>
#include <cmath>
#include <cassert>
#include <string>
#include <stdlib.h>
#include <sys/stat.h>
#include <list>

#include <ctime>
#include <fstream>

#include <fstream>
#include <cstring>

#include "persona.hpp"
#include "alumno.hpp"
#include "profesor.hpp"
#include "agenda.hpp"

struct AlumnoAuxiliar{


	int Curso;
	int Equipo;
	bool Lider;
	char Dni[100];
	char Nacimiento[100];
	char Apellidos[100];
	char Nombre[100];
	char Correo[100];
	int Telefono;
	int Postal;

};


using namespace std;


///////////////////// METODOS DE ORDENACION /////////////////////////////////////////////////

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

///////////////////////////////////////////////////////////////////////////////////////////////


bool Agenda::insertar(Alumno aux){


	if(esAlumno(aux)){

		return false;

	}else{

		_listaAlumnos.push_back(aux);
		
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

//Funcion que devuelve bool para saber si un alumno esta en la agenda o no
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

//Funcion que devuelve un alumno pasandole el DNI, si no, devuelve un alumno "vacio"
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

//Exporta a un fichero txt
bool Agenda::exportar(){
	ofstream f("agenda.txt");
	string lider = "no";

	for (list<Alumno>::iterator it=_listaAlumnos.begin(); it != _listaAlumnos.end(); ++it)
	{
		if (it->getLider()){
			lider = "si";
		}
		
		f << it->getCurso() << "-" << it->getEquipo() << "-" << lider.c_str() << "-" << it->getDni().c_str() << "-" << it->getNacimiento().c_str() << "-" << it->getApellidos().c_str() << "-" << it->getNombre().c_str() << "-" << it->getCorreo().c_str() << "-" << it->getTelefono() << "-" << it->getPostal() << endl;
		lider = "no";
		
	}

	f.close();
	return true;
}

//importa de un fichero txt
bool Agenda::importar(){
	ifstream f("agenda.txt");
	bool lider = false;
	string cadena;
	Alumno aux(0, 0, false, "0", "", "", "", "", 0, 0);

	while(!f.eof()){

		getline(f,cadena,'-');
		aux.setCurso(atoi(cadena.c_str()));

		getline(f,cadena,'-');
		aux.setEquipo(atoi(cadena.c_str()));

		getline(f,cadena,'-');
		if (cadena=="si")
		{
			lider=true;
		}
		aux.setLider(lider);
		lider=false;

		getline(f,cadena,'-');
		aux.setDni(cadena);

		getline(f,cadena,'-');
		aux.setNacimiento(cadena);

		getline(f,cadena,'-');
		aux.setApellidos(cadena);

		getline(f,cadena,'-');
		aux.setNombre(cadena);

		getline(f,cadena,'-');
		aux.setCorreo(cadena);

		getline(f,cadena,'-');
		aux.setTelefono(atoi(cadena.c_str()));

		getline(f,cadena);
		aux.setPostal(atoi(cadena.c_str()));

		insertar(aux);

	}

	_listaAlumnos.pop_back();

	f.close();
	return true;
}


//Funcion que solo la puede usar un profesor colaborador, permite exportar la agenda a un fichero binario
bool Agenda::exportarBackup(bool permiso, string name){

	if (permiso==false)
	{
		return false;
	}

	fstream fb(name.c_str(),  ios::app | ios::out | ios::in |ios::binary);
	fb.seekp (0);
	AlumnoAuxiliar Aux;
	
	for (list<Alumno>::iterator it=_listaAlumnos.begin(); it != _listaAlumnos.end(); ++it)
	{

		Aux.Curso = it->getCurso();
		Aux.Equipo = it->getEquipo();
		Aux.Lider = it->getLider();
		Aux.Telefono = it->getTelefono();
		Aux.Postal = it->getPostal();
		strcpy(Aux.Nombre,it->getNombre().c_str());
		strcpy(Aux.Apellidos,it->getApellidos().c_str());
		strcpy(Aux.Nacimiento,it->getNacimiento().c_str());
		strcpy(Aux.Dni,it->getDni().c_str());
		strcpy(Aux.Correo,it->getCorreo().c_str());
		
		fb.write((char*)&(Aux), sizeof (Aux));
		
	}

	fb.close();
	return true;

}


//Funcion que solo la puede usar un profesor colaborador, permite importar de un fichero binar
bool Agenda::inportarBackup(bool permiso, string name){

	if (permiso==false)
	{
		return false;
	}

	Alumno auxAlumno;
	fstream fb(name.c_str(), ios::app | ios::in | ios::out | ios::binary);
	fb.seekp (0);
	AlumnoAuxiliar Aux;


	fb.read((char*)&Aux, sizeof (Aux));

    while(!fb.eof()){

    	auxAlumno.setCurso(Aux.Curso);
		auxAlumno.setEquipo(Aux.Equipo);
		auxAlumno.setLider(Aux.Lider);
		auxAlumno.setTelefono(Aux.Telefono);
		auxAlumno.setPostal(Aux.Postal);
		auxAlumno.setNombre(Aux.Nombre);
		auxAlumno.setApellidos(Aux.Apellidos);
		auxAlumno.setNacimiento(Aux.Nacimiento);
		auxAlumno.setDni(Aux.Dni);
		auxAlumno.setCorreo(Aux.Correo);



    	insertar(auxAlumno);
    	fb.read((char*)&Aux, sizeof (Aux));
		
	}


	fb.close();
	return true;
}

//Funcion que muestra toda la lista en formato markdown o HTML
void Agenda::mostrarTodo(){


	ofstream fs;
	int opcion =2;
	int criterio=4;
	string auxOpcion;
	bool opcionDescente;

	do{
		cout << "¿Según que parámetros desea que se muetre la lista?" << endl;
		cout << " 0 -- Alfabeticamente" << endl << " 1 -- Segun Curso matriculado" << endl << " 2 -- segun DNI" << endl;
		cin>>criterio;
	}while( criterio < 0 || criterio > 3);

	do{
		cout << "¿Desea mostrar la agenda de forma ascendente? (Y/N)" << endl;
		cin >> auxOpcion;
	}while( auxOpcion != "Y" && auxOpcion != "N" );

	if(auxOpcion == "Y"){
		opcionDescente = false;
		ordenar(criterio,opcionDescente);
	}else if(auxOpcion == "N"){
		opcionDescente = true;
		ordenar(criterio,opcionDescente);
	}


	do{

		cout << "En que formato desea el fichero: markdown (0) o HTML (1)" << endl;
		cin >>opcion;

	}while ((opcion != 0) && (opcion != 1));

	if(opcion == 0){
		fs.open("todosAlumnos.md",std::ofstream::out);

		for (list<Alumno>::iterator it=_listaAlumnos.begin(); it != _listaAlumnos.end(); ++it)
		{

			fs << "---" << endl;
			fs << " Nombre: " << it->getNombre() << endl;
			fs << " Apellidos: " << it->getApellidos() << endl;
			fs << " DNI: " << it->getDni() << endl;
			fs << " Telefono: " << it->getTelefono() << endl;
			fs << " Correo: " << it->getCorreo() << endl;
			fs << " Postal: " << it->getPostal() << endl;
			fs << " Nacimiento: " << it->getNacimiento() << endl;
			fs << " Curso: " << it->getCurso() << endl;
			fs << " Equipo: " << it->getEquipo() << endl;
			fs << " **Lider: " << it->getLider() <<"**" << endl;

		}
		fs << "---" << endl;
	}else if(opcion == 1){

		fs.open("todosAlumnos.html",std::ofstream::out );

		fs << "<!DOCTYPE html>" << endl;
		fs << "<html>" << endl;
		fs << "<body>" << endl;
		fs << "<h2> Tabla Con todos los alumnos de la agenda </h2>" << endl;
		fs << "<table style=\"width:100%\">" << endl;
		fs << "\t<tr>" << endl;
		fs << "\t\t<th>Nombre</th>" << endl;
		fs << "\t\t<th>Apellidos</th>" << endl;
		fs << "\t\t<th>DNI</th>" << endl;
		fs << "\t\t<th>Telefono</th>" << endl;
		fs << "\t\t<th>Correo</th>" << endl;
		fs << "\t\t<th>Postal</th>" << endl;
		fs << "\t\t<th>Nacimiento</th>" << endl;
		fs << "\t\t<th>Curso</th>" << endl;
		fs << "\t\t<th>Equipo</th>" << endl;
		fs << "\t\t<th>Lider</th>" << endl;
		fs << "\t</tr>" << endl;

		for (list<Alumno>::iterator it=_listaAlumnos.begin(); it != _listaAlumnos.end(); ++it)
		{
			fs << "\t<tr>" << endl;
			fs << "\t\t<td>" << it->getNombre() << "</td>" << endl;
			fs << "\t\t<td>" << it->getApellidos() << "</td>" << endl;
			fs << "\t\t<td>" << it->getDni() << "</td>" << endl;
			fs << "\t\t<td>" << it->getTelefono() << "</td>" << endl;
			fs << "\t\t<td>" << it->getCorreo() << "</td>" << endl;
			fs << "\t\t<td>" << it->getPostal() << "</td>" << endl;
			fs << "\t\t<td>" << it->getNacimiento() << "</td>" << endl;
			fs << "\t\t<td>" << it->getCurso() << "</td>" << endl;
			fs << "\t\t<td>" << it->getEquipo() << "</td>" << endl;
			fs << "\t\t<td>" << it->getLider() << "</td>" << endl;
			fs << "\t</tr>" << endl;


		}


		fs << "</table>" << endl;
		fs << "</body>" << endl;
		fs << "</html>" << endl;

	}
}

//Funcion que permite mostrar todos los alumnos de un mismo equipo 
bool Agenda::mostrarEquipo(int equipo){

	ofstream fs;
	int opcion =2;

	do{

		cout << "En que formato desea el fichero: markdown (0) o HTML (1)" << endl;
		cin >>opcion;

	}while ((opcion != 0) && (opcion != 1));

	if(opcion == 0){
		fs.open("mostrarEquipo.md",std::ofstream::out | std::ofstream::app);

		for (list<Alumno>::iterator it=_listaAlumnos.begin(); it != _listaAlumnos.end(); ++it)
		{

			if(it->getEquipo() == equipo){
				fs << "---" << endl;
				fs << " Nombre: " << it->getNombre() << endl;
				fs << " Apellidos: " << it->getApellidos() << endl;
				fs << " DNI: " << it->getDni() << endl;
				fs << " Telefono: " << it->getTelefono() << endl;
				fs << " Correo: " << it->getCorreo() << endl;
				fs << " Postal: " << it->getPostal() << endl;
				fs << " Nacimiento: " << it->getNacimiento() << endl;
				fs << " Curso: " << it->getCurso() << endl;
				fs << " Equipo: " << it->getEquipo() << endl;
				fs << " **Lider: " << it->getLider() <<"**" << endl;
			}

		}
		fs << "---" << endl;
	}else if(opcion == 1){

		fs.open("todosAlumnos.html",std::ofstream::out | std::ofstream::app);

		fs << "<!DOCTYPE html>" << endl;
		fs << "<html>" << endl;
		fs << "<body>" << endl;
		fs << "<h2> Tabla Con todos los alumnos de la agenda </h2>" << endl;
		fs << "<table style=\"width:100%\">" << endl;
		fs << "\t<tr>" << endl;
		fs << "\t\t<th>Nombre</th>" << endl;
		fs << "\t\t<th>Apellidos</th>" << endl;
		fs << "\t\t<th>DNI</th>" << endl;
		fs << "\t\t<th>Telefono</th>" << endl;
		fs << "\t\t<th>Correo</th>" << endl;
		fs << "\t\t<th>Postal</th>" << endl;
		fs << "\t\t<th>Nacimiento</th>" << endl;
		fs << "\t\t<th>Curso</th>" << endl;
		fs << "\t\t<th>Equipo</th>" << endl;
		fs << "\t\t<th>Lider</th>" << endl;
		fs << "\t</tr>" << endl;

		for (list<Alumno>::iterator it=_listaAlumnos.begin(); it != _listaAlumnos.end(); ++it)
		{

			if(it->getEquipo() == equipo){
				fs << "\t<tr>" << endl;
				fs << "\t\t<td>" << it->getNombre() << "</td>" << endl;
				fs << "\t\t<td>" << it->getApellidos() << "</td>" << endl;
				fs << "\t\t<td>" << it->getDni() << "</td>" << endl;
				fs << "\t\t<td>" << it->getTelefono() << "</td>" << endl;
				fs << "\t\t<td>" << it->getCorreo() << "</td>" << endl;
				fs << "\t\t<td>" << it->getPostal() << "</td>" << endl;
				fs << "\t\t<td>" << it->getNacimiento() << "</td>" << endl;
				fs << "\t\t<td>" << it->getCurso() << "</td>" << endl;
				fs << "\t\t<td>" << it->getEquipo() << "</td>" << endl;
				fs << "\t</tr>" << endl;
			}

		}
			fs << "</table>" << endl;
			fs << "</body>" << endl;
			fs << "</html>" << endl;
	}
}


bool Agenda::mostrarAlumno(string dni){

	ofstream fs;
	Alumno alumnoMostrado(0, 0, false, dni, "", "", "", "", 0, 0);

	if(esAlumno(alumnoMostrado)){

		alumnoMostrado = buscarAlumno(dni);

		int opcion;

		do{

			cout << "En que formato desea el fichero: markdown (0) o HTML (1)" << endl;
			cin >>opcion;

		}while ((opcion != 0) && (opcion != 1));

		if(opcion == 0){
			string NombreAux = alumnoMostrado.getNombre() + ".md"; 
			fs.open(NombreAux.c_str(),std::ofstream::out);



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
		

		}else if(opcion == 1){
			string NombreAux = alumnoMostrado.getNombre() + ".html"; 
			fs.open(NombreAux.c_str(),std::ofstream::out);

			fs << "<!DOCTYPE html>" << endl;
			fs << "<html>" << endl;
			fs << "<body>" << endl;
			fs << "<h2> Tabla Con todos los alumnos de la agenda </h2>" << endl;
			fs << "<table style=\"width:100%\">" << endl;
			fs << "\t<tr>" << endl;
			fs << "\t\t<th>Nombre</th>" << endl;
			fs << "\t\t<th>Apellidos</th>" << endl;
			fs << "\t\t<th>DNI</th>" << endl;
			fs << "\t\t<th>Telefono</th>" << endl;
			fs << "\t\t<th>Correo</th>" << endl;
			fs << "\t\t<th>Postal</th>" << endl;
			fs << "\t\t<th>Nacimiento</th>" << endl;
			fs << "\t\t<th>Curso</th>" << endl;
			fs << "\t\t<th>Equipo</th>" << endl;
			fs << "\t\t<th>Lider</th>" << endl;
			fs << "\t</tr>" << endl;

			fs << "\t<tr>" << endl;
			fs << "\t\t<td>" << alumnoMostrado.getNombre() << "</td>" << endl;
			fs << "\t\t<td>" << alumnoMostrado.getApellidos() << "</td>" << endl;
			fs << "\t\t<td>" << alumnoMostrado.getDni() << "</td>" << endl;
			fs << "\t\t<td>" << alumnoMostrado.getTelefono() << "</td>" << endl;
			fs << "\t\t<td>" << alumnoMostrado.getCorreo() << "</td>" << endl;
			fs << "\t\t<td>" << alumnoMostrado.getPostal() << "</td>" << endl;
			fs << "\t\t<td>" << alumnoMostrado.getNacimiento() << "</td>" << endl;
			fs << "\t\t<td>" << alumnoMostrado.getCurso() << "</td>" << endl;
			fs << "\t\t<td>" << alumnoMostrado.getEquipo() << "</td>" << endl;
			fs << "\t\t<td>" << alumnoMostrado.getLider() << "</td>" << endl;
			fs << "\t</tr>" << endl;


			fs << "</table>" << endl;
			fs << "</body>" << endl;
			fs << "</html>" << endl;

		}
	}
}

//Funcion que permite modificar un alumno
bool Agenda::modificar(string dni){

	Alumno modificar;

	string nombre, apellidos, correo, nacimiento, lid;
	int telefono, postal, curso, equipo;
	bool lider;

	modificar.setDni(dni);

	if(esAlumno(modificar)){


		for (list<Alumno>::iterator it=_listaAlumnos.begin(); it != _listaAlumnos.end(); ++it)
		{

			if(it->getDni() == modificar.getDni()){


				cout << "Nombre del alumno: "<< endl;
				getline(cin, nombre);
				cout << "Apellidos del alumno:"<< endl;
				getline(cin, apellidos);
				cout << "DNI del alumno:"<< endl;
				cin >> dni;
				cout << "Telefono del alumno:"<< endl;
				cin >> telefono;
				cout << "E-mail del alumno:"<< endl;
				cin >> correo;
				cout << "Codigo postal del alumno:"<< endl;
				cin >> postal;
				cout << "Curso mas alto matriculado del alumno:"<< endl;
				cin >> curso;
				cout << "Fecha de nacimiento del alumno:"<< endl;
				cin >> nacimiento;
				cout << "Equipo del alumno:"<< endl;
				cin >> equipo;
				cout << "¿Es lider? (Y/N)"<< endl;
				cin >> lid;
				if (lid=="Y")
				{
					lider=true;
				}
									
				it->setCurso(curso);	
				it->setEquipo(equipo);
				it->setLider(lider);
				it->setDni(dni);
				it->setNacimiento(nacimiento);
				it->setApellidos(apellidos);
				it->setNombre(nombre);
				it->setCorreo(correo);
				it->setTelefono(telefono);
				it->setPostal(postal);

					//cambiar la opcion de buscar para que devuelva puntero y sea mas capsulable
			}
		}


	}else{

		return false;
	}

}

//funcion que permite borrar un alumno
bool Agenda::borrarAlumno(string dni){

	Alumno borrado;

	borrado.setDni(dni);

	if(esAlumno(borrado)){


		for (list<Alumno>::iterator it=_listaAlumnos.begin(); it != _listaAlumnos.end(); ++it)
		{

			if(it->getDni() == borrado.getDni()){

				it = _listaAlumnos.erase(it);

			}
		}
		return true;


	}else{

		return false;
	}



}