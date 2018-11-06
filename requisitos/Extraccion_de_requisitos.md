# Extracción de requisitos


### Partes interesadas:
**Contratante:** Duran Rosal, Antonio Manuel.                                         
**Contratados:** Muñoz Jiménez, Juan Pedro. Lozano Rojas, Javier. Ruiz Requena, Pablo.


### Funcionalidad de la aplicacion:

El cliente quiere una aplicacion con la cual poder almacenar y consultar datos de sus alumnos. Dicha aplicacion debera ser capaz de almacenar y controlar los siguientes datos de cada alumno: *DNI, Nombre y apellidos, telefono de contacto, email, dirección postal, Curso mas alto mariculado, fecha de nacimiento, numero de equipo y si es lider de este o no.*


### Requisitos Funcionales:
*(En orden de priorización)*

**Inserción:** Capacidad de insertar alumnos introduciendo como minimo todos los datos excepto equipo y lider de equipo.           
**Busqueda:** Busqueda de alumnos dado un DNI, un apellido y (opcional) un numero de equipo. En el caso de apellido, si hay varios alumnos con el mismo, se pedira el DNI.                                                                                       
**Mostrado:** Mostrado de los datos de un alumno en HTML o Markdown. El dato de si es lider o no debera estar bien resaltado.     
**Borrado:** Busqueda y borrado de un alumno dado un DNI. Pedir confirmación antes de la ejecucion.   
**Ordenar:** Ordena la base de datos alfabeticamente, por dni, por curso (tanto ascendente como descendiente).                    
**Modificación:** Busqueda y modificacion de los datos de un alumno.                                                             
**Mostrado de todos los alumnos:** Capacidad de mostrar todos los alumnos de las siguientes maneras: Orden alfabetico (tanto ascendente como descendiente), orden por DNI, orden por curso (Tanto ascendente como descendente).                             
**Mostrado de todos los alumnos de un equipo:** igual que el anterior pero solo los alumnos de grupo proporcionado.              
**Exportar:** Capacidad de exportar a un fichero binario. Solo el coordinador puede usar esta función.                                                                     
**Importar:** Capacidad de importar desde un fichero binario. Solo el coordinador puede usar esta función.                                                                 


### Requisitos No_Funcionales:

**Sistema:** La aplicacion debera ser comnpatible con Unix linus.                                                            
**Interfaz:** La aplicacion debera funcionar con lineas de comandos por consola.                                                  
**Seguridad:** Alguien que no este autorizado no debera poder modificar los datos almacenados. Asi como no se podra introducir datos erroneos (Ej: Un dni que no conste de 8 numeros y una letra) o duplicados (Ej: dos alumnos con el mismo dni).                
