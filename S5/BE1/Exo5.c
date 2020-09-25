#include <stdio.h>
#include <stdlib.h>

/* EXO5 BE1 */

int main(){

    int* tab = malloc(5*sizeof(int));
    int i = 0;
    while (i < 5){
        tab[i] = 5-i;
        i++;
    }
    printf("L'adresse du tableau est %p\n\n", tab);
    i = 0;
    while (i < 5){
        printf("Pour l emplacement %d:\n L'adresse est %p\n La valeur est %i\n\n", i, &tab[i], tab[i]);
        i++;
    }

    free(tab);
    return 0;

}
