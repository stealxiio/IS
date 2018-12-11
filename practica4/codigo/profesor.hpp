#ifndef _ALUMNO_HPP_
#define _ALUMNO_HPP_


#include <iostream>
#include <list>
#include <cmath>
#include <cassert>
#include <string>
#include "persona.hpp"

using namespace std;

class Alumno : public Persona {

	private:

		string _id;
		string _rol;
	
		

	public:

		inline Persona(string id, string rol, string dni, string nacimiento, string apellidos, string nombre, string correo = "correo@mail.com", int telefono = 000000000, int postal = 00000)
						:Persona(dni, nacimiento, apellidos, nombre, correo, telefono, postal){

			this->setId(id);	
			this->setRol(rol);
			this->setDni(dni);
			this->setNacimiento(nacimiento);
			this->setApellidos(apellidos);
			this->setNombre(nombre);
			this->setCorreo(correo);
			this->setTelefono(telefono);
			this->setPostal(postal);

		}


		//Gets:
		inline int getId() const{
			return _id;
		}

		inline int getRol() const{
			return _rol;
		}

	

		


		//Sets:
		inline void setId(string id) {
			this->_id = id;
		}

		inline void setEquipo(string rol) {
			this->_rol = rol;
		}

		

};


#endif