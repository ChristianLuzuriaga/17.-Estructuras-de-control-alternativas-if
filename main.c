#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero = -3;
    int numero2 = 7;
    int numero3 = 1;

    if (numero > 0 && numero2 > 0 && numero3 > 0) {
        printf("Los tres números son positivos\n");
    } else if (numero > 0 || numero2 > 0 || numero3 > 0) {
        printf("Alguno de los números es positivo\n");
    } else {
        printf("Ninguno de los números es positivo\n");
    }

    printf("Fin del programa\n");

   
}
