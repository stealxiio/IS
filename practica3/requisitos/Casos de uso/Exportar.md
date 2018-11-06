## Exportar

**ID:** 008
**Breve descripción:** Se exportan los datos del sistema a un fichero binario.

___

**Actores principales:** Usuario o sistema.

**Actores secundarios:** Alumno.
___

**Precondiciones:**

 * El sistema tiene que tener al menos un alumno que exportar.
___

**Flujo principal:**

 1. El caso de uso empieza cuando el usuario o el sistema exportar la informacion del sistema a un fichero binario.
 2. Se le pedira al usuario el nombre del fichero binario en el que se va a exportar los datos.
___

**Postcondiciones:**

 * Al finalizar existira un fichero binario con los datos de los alumnos.
___

**Flujos alternativos:**

 2a. En el caso en el que sea el sistema el que quiere exportar, se exportará la informacion en un fichero binario llamado "backup".
 