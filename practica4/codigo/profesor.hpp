#ifndef _PROFESOR_HPP_
#define _PROFESOR_HPP_


#include <iostream>
#include <list>
#include <cmath>
#include <cassert>
#include <string>
#include "persona.hpp"

using namespace std;

class Profesor : public Persona {

	private:

		string _id;
		string _rol;
	
		

	public:

		inline Profesor(string id, string rol, string dni, string nacimiento = "00/00/0000", string apellidos = "", string nombre = "", string correo = "correo@mail.com", int telefono = 000000000, int postal = 00000)
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
		inline string getId() const{
			return _id;
		}

		inline string getRol() const{
			return _rol;
		}

	

		


		//Sets:
		inline void setId(string id) {
			this->_id = id;
		}

		inline void setRol(string rol) {
			this->_rol = rol;
		}

		

};


#endif