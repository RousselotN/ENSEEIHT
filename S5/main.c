#include <stdio.h>

/* PARTIE 1 BE1 */

int main1(){
    int val_int = 2;
    float val_float = 1.53;

    printf("La valeur de val_int est %i \n", val_int);
    printf("La valeur de val_float est %f \n", val_float);

    printf("Entrez la nouvelle valeur de val_int = \n ");
    scanf("%i", &val_int);
    printf("Entrez la nouvelle valeur de val_float = \n ");
    scanf("%f", &val_float);

    printf("La nouvelle valeur de val_int est %i \n", val_int);
    printf("La nouvelle valeur de val_float est %f \n", val_float);

    return 0;

}
