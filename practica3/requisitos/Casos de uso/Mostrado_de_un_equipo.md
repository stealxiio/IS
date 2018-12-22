 ## Mostrado_de_un_equipo
 
**ID:** 007 
**Breve descripción:** Muestra a todos los alumnos de un mismo equipo.

___

**Actores principales:** Profesor.

**Actores secundarios:** Alumno y agenda.
___

**Precondiciones**
   
   * Ha de existir al menos un alumno en la agenda.
___

**Flujo principal**
  
  1. El caso de uso comienza cuando el profesor quiere ver todos los alumnos de un equipo concreto.
  2. Se pide al profesor en que formato quiere que se muestren los datos, si Markdown o html.
  3. Se le pide al profesor el numero de equipo que desea buscar.
  4. La lista buscará usando la función Búsqueda (**ID 2**) al equipo deseado.
  5. Una vez encontrado, se generará un fichero Markdown o html con toda la información de los alumnos del equipo resaltando el liderazgo.
  
___
**Postcondiciones**
  
  * Se generará satisfactoriamente el fichero Markdown o html del equipo mostrado.

___
   
**Flujo alternativo**
  
   1a. En el caso de no haber datos sobre el equipo escogido en el sistema, se volverá al menú principal avisando al profesor de que no hay datos de ese equipo.
  
