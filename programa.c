#include <stdio.h>
#include <stdbool.h>

int main() {
    // 1. DEFINICIÓN DE VARIABLES (Tus asientos y opciones)
    bool asiento1 = true;
    bool asiento2 = false;
    bool asiento3 = true;
    bool asiento4 = false;
    bool asiento5 = true;
    int asientoUsuario;
    int opcion = 1; 

    while(opcion != 0) {
        printf("\nBienvenido al sistema de Compra de Pasajes\n");
        printf("Seleccione 1 de los 5 asientos: \n");
        scanf("%d", &asientoUsuario);

        if (asientoUsuario == 1)
        {
            if (asiento1 == true)
            {
                printf("Lo Sentimos Asiento Ocupado\n");
            } else {
                asiento1 = true;
                printf("Asiento Disponible, asiento comprado con exito!\n");
            }
        }

        else if (asientoUsuario == 2)
        {
            if (asiento2 == true)
            {
                printf("Lo Sentimos Asiento Ocupado\n");
            } else {
                asiento2 = true;
                printf("Asiento Disponible, asiento comprado con exito!\n");
            }
        }
        else if (asientoUsuario == 3){
            if (asiento3 == true){
                printf("Lo Sentimos Asiento Ocupado\n");
            } else {
                asiento3 = true;
                printf("Asiento Disponible, asiento comprado con exito!\n");
            }
        }
        else if (asientoUsuario == 4)
        {
            if (asiento4 == true)
            {
                printf("Lo Sentimos Asiento Ocupado\n");
            } else {
                asiento4 = true;
                printf("Asiento Disponible, asiento comprado con exito!\n");
            }
        }
        else if (asientoUsuario == 5)
        {
            if (asiento5 == true)
            {
                printf("Lo Sentimos Asiento Ocupado\n");
            } else {
                asiento5 = true;
                printf("Asiento Disponible, asiento comprado con exito!\n");
            }
        }
        else {
            printf("Numero de asiento invalido. Intente del 1 al 5.\n");
        }
        
        printf("\n¿Desea comprar otro pasaje? (Seleccione 1 para CONTINUAR, 0 para SALIR): \n");
        scanf("%d", &opcion);
    }
    return 0;
}