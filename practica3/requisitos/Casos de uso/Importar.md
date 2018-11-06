## Importar
**ID:** 009
**Breve descripción:** Se importa a la lista desde un fichero binario.

___

**Actores principales:** Profesor *coordinador*.

**Actores secundarios:** Lista.
___

**Precondiciones:**

 * El fichero debe de existir.
___

**Flujo principal:**

 1. El caso de uso empieza cuando el profesor *coordinador* quiere importar desde un fichero binario.
 2. Se le pedirá al usuario el nombre del fichero binario del que se quiere importar los datos.
 3. La lista importa los datos desde el fichero binario usando la funcion Inserción **(ID: 1)**.
___

**Postcondiciones:**

 * Los datos de los alumnos de la lista corresponden con los datos del archivo binario.
___

**Flujos alternativos:**

 2a. En el caso en el que el fichero no exista volvera al menu principal avisando al usuario de que no existe dicho fichero.
