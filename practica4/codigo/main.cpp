#include <iostream>
#include <string>
#include <cstdlib>
#include <list>
#include "menu.hpp"
#include "macros.hpp"
#include "persona.hpp"
#include "alumno.hpp"
#include "profesor.hpp"
#include "agenda.hpp"



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

	Alumno aux(2, 3, true, "31015701V", "12/12/1222", "mj", "JP", "correo", 657462286, 145002);
	Alumno aux2(1, 4, true, "30990856N", "33/33/3333", "lr", "JAVI", "correoCasi", 650328761, 14014);
	Agenda agenda;


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
	string nombre, apellidos, dni, correo, nacimiento, lid;
	int telefono, postal, curso, equipo;

	bool lider=false;

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


////////////////////////////////////////////////////////////////////////////
					////////////////////////////////////////////////////


			case 5: 
					

					PLACE(1,1);
					cout << BIBLUE;
					cout << "[5] Insertar Alumno" << endl;
					cout << RESET;
					//Solicitud de datos

					cout << "Nombre del alumno"<< endl;
					cin >> nombre;
					cout << "Apellidos del alumno"<< endl;
					cin >> apellidos;
					cout << "DNI del alumno"<< endl;
					cin >> dni;
					cout << "Telefono del alumno"<< endl;
					cin >> telefono;
					cout << "E-mail del alumno"<< endl;
					cin >> correo;
					cout << "Codigo postal del alumno"<< endl;
					cin >> postal;
					cout << "Curso mas alto matriculado del alumno"<< endl;
					cin >> curso;
					cout << "Fecha de nacimiento del alumno"<< endl;
					cin >> nacimiento;
					cout << "Equipo del alumno"<< endl;
					cin >> equipo;
					cout << "¿Es lider? (Y/N)"<< endl;
					cin >> lid;
					if (lid=="Y")
					{
						lider=true;
					}
					
					aux.setCurso(curso);	
					aux.setEquipo(equipo);
					aux.setLider(lider);
					aux.setDni(dni);
					aux.setNacimiento(nacimiento);
					aux.setApellidos(apellidos);
					aux.setNombre(nombre);
					aux.setCorreo(correo);
					aux.setTelefono(telefono);
					aux.setPostal(postal);

					if (agenda.insertar(aux))
					{
						cout << "Alumno insertado satisfactoriamente.";
					}
					else{
						cout << "El alumno no se ha podido insertar.";
					}
					cin.ignore();

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
					PLACE(1,1);
					cout << BRED;
					cout << "[8] Mostrar Alumno" << endl;
					cout << RESET;
					cout << aux.getDni() << endl;

					//**************************************************
					//Codigo para probar que va bien mostrar alumno

					if (agenda.insertar(aux))
					{
						cout << "Alumno insertado satisfactoriamente.";
					}
					else{
						cout << "El alumno no se ha podido insertar.";
					}

					if (agenda.insertar(aux2))
					{
						cout << "Alumno insertado satisfactoriamente.";
					}
					else{
						cout << "El alumno no se ha podido insertar.";
					}

					cout << "prueba con buscaralumno pasandole alumno" << endl;
					agenda.mostrarAlumno(aux);
					cout << "prueba con buscaralumno pasandole DNI" << endl;
					agenda.mostrarAlumno(aux2.getDni());

					//************************************************** FUNCIONA

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




