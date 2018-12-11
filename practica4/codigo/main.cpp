#include <iostream>
#include <string>
#include <cstdlib>
#include "menu.hpp"
#include "macros.hpp"



using namespace std;

bool login(string id, string pass){
	if ((id=="x") &&(pass=="123"))
	{
		cout << BRED;
		cout << "El ID o la contraseña no son correctos";
		cout << RESET;
		cin.ignore();

		cout << CLEAR_SCREEN;

		return false;
	}
	return true;

}

int main(){
	string id = "";
	string pass = "";


	do{

		cout << CLEAR_SCREEN;
		PLACE(25,1);
		cout << BIBLUE;
		cout << "Introduzca ID: ";
		cout << RESET;
		cin >> id;
		cout << CLEAR_SCREEN;
		PLACE(25,1);
		cout << BIBLUE;
		cout << "Introduzca Contraseña: ";
		cout << RESET;
		cin>> pass;
   		
		cin.ignore();
	}while(login(id, pass)==false);


	
	int opcion;

	do{
		// Se elige la opción del menún
		opcion = menu();		

		cout << CLEAR_SCREEN;
		PLACE(3,1);

		// Se ejecuta la opción del menú elegida
		switch(opcion)
		{
			case 0: 
					PLACE(25,1);
					cout << BRED;
					cout << "[0] Fin del programa" << endl;
					cout << RESET;
			break;

		   ///////////////////////////////////////////////////////////////////

			case 1: 
					PLACE(25,1);
					cout << BRED;
					cout << "[1] Cargar desde fichero" << endl;
					cout << RESET;
					break;

			
			case 2: 
					PLACE(25,1);
					cout << BRED;
					cout << "[2] Grabar fichero" << endl;
					cout << RESET;
					break;
			/////////////////////////////////////////////////////////////////////////////
			/////////////////////////////////////////////////////////////////////////////

			case 3: 
					PLACE(25,1);
					cout << BRED;
					cout << "[3] Importar backup" << endl;
					cout << RESET;
					break;
			case 4: 
					PLACE(25,1);
					cout << BRED;
					cout << "[4] Exportar backup" << endl;
					cout << RESET;
					break;

			case 5: 
					PLACE(25,1);
					cout << BRED;
					cout << "[0] Fin del programa" << endl;
					cout << RESET;
					break;

			case 6:
					PLACE(25,1);
					cout << BRED;
					cout << "[0] Fin del programa" << endl;
					cout << RESET;
					break;
			case 7:
					PLACE(25,1);
					cout << BRED;
					cout << "[0] Fin del programa" << endl;
					cout << RESET;
					break;



			/////////////////////////////////////////////////////////////////////////////////////////
			/////////////////////////////////////////////////////////////////////////////////////////


			case 8: 
					PLACE(25,1);
					cout << BRED;
					cout << "[0] Fin del programa" << endl;
					cout << RESET;
					break;

			case 9: 
					PLACE(25,1);
					cout << BRED;
					cout << "[0] Fin del programa" << endl;
					cout << RESET;
					break;





			//////////////////////////////////////////////////////////////////////////////
			default:
				cout << BIRED;
				cout << "Opción incorrecta ";
				cout << RESET;
				cout << "--> ";
			  	cout << ONIRED;
				cout << opcion << endl;
				cout << RESET;
     }
  
    if (opcion !=0)
    {
		PLACE(25,1);
		cout << "Pulse ";
		cout << BIGREEN;
		cout << "ENTER";
		cout << RESET;
		cout << " para mostrar el ";
		cout << INVERSE;
		cout << "menú"; 
		cout << RESET;

		// Pausa
		cin.ignore();

		cout << CLEAR_SCREEN;
    }
	  }while(opcion!=0);

	return 0;
}




