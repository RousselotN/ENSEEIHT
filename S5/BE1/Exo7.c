#include <stdio.h>

/* EXO7 BE1 */

int main(){

    char tab[5] = {"Salut"};

    int choix;
    char continuer = 1;
    printf("Mot initial: %s", tab);
    do{
        printf("\n\nMot actuel: %s.\n Choisissez l'emplacement de la lettre a modifier (entre 0 et 4 inclus): ", tab);
        scanf(" %d", &choix);
        switch(choix){
            case 0:
                printf("\n\nChangez la lettre: %c: ", tab[0]);
                scanf(" %c", &tab[0]);
                break;
            case 1:
                printf("\n\nChangez la lettre: %c: ", tab[1]);
                scanf(" %c", &tab[0]);
                break;
            case 2:
                printf("\n\nChangez la lettre: %c: ", tab[2]);
                scanf(" %c", &tab[2]);
                break;
            case 3:
                printf("\n\nChangez la lettre: %c: ", tab[3]);
                scanf(" %c", &tab[3]);
                break;
            case 4:
                printf("\n\nChangez la lettre: %c: ", tab[4]);
                scanf(" %c", &tab[4]);
                break;
            default:
                printf("\n\nIl faut choisir entre 0 et 4 inclus");
                break;
        }
        printf("\n\nSouhaitez vous continuer? (0 = non, 1 ou autre = oui) ");
        scanf(" %d", &continuer);
    }while(continuer == 1);
    printf("\n\nMot final: ");
    int i;
    for (i = 0; i < 5; i++){
        printf("%c", tab[i]);
    }

    return 0;

}

