## Borrado

**ID:** 004
**Breve descripción:** Se borra un alumno de la lista.

___

**Actores principales:** Profesor o Lista.

**Actores secundarios:** Alumno.
___

**Precondiciones:**

 * El alumno ha de existir en la lista previamente.
___

**Flujo principal:**

 1. El caso de uso empieza cuando el profesor o la propia lista quiere borrar un alumno.
 2. Se recogen todos los datos necesarios para poder buscar al alumno.
 3. Se busca al alumno en la lista.
 4. El alumno se borra de la lista.
___

**Postcondiciones:**

 * El alumno deja de estar en la lista
 * Numero de alumnos disminuido en 1.
___

**Flujos alternativos:**

 2a. En el caso en el que el alumno no exista en la lista, se mostrará un mensaje de error y se informara al usuario de la existencia del alumno.
 
 
