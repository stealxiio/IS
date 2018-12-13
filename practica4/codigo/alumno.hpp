#ifndef _ALUMNO_HPP_
#define _ALUMNO_HPP_


#include <iostream>
#include <cmath>
#include <cassert>
#include <string>
#include "persona.hpp"

using namespace std;

class Alumno : public Persona {

	private:

		int _cursoAlto;
		int _numeroEquipo;
		bool _lider;

	public:

		inline Alumno(int cursoAlto, int numeroEquipo, bool lider = false, string dni = "", string nacimiento = "", 
						string apellidos = "", string nombre = "", string correo = "correo@mail.com", int telefono = 000000000, int postal = 00000)
						:Persona(dni, nacimiento, apellidos, nombre, correo, telefono, postal){

			this->setCurso(cursoAlto);	
			this->setEquipo(numeroEquipo);
			this->setLider(lider);
			this->setDni(dni);
			this->setNacimiento(nacimiento);
			this->setApellidos(apellidos);
			this->setNombre(nombre);
			this->setCorreo(correo);
			this->setTelefono(telefono);
			this->setPostal(postal);

		}

		inline Alumno(){
			
		}

		//Gets:
		inline int getCurso() const{
			return _cursoAlto;
		}

		inline int getEquipo() const{
			return _numeroEquipo;
		}

		inline bool getLider() const{
			return _lider;
		}


		//Sets:
		inline void setCurso(int curso) {
			this->_cursoAlto = curso;
		}

		inline void setEquipo(int equipo) {
			this->_numeroEquipo = equipo;
		}

		inline void setLider(bool lider) {
			this->_lider = lider;
		}

};


#endif