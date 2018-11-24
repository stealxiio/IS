## Búsqueda

**ID:** 002
**Breve descripción:** Se busca un alumno en la lista.

___

**Actores principales:** Profesor o lista.

**Actores secundarios:** Alumno.
___

**Precondiciones:**

 * Ninguna.
___

**Flujo principal:**

 1. El caso de uso empieza cuando el profesor o la lista quieren buscar un alumno.
 2. Se podrá buscar segun el DNI, los apellidos o según el número de grupo del alumno.
 3. Se busca el alumno en la lista.
 4. El alumno encontrado es devuelto.
___

**Postcondiciones:**

 * Ninguna.
___

**Flujos alternativos:**

 2a. En los casos de búsqueda por apellido y número, cuando haya más de una coincidencia, se preguntará por el DNI.
 
 2b. En el caso en el que el alumno no exista se notificará al usuario de ello.
