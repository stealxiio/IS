## Mostrado

**ID:** 005
**Breve descripción:** Se muestra un alumno de la agenda.

___

**Actores principales:** Profesor.

**Actores secundarios:** Alumno y agenda.
___

**Precondiciones:**

 * El alumno ha de existir en la agenda.
___

**Flujo principal:**

 1. El caso de uso empieza cuando el profesor quiere buscar y mostrar un alumno.
 2. Se pide al profesor en que formato quiere que se muestren los datos, si Markdown o html.
 2. Se pide al profesor los datos necesariors para poder buscarlo usando la función buscar **(ID: 2)**.
 3. Una vez encontrado, se generará un fichero del tipo especificado con toda la información del alumno resaltando el liderazgo.
___

**Postcondiciones:**

 * Se generará satisfactoriamente el fichero Markdown o html del alumno mostrado.
___

**Flujos alternativos:**

 1a. Si el alumno no existe se notificará al profesor.
