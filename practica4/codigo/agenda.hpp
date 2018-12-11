#ifndef _AGENDA_HPP_
#define _AGENDA_HPP_


#include <iostream>
#include <cmath>
#include <cassert>
#include <string>
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

		bool mostrarAlumno(Alumno aux);

		bool borrarAlumno(Alumno aux);

		//Podemos hacer los 3 ordenar en la misma funcion de ordenar 
		//pasandole un int que diga el criterio con el que se quiere ordenar
		bool ordenar(int criterio );
		
		bool mofidicar(Alumno aux);

		bool mostrarTodos();

		bool mostrarEquipo(int equipo);

		bool exportar(string nombreFichero);

		bool inportar(string nombreFichero);

		bool login(Profesor profesor);

		bool exportarBackup(string nombreFichero);

		bool inportarBackup(string nombreFichero);

		bool registrar(Profesor profesor);



};


#endif