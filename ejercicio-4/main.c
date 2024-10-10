#include <stdio.h>
#include <stdlib.h>
#include "ejercicio4.h"
#include "tad.h"
#include "tipo_elemento.h"
#include "listas.h"

int main()
{
    Cola cola = c_crear();
    cargar_cola(&cola);

    Cola ele_no_repetidos = no_repetidos(&cola);
    printf("ELEMENTOS NO REPETIDOS: \n");
    c_mostrar(ele_no_repetidos);

    return 0;
}
