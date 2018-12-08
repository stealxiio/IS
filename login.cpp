#include <iostream>
#include "profesor.h"

bool login(string ID, string contraseña){

	fstream F;
	char marca[2];

	//Comprobamos que el fichero esta abierto
	if(F.is_open()){
		//movemos el cursor hacia el final del fichero para comprobar los elementos
		F.seekg(-128, ios::end);
		F.read(marca, 2);
		if((marca[0] != 'ID') || (marca[1] != 'contraseña')){
			cout<<"la contraseña o la ID no coinciden, por favor intentelo de nuevo"<<endl;
			return false
		}else
			cout<<"datos correctos"<<endl;
			f.close();
	}else{ 
		cout<<"fichero inexistente"<<endl;
		return false;}
	return true;
}

/