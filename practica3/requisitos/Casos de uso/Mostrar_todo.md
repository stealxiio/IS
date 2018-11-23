## Mostrar_todo

  **ID:** 006 **Breve descripción:** se muestra todos los alumnos de la lista.
  
  ___
  
  **Actores principales:** Profesor.
  
  **Actores secundarios:** Lista y alumnos.
  
  ___
  **Precondiciones:**
  
   * Ha de existir al menos un alumno en la lista.
    
   ___
   
   **Flujo principal:**
   
  1. El caso de uso comienza cuando el profesor quiere ver todos los alumnos de la lista.
  3. La lista buscará usando la función Búsqueda (**ID 2**).
  4. Se generará un fichero Markdown con toda la información de los alumnos resaltando el liderazgo.

   ___
   
   **Postcondiciones:**
  
   * Se generará satisfactoriamente el fichero Markdown con la información de todos los alumnos de la lista.
   * Todos  los alumnos saldrán ordenados por orden alfabético, DNI o curso más alto del que estén matriculados.
    
   ___
   
   **Flujo alternativo:**
   
