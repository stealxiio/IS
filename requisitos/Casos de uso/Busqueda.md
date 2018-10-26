## Búsqueda

**ID:** 002
**Breve descripción:** Se busca un alumno en el sistema.

___

**Actores principales:** Usuario.

**Actores secundarios:** Alumno.
___

**Precondiciones:**

 * Ninguna.
___

**Flujo principal:**

 1. El caso de uso empieza cuando el usuario o el sistema quieren buscar un alumno.
 2. Se podra buscar segun el DNI, los apellidos o segun el numero de grupo del alumno.
 3. El alumno encontrado es devuelto por la búsqueda.
___

**Postcondiciones:**

 * Ninguna.
___

**Flujos alternativos:**

 2a. En los casos de búsqueda por apellido y numero, cuando haya mas de una coincidencia se preguntara por el DNI.
 
 2b. En el caso en el que el alumno no exista se notificará al usuario de ello.
