## Operaciones con *branches* remotos

* Creación:
	1. Crear branch local.
	2. Hacer cambios en dicho branch.
	3. Hacer commit.
	4. Copiar el branch al repositorio remoto:
	~~~
	git  push -u origin  branch_remoto
	~~~

* Copia:
~~~
git  checkout  -b local  remoto
~~~

* Eliminación:
~~~
git  push  origin  --delete  branch_remoto
~~~