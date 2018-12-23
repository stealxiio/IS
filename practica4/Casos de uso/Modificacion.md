## Modificación

**ID:** 005
**Breve descripción:** Se busca y modifica un alumno de la agenda.

___

**Actores principales:** Profesor.

**Actores secundarios:** Alumno y agenda.
___

**Precondiciones:**

 * El alumno ha de existir en la agenda.
___

**Flujo principal:**

 1. El caso de uso empieza cuando el profesor quiere buscar y modificar un alumno.
 2. Se pide al profesor los datos necesariors para poder buscarlo usando la funcion buscar **(ID: 2)**.
 3. Una vez encontrado el alumno a modificar se volveran a pedir todos los datos.
 4. La agenda modifica al alumno.
___

**Postcondiciones:**

 * El alumno modificado ha de tener todos los datos menos equipo y liderazgo.
 * Los datos modificados han de seguir las directrices de la base de datos.
 * La lista guarda satisfactoriamente el alumno con sus nuevos datos.
___

**Flujos alternativos:**
 
 3b. En el caso en el que no se inserte bien un dato *(Ej: un nombre en el telefono)* este se volverá a pedir hasta que se inserte bien.
