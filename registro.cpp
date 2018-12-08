#include <iostream>
#include "profesor.h"

bool Registrar(string contraseña, string ID, string nombre){
	fstream F;
	char marca[3];

	F.open("ejemplo.txt", ios::in|ios::binary);

	//se comprueba ahora si se ha abierto el fichero
	if(F.is_open()){
		//Me coloco en el final del fichero
		F.seekg(-128, ios::end);
		//Leo 3 bytes
		F.read(marca, 3);
		//digo si hay datos o no
		if((marca[0] != 'nombre') || (marca[1] != 'ID') || (marca[2]!= 'contraseña'))
				cout<<"sin datos en el fichero"<<endl;
				F.write((const char*)&F, sizeof(F));
			else 
				cout<<"datos en el fichero"<<endl

		F.close();
	}//Se cierra el fichero
	else{ 
		cout<<"fichero inexistente"<<endl;
		return false;}

	return true;
}