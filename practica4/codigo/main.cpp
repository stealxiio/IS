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
	bool permiso = true;

	Alumno aux(2, 3, true, "31015701V", "12/12/1222", "mj", "JP", "correo", 657462286, 145002);
	Alumno aux2(1, 4, true, "30990856N", "33/33/3333", "lr", "JAVI", "correoCasi", 650328761, 14014);
	Agenda agenda;
	string nombreBackup;
	string dnib;


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
					PLACE(1,1);
					cout << BRED;
					cout << "[1] Cargar desde fichero" << endl;
					cout << RESET;
					if(agenda.importar()){
						cout << "fichero cargado con exito." << endl;

					}
					break;

			
			case 2: 
					PLACE(1,1);
					cout << BRED;
					cout << "[2] Grabar fichero" << endl;
					cout << RESET;
					if(agenda.exportar()){
						cout << "fichero grabado con exito." << endl;

					}

					break;

			case 3: 
					PLACE(1,1);
					cout << BRED;
					cout << "[3] Importar backup" << endl;
					cout << RESET;
					cout << "Introduzca el nombre del fichero: ";
					cin >> nombreBackup;
					if(agenda.inportarBackup(permiso, nombreBackup)){
						cout << "Backup cargada con exito." << endl;

					}else{
						cout << "No tienes permiso." << endl;
					}

					cin.ignore();
					break;

			case 4: 
					PLACE(1,1);
					cout << BRED;
					cout << "[4] Exportar backup" << endl;
					cout << RESET;

					cout << "Introduzca el nombre del fichero:";
					cin >> nombreBackup;
					if(agenda.exportarBackup(permiso, nombreBackup)){
						cout << "Backup guardada con exito." << endl;

					}else{
						cout << "No tienes permiso." << endl;
					}
					cin.ignore();

					break;


////////////////////////////////////////////////////////////////////////////
					////////////////////////////////////////////////////


			case 5: 
					

					PLACE(1,1);
					cout << BIBLUE;
					cout << "[5] Insertar Alumno" << endl;
					cout << RESET;
					//Solicitud de datos

					cout << "Nombre del alumno: "<< endl;
					getline(cin, nombre);
					cout << "Apellidos del alumno:"<< endl;
					getline(cin, apellidos);
					cout << "DNI del alumno:"<< endl;
					cin >> dni;
					cout << "Telefono del alumno:"<< endl;
					cin >> telefono;
					cout << "E-mail del alumno:"<< endl;
					cin >> correo;
					cout << "Codigo postal del alumno:"<< endl;
					cin >> postal;
					cout << "Curso mas alto matriculado del alumno:"<< endl;
					cin >> curso;
					cout << "Fecha de nacimiento del alumno:"<< endl;
					cin >> nacimiento;
					cout << "Equipo del alumno:"<< endl;
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
						cout << "Alumno insertado satisfactoriamente. ";
					}
					else{
						cout << "El alumno no se ha podido insertar. ";
					}

					cout << agenda.getNumeroAlumnos() << endl;
					cin.ignore();

					break;

			case 6:
					PLACE(1,1);
					cout << BRED;
					cout << "[6] Modificar Alumno." << endl;
					cout << RESET;

					//borrar los insertar
					//agenda.insertar(aux);
					//agenda.insertar(aux2);
					//borrar insertar


					cout << "Introduzca el dni del alumno que desea modificar" << endl;
					cin >> dni;
					if(agenda.modificar(dni)){
						cout << "Se ha modificado con exito al alumno." << endl;
					}else{
						cout << "El alumno especificado no existe." << endl;
					}


					break;
			case 7:
					PLACE(1,1);
					cout << BRED;
					cout << "[7] Borrar Alumno" << endl;
					cout << RESET;

					//borrar los insertar
					//agenda.insertar(aux);
					//agenda.insertar(aux2);
					//borrar insertar


					cout << "Introduzca el dni del alumno que desea borrar" << endl;
					cin >> dni;
					if(agenda.borrarAlumno(dni)){
						cout << "Se ha borrado con exito al alumno." << endl;
					}else{
						cout << "El alumno especificado no existe." << endl;
					}

					//agenda.mostrarTodo();
					break;



			/////////////////////////////////////////////////////////////////////////////////////////
			/////////////////////////////////////////////////////////////////////////////////////////

			case 8: 
					PLACE(1,1);
					cout << BIBLUE;
					cout << "[8] Mostrar Alumno" << endl;
					cout << RESET;
					cout << "introduzca el dni del alumno que quiera mostrar:";
					cin >> dnib;
					agenda.mostrarAlumno(dnib);
					


					break;

			case 9: 
					PLACE(1,1);
					cout << BRED;
					cout << "[9] Mostrar Alumnos de un equipo" << endl;
					cout << RESET;

					cout << "Introduzca el equipo que quieres mostrar:";
					cin >> equipo;
					agenda.mostrarEquipo(equipo);

					break;


			case 10: 
					PLACE(1,1);
					cout << BRED;
					cout << "[10] Mostra todo" << endl;
					cout << RESET;

					//agenda.insertar(aux);
					//agenda.insertar(aux2);

					agenda.mostrarTodo();
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




