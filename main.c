#include <stdio.h>
#include "suma.h"
#include "resta.h"
#include "multiplicacion.h"

int main(void) {
    int op = 0, a, b, r = 0;

    printf("----------------------------------------------------");
    printf("\nIngrese el numero de la operacion que desea realizar");
    printf("\n----------------------------------------------------");
    printf("\n1. Suma");
    printf("\n2. Resta");
    printf("\n3. Multiplicacion");
    printf("\n4. Salir");
    printf("\n----------------------------------------------------\n");

    while (op != 4) {
        printf("\nSeleccione una opcion: ");
        scanf("%d", &op);

        if (op == 4) {
            printf("\nSaliendo de la calculadora...\n");
            break;
        }

        printf("Ingrese el numero a: ");
        scanf("%d", &a);
        printf("Ingrese el numero b: ");
        scanf("%d", &b);

        switch (op) {
            case 1:
                r = suma(a, b);
                printf("El resultado de la suma es: %d\n", r);
                break;
            case 2:
                r = resta(a, b);
                printf("El resultado de la resta es: %d\n", r);
                break;
            case 3:
                r = multiplicacion(a, b);
                printf("El resultado de la multiplicacion es: %d\n", r);
                break;
            default:
                printf("Opcion no valida. Intente nuevamente.\n");
        }
    }

    return 0;
}
