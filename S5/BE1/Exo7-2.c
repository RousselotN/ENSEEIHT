#include <stdio.h>

/* EXO7-2 BE1 */

int main(){
    int answer = 83;
    int guess;
    printf("Vous devez deviner le nombre entre 0 et 100 le plus rapidemment possible.\n");
    int i = 0;
    do{
        if (i != 0){
            printf("\nMauvaise reponse!\n");
        }
        printf("\nMake a guess:");
        scanf(" %d", &guess);
        i++;
    }while (guess != answer);
    printf("Bonne reponse! C'etait bien %d. Vous l'avez trouve en %d essais", answer, i);

    return 0;

}

