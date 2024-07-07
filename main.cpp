#include <stdio.h>
#include <string.h>

#include "include/tramos.h"
// #include "include/boolean.h"
// #include "include/ciudades.h"
// #include "include/conjuntolineas.h"
// #include "include/stringdinamico.h"
// #include "include/lineas.h"

int main() {

    Tramos T;
    int c1, c2;

    Ciudades C;
    string str1;

    int num;
    boolean proceder=TRUE;

    CrearCiudades(C);
    StrCrear(str1);

    while (proceder){
        printf("\n\nIngrese: \n1-registrar una ciudad \n2-desplegar las ciudades \n3-registrar un tramo entre dos ciudades \n4-verificar si existe una secuencia de tramos entre dos ciudades \n5-salir del programa \n");
        scanf("%d", &num);

        switch (num){
            case 1:
                    printf("\nIngrese la ciudad a registrar en el sistema: ");
                    cargarString(str1);
                    RegistrarCiudad(C, str1);
                    break;
            case 2:
                    DesplegarCiudades(C);
                    break;
            case 3: 
                    printf("\nIngrese los numeros de las ciudades para registrar el tramo: ");
                    scanf("%d %d", &c1, &c2);
                    if (!EsLlenaCiudades(C))
                        printf("\n No se han registrado las %d ciudades", N);
                    else
                        RegistrarTramo (T, c1, c2);
                    break;
            case 4: 
                    printf("\nIngrese los numeros de las ciudades a verificar si hay una secuencia de tramos: ");
                    scanf("%d %d", &c1, &c2);
                    if (!EsLlenaCiudades(C))
                        printf("\n No se han registrado las %d ciudades", N);
                    else
                        if (ExisteSecuencia (T, c1, c2))
                            printf("\n Si existe una secuencia entre las ciudades");
                        else
                            printf("\n No hay secuencia entre las dos ciudades");
                    break;
            case 5: 
                    proceder=FALSE;
                    break;
        }
    } 
}