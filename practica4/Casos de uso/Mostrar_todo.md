## Mostrar_todo

  **ID:** 006 **Breve descripción:** se muestra todos los alumnos de la agenda.
  
  ___
  
  **Actores principales:** Profesor.
  
  **Actores secundarios:** Lista y alumnos.
  
  ___
  **Precondiciones:**
  
   * Ha de existir al menos un alumno en la agenda.
    
   ___
   
   **Flujo principal:**
   
  1. El caso de uso comienza cuando el profesor quiere ver todos los alumnos de la agenda.
  2. Se pide al profesor en que formato quiere que se muestren los datos, si Markdown o html.
  3. Se pide al profesor que criterio de busqueda desea, segun DNI, alfabetico, curso mas alto y descendiente/ascendente.
  4. La lista buscará usando la función Búsqueda (**ID 2**).
  5. Se generará un fichero Markdown con toda la información de los alumnos resaltando el liderazgo.

   ___
   
   **Postcondiciones:**
  
   * Se generará satisfactoriamente el fichero Markdown con la información de todos los alumnos de la agenda.
   * Todos  los alumnos saldrán ordenados por orden alfabético, DNI o curso más alto del que estén matriculados.
    
   ___
   
   **Flujo alternativo:**
   
