## Mostrado

**ID:** 005
**Breve descripción:** Se busca y mostrará un alumno del sistema.

___

**Actores principales:** Usuario.

**Actores secundarios:** Alumno.
___

**Precondiciones:**

 * El alumno ha de existir en el sistema.
___

**Flujo principal:**

 1. El caso de uso empieza cuando el usuario quiere buscar y mostrar un alumno.
 2. Se pide al usuario los datos necesariors para poder buscarlo usando la funcion buscar **(ID: 2)**.
 3. Una vez encontrado el alumno se generará un fichero Markdown con toda la información del alumno resaltando el liderazgo.
___

**Postcondiciones:**

 * Se generará satisfactoriamente el fichero Markdown del alumno mostrado.
___

**Flujos alternativos:**

 1a. Si el alumno no existe se notificara al usuario.
