## Borrado

**ID:** 004
**Breve descripción:** Se borra un alumno de la agenda.

___

**Actores principales:** Agenda.

**Actores secundarios:** Alumno.
___

**Precondiciones:**

 * El alumno ha de existir en la lista previamente.
___

**Flujo principal:**

 1. El caso de uso empieza cuando el profesor o la propia agenda quiere borrar un alumno.
 2. Se recoge el DNI del alumno que se desea borrar para poder buscarlo.
 3. Se busca al alumno en la agenda.
 4. El alumno se borra de la agenda.
___

**Postcondiciones:**

 * El alumno deja de estar en la agenda.
___

**Flujos alternativos:**

 2a. En el caso en el que el alumno no exista en la agenda, se mostrará un mensaje de error y se informará al usuario de la inexistencia del alumno.
 
 
