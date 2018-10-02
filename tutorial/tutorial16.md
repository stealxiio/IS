## Dar seguimiento a branches remotos

* LOCAL -> REMOTO
	1. Cambios en el repositorio local.
	2. Commit de los cambios.
	3. Añadir cambios a repositorio remoto:
	~~~
	git  push
	~~~

* REMOTO -> LOCAL
	* *Sincronización y unión:*
	~~~
	git  fetch  origin
	git  merge  origin/master
	~~~

	* *En un solo paso:*
	~~~
	git  pull
	~~~
