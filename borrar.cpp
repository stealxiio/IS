#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include "List.h"

//borraras un alumno en el sistema
void borrar(List *1, int elem){
	if(elem < 0 || offset >= 1->Count) return;
	1->Elements[elem] = NULL;
	1->Count--;
	1->Elements = realloc(1->Elements, sizeof(void*) * 1->Count);
}