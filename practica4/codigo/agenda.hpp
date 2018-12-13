#ifndef _AGENDA_HPP_
#define _AGENDA_HPP_


#include <iostream>
#include <cmath>
#include <cassert>
#include <string>
#include <fstream>
#include "persona.hpp"
#include "alumno.hpp"
#include "profesor.hpp"

using namespace std;

class Agenda {

	private:

		list<Alumno> _listaAlumnos;

	public:

		inline Agenda(){
			
		}

		//falta destructor

		//Gets:
		inline int getNumeroAlumnos() const{
			return _listaAlumnos.size();
		}

		inline list<Alumno> getLista() const{
			return _listaAlumnos;
		}

		//Sets:
		inline void setLista(list<Alumno> lista) {
			this->_listaAlumnos = lista;
		}

		//Funciones

		bool insertar(Alumno aux);

		bool esAlumno(Alumno aux);

		Alumno buscarAlumno(string dni);

		Alumno buscarAlumno(string nombre, string apellidos);

		bool mostrarAlumno(Alumno aux);	//Cual de las dos es correcta?
		bool mostrarAlumno(string dni);

		bool borrarAlumno(string dni);

		//Podemos hacer los 3 ordenar en la misma funcion de ordenar 
		//pasandole un int que diga el criterio con el que se quiere ordenar
		void ordenar(int criterioOrdenacion, bool descendente);
		
		bool modificar(string dni);

		void mostrarTodo();

		bool mostrarEquipo(int equipo);

		bool exportar();

		bool importar();

		bool login(string id, string pass);

		bool exportarBackup(bool permiso, string name);

		bool inportarBackup(bool permiso, string name);

		bool registrar(string id, string pass, bool permiso);



};


#endif