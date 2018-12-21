## Inserción

**ID:** 001
**Breve descripción:** Se inserta un nuevo alumno en la agenda.

___

**Actores principales:** Profesor o Lista.

**Actores secundarios:** Alumno.
___

**Precondiciones:**

 * El alumno no ha de existir en la agenda previamente.
___

**Flujo principal:**

 1. El caso de uso empieza cuando el profesor o la propia agenda quiere insertar un alumno.
 2. Se recogen todos los datos necesarios para poder insertarlos.
 3. El alumno se inserta en la agenda.
___

**Postcondiciones:**

 * El alumno insertado ha de tener todos los datos menos equipo y liderazgo.
 * El alumno insertado no ha de existir previamente en el sistema.
 * El sistema guarda satisfactoriamente el alumno con sus datos.
 * Numero de alumnos aumentado en 1.
___

**Flujos alternativos:**

 2a. En el caso en el que el alumno exista ya en la lista, se mostrará un mensaje de error.
