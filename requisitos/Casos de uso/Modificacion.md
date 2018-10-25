## Modificación

**ID:** 005
**Breve descripción:** Se busca y modifica un alumno del sistema.

___

**Actores principales:** Usuario.

**Actores secundarios:** Alumno.
___

**Precondiciones:**

 * El alumno ha de existir en el sistema.
___

**Flujo principal:**

 1. El caso de uso empieza cuando el usuario quiere buscar y modificar un alumno.
 2. Se pide al usuario los datos necesariors para poder buscarlo usando la funcion buscar**(ID: 2)**.
 3. Una vez encontrado el alumno a modificar se volveran a pedir todos los datos.
 4. El sistema modifica el usuario.
___

**Postcondiciones:**

 * El alumno modificado ha de tener todos los datos menos equipo y liderazgo.
 * Los datos modificados han de seguir el las directrices de la base de datos.
 * La modificación del alumno no ha de coincidir en DNI con otro alumno de la base de datos.
 * El sistema guarda satisfactoriamente el alumno con sus nuevos datos.
___

**Flujos alternativos:**

 3a. El sistema se tiene que asegurar de que la modificación no cree mas de 1 lider por grupo.
 
 3b. En el caso en el que no se inserte bien un dato *(Ej: un nombre en el telefono)* este se volvera a pedir hasta que se inserte bien.
