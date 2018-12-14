## Inserción

**ID:** 001
**Breve descripción:** Se inserta un nuevo alumno en la lista.

___

**Actores principales:** Profesor o Lista.

**Actores secundarios:** Alumno.
___

**Precondiciones:**

 * El alumno no ha de existir en la lista previamente.
___

**Flujo principal:**

 1. El caso de uso empieza cuando el profesor o la propia lista quiere insertar un alumno.
 2. Se recogen todos los datos necesarios para poder insertarlos.
 3. El alumno se inserta en la lista.
___

**Postcondiciones:**

 * El alumno insertado ha de tener todos los datos menos equipo y liderazgo.
 * Los datos insertados han de seguir las directrices de la base de datos.
 * El alumno insertado no ha de existir previamente en el sistema.
 * El sistema guarda satisfactoriamente el alumno con sus datos.
 * Numero de alumnos aumentado en 1.
___

**Flujos alternativos:**

 2a. En el caso en el que el alumno exista ya en la lista, se mostrará un mensaje de error y se volverá a pedir los datos del alumno.
 
 2b. En el caso en el que no se inserte bien un dato *(Ej: un nombre en el teléfono)* este se volverá a pedir hasta que se inserte bien.