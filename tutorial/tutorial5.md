## Comandos básicos 4

*Deshacer cambios con git:*
~~~
git  checkout  -- nombre_fichero
~~~

*Retirar archivos del staging:*
~~~
git  reset  HEAD  nombre_fichero
~~~

*Complementar último commit:*
~~~
git  commit  --amend  -m "Mensaje"
~~~

*Recuperar version de un  chero de commit antiguo:*
~~~
git  checkout  <id_commit > -- nombre_archivo
~~~

*Revertir un commit:*
~~~
git  revert  <id_commit >
~~~