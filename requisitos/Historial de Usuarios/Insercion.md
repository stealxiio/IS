## Inserción

**ID:** 001
**Breve descripción:** Se inserta un nuevo alumno en el sistema.

___

**Actores principales:** Usuario o sistema.

**Actores secundarios:** Alumno.
___

**Precondiciones:**

 * El alumno no ha de existir en el sistema cuando el sistema quiera insertar un alumno.
___

**Flujo principal:**

 1. El caso de uso empieza cuando el usuario o el sistema quiere insertar un alumno.
 2. Se recogen todos los datos necesarios para poder insertarlos.
 3. El alumno se inserta en el sistema.
___

**Postcondiciones:**

 * El alumno insertado ha de tener todos los datos menos equipo y liderazgo.
 * Los datos insertados han de seguir el las directrices de la base de datos.
 * El alumno insertado no ha de existir previamente en el sistema.
 * El sistema guarda satisfactoriamente el alumno con sus datos.
___

**Flujos alternativos:**

 2.a En el caso en el que el alumno exista ya en el sistema se mostrará un mensaje de error y se volvera a pedir los datos del alumno.
 2.b En el caso en el que no se inserte bien un dato *(Ej: un nombre en el telefono)* este se volvera a pedir hasta que se inserte bien.
