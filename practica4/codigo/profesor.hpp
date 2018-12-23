#ifndef _PROFESOR_HPP_
#define _PROFESOR_HPP_


#include <iostream>
#include <list>
#include <cmath>
#include <cassert>
#include <string>
#include "persona.hpp"

using namespace std;

class Profesor {

	private:

		string _id;
		string _pass;
		int _rol;
	
		

	public:

		inline Profesor(){


		}


		//Gets:
		inline string getId() const{
			return _id;
		}

		inline int getRol() const{
			return _rol;
		}

		inline string getPass() const{
			return _pass;
		}

	

		


		//Sets:
		inline void setId(string id) {
			this->_id = id;
		}

		inline void setPass(string pass) {
			this->_pass = pass;
		}

		inline void setRol(int rol) {
			this->_rol = rol;
		}

		

};


#endif