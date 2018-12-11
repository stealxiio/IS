#ifndef _PERSONA_HPP_
#define _PERSONA_HPP_


#include <iostream>
#include <cmath>
#include <cassert>
#include <string>

using namespace std;

class Persona{

	private:

		string _dni;
		string _nacimiento;
		string _apellidos;
		string _nombre;
		string _correo;
		int _telefono;
		int _postal;

	public:

		inline Persona(string dni = "00000000X", string nacimiento = "00/00/0000", string apellidos = "", string nombre = "", string correo = "correo@mail.com", int telefono = 000000000, int postal = 00000){

			this->setDni(dni);
			this->setNacimiento(nacimiento);
			this->setApellidos(apellidos);
			this->setNombre(nombre);
			this->setCorreo(correo);
			this->setTelefono(telefono);
			this->setPostal(postal);

		}

		//Gets:
		inline string getDni()const{
			return _dni;
		}

		inline string getNacimiento()const{
			return _nacimiento;
		}

		inline string getApellidos()const{
			return _apellidos;
		}

		inline string getNombre()const{
			return _nombre;
		}

		inline string getCorreo()const{
			return _correo;
		}

		inline int getTelefono()const{
			return _telefono;
		}

		inline int getPostal()const{
			return _postal;
		}

		//Sets:
		inline void setDni(string dni){
			this->_dni = dni;
		}

		inline void setNacimiento(string nacimiento){
			this->_nacimiento = nacimiento;
		}

		inline void setApellidos(string apellidos){
			this->_apellidos = apellidos;
		}

		inline void setNombre(string nombre){
			this->_nombre = nombre;
		}

		inline void setCorreo(string correo){
			this->_correo = correo;
		}

		inline void setTelefono(int telefono){
			this->_telefono = telefono;
		}

		inline void setPostal(int postal){
			this->_postal = postal;
		}


};



#endif 
