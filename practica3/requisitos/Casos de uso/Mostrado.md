## Mostrado

**ID:** 005
**Breve descripción:** Se muestra un alumno de la lista.

___

**Actores principales:** Profesor.

**Actores secundarios:** Alumno y lista.
___

**Precondiciones:**

 * El alumno ha de existir en la lista.
___

**Flujo principal:**

 1. El caso de uso empieza cuando el profesor quiere buscar y mostrar un alumno.
 2. Se pide al profesor los datos necesariors para poder buscarlo usando la función buscar **(ID: 2)**.
 3. Una vez encontrado, se generará un fichero Markdown con toda la información del alumno resaltando el liderazgo.
___

**Postcondiciones:**

 * Se generará satisfactoriamente el fichero Markdown del alumno mostrado.
___

**Flujos alternativos:**

 1a. Si el alumno no existe se notificará al profesor.
