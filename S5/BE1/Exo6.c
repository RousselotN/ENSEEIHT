#include <stdio.h>

/* EXO6 BE1 */

int main(){

    char chaine[5] = {"Salut"};
    int i = 0;
    printf("%s\n\n", chaine);
    printf("L'adresse de cette chaine de caractere est: %p\n\n", chaine);
    printf("Veuillez ecrire un nouveau mot de 5 caracteres: ");
    scanf("%s", chaine);
    printf("%s", chaine);

    return 0;

}
