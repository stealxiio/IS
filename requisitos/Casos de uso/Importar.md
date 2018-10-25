## Importar
**ID:** 009
**Breve descripción:** Se importa al sistema desde un fichero binario.

___

**Actores principales:** Usuario.

**Actores secundarios:** Sistema.
___

**Precondiciones:**

 * El fichero debe de existir.
___

**Flujo principal:**

 1. El caso de uso empieza cuando el usuario quiere importar desde un fichero binario.
 2. Se le pedira al usuario el nombre del fichero binario del que se quiere importar los datos.
 3. El sistema importa los datos desde el fichero binario.
___

**Postcondiciones:**

 * El sistema importa satisfactoriamente.
___

**Flujos alternativos:**

 2a. En el caso en el que el fichero no exista volvera al menu principal avisando al usuario de que no existe diche fichero.