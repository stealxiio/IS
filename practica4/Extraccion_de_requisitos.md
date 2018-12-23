# Extracción de requisitos


### Partes interesadas:
**Contratante:** Duran Rosal, Antonio Manuel. Guijo Rubio, David                                                    
**Contratados:** Muñoz Jiménez, Juan Pedro. Lozano Rojas, Javier. Ruiz Requena, Pablo.


### Funcionalidad de la aplicación:

El cliente quiere una aplicación con la cual poder almacenar y consultar datos de sus alumnos. Dicha aplicación debera ser capaz de almacenar y controlar los siguientes datos de cada alumno: *DNI, Nombre y apellidos, telefono de contacto, email, dirección postal, Curso mas alto mariculado, fecha de nacimiento, numero de equipo y si es lider de este o no.*

Los usuarios de la aplicación seran los profesores, los cuales seran diferenciados en coordinador (solo un profesor podra serlo al mismo tiempo) y ayudantes. Los profesores estaran caracterizados por sus credenciales (Nombre, Apellidos, ID, correo y contraseña). Estos credenciales estaran guardados en un fichero binario, el cual se cargar al iniciar la aplicación.


### Requisitos Funcionales:
*(En orden de priorización)*

**Inserción:** Capacidad de insertar alumnos introduciendo como minimo todos los datos excepto equipo y lider de equipo.       
**Ordenar:** Ordena el listado de alumnos alfabeticamente, por DNI o por curso (tanto ascendente como descendente). El sistema usara automaticamente esta función al insertar, borrar o modificar un alumno.                                                      
**Búsqueda:** Busqueda de alumnos dado un DNI, un apellido y (opcional) un numero de equipo. En el caso de apellido, si hay varios alumnos con el mismo, se pedira el DNI.                               
**Mostrado:** Mostrado de los datos de un alumno en HTML o Markdown. El dato de si es lider o no debera estar bien resaltado.     
**Borrado:** Busqueda y borrado de un alumno dado un DNI. Pedir confirmación antes de la ejecución.                            
**Modificación:** Busqueda y modificación de los datos de un alumno.                                                             
**Mostrado de todos los alumnos:** Capacidad de mostrar todos los alumnos de las siguientes maneras: Orden alfabetico (tanto ascendente como descendiente), orden por DNI, orden por curso (Tanto ascendente como descendente).                             
**Mostrado de todos los alumnos de un equipo:** igual que el anterior pero solo los alumnos de grupo proporcionado.              
**Guardar:** Funcion que guarde el estado de la lista en un fichero.                            
**Cargar:** Funcion que cargue la lista desde un fichero.                                        
**Exportar backup:** Capacidad de exportar una copia de seguridad a un fichero binario. Solo el coordinador puede usar esta función.                                                                     
**Importar backup:** Capacidad de importar una copia de seguridad desde un fichero binario. Solo el coordinador puede usar esta función.                                                                 
**Login:** La aplicacion debera de tener un sistema de login y registro.                    


### Requisitos No_Funcionales:

**Cargar credenciales:** Al iniciar la aplicación cargara automaticamente el fichero binario con los credenciales de los profesores.                    
**Sistema:** La aplicación debera ser comnpatible con Unix linus.                                                            
**Interfaz:** La aplicación debera funcionar con lineas de comandos por consola.                                                  
**Estructura de clases:** El programa debe trabajar sobre una estructura absada en clases y herencias.
**Seguridad:** Alguien que no este autorizado no debera poder modificar los datos almacenados. Asi como no se podra introducir datos erroneos (Ej: Un dni que no conste de 8 numeros y una letra) o duplicados (Ej: dos alumnos con el mismo dni).                
