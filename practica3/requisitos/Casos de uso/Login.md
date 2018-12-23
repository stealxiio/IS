## Login

**ID:** 011
**Breve descripción:** El usuario accede al sistema identificandose como profesor.

___

**Actores principales:** Usuario.

**Actores secundarios:** Profesor.
___

**Precondiciones:**

___

**Flujo principal:**

 1. El caso de uso empieza cuando el usuario quiere identificarse como profesor para usar la agenda.
 2. Se le pedirá al usuario los datos de Id y Contraseña para poder identificarse como profesor.
 3. Se buscará en un fichero binario la coincidencia de estos datos.
 4. El usuario se identifica como profesor y accede al sistema.
___

**Postcondiciones:**

 * El usuario se introduce al sistema.
___

**Flujos alternativos:**
 
 4b. En el caso en el que no se identifique se volveran a pedir los datos de usuario y contraseña.
