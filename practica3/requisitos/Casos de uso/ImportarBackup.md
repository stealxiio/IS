## Importar Backup
**ID:** 013
**Breve descripción:** Se importa a la agenda desde un fichero binario.

___

**Actores principales:** Profesor *coordinador*.

**Actores secundarios:** Agenda.
___

**Precondiciones:**

 * El fichero debe de existir.
 * El profesor ha de ser *coordinador*.
___

**Flujo principal:**

 1. El caso de uso empieza cuando el profesor *coordinador* quiere importar desde un fichero binario.
 2. Se le pedirá al profesor el nombre del fichero binario del que se quiere importar los datos.
 3. La agenda importa los datos desde el fichero binario usando la función Inserción **(ID: 1)**.
___

**Postcondiciones:**

 * Los datos de los alumnos de la agenda corresponden con los datos del archivo binario.
___

**Flujos alternativos:**

 2a. En el caso en el que el fichero no exista, volverá al menu principal avisando al profesor de que no existe dicho fichero.
