#include <iostream>
#include <fstream>
#include <string>


#include "menu.hpp"
#include "macros.hpp"



using namespace std;



int menu()
{
  int opcion;
  int posicion;

  posicion=2;

  cout << CLEAR_SCREEN;

  PLACE(1,10);
  cout << BIPURPLE;
  cout << "Programa principial | Opciones del menú";
  cout << RESET;

  //////////////////////////////////////////////////////////////////////////////
  posicion++;
  PLACE(posicion++,10);
  cout << BIBLUE;
  cout <<  "-Opciones de ficheros-";
  cout << RESET;

  PLACE(posicion++,10);
  cout <<  "[1] Cargar desde fichero";

  PLACE(posicion++,10);
  cout << "[2] Grabar fichero";

  PLACE(posicion++,10);
  cout <<  "[3] Importar backup";

  PLACE(posicion++,10);
  cout << "[4] Exportar backup";
  
  /////////////////////////////////////////////////////////////////
  posicion++;
  PLACE(posicion++,10);
  cout << BIBLUE;
  cout <<  "-Opciones de modificacion-";
  cout << RESET;

  PLACE(posicion++,10);
  cout <<  "[5] Insertar Alumno";

  PLACE(posicion++,10);
  cout << "[6] Modificar Alumno";

  PLACE(posicion++,10);
  cout << "[7] Borrar Alumno";



  ///////////////////////////////////////////////////////////

  posicion++;
  PLACE(posicion++,10);
  cout << BIBLUE;
  cout <<  "-Opciones de visualizacion-";
  cout << RESET;

  PLACE(posicion++,10);
  cout << "[8] mostrar Alumno";

  PLACE(posicion++,10);
  cout << "[9] Mostrar Alumnos de un equipo";

  PLACE(posicion++,10);
  cout<<"[10] Mostrar todos los alumnos de la lista";

  ///////////////////////////////////////////////////////////

  posicion++;
  PLACE(posicion++,10);
  cout << BIBLUE;
  cout <<  "-Opciones de sistema-";
  cout << RESET;

  PLACE(posicion++,10);
  cout<<"[11] Registrar Profesor";



  //////////////////////////////////////////////////////////////////////////////
  posicion++;

  PLACE(posicion++,10);
  cout << BIRED << "[0] Salir";


  //////////////////////////////////////////////////////////////////////////////
  posicion++;

  PLACE(posicion++,10);
  cout << BIYELLOW;
  cout << "Opción: ";
  cout << RESET;

  // Se lee el número de opción
  cin >> opcion;

    // Se elimina el salto de línea del flujo de entrada
    cin.ignore();

  return opcion;
}