#include <stdio.h>
/* PARTIE 4 BE1 */

/*CONSTS*/
#define M_PI 3.14159265358979323846

/*Structures*/
typedef struct Cercle{
    int rayon;
    int diametre;
    int aire;
    int perimetre;
}Cercle;

/*Prototypes*/
Cercle* init_cercle(int ray);
void print_cercle(Cercle* cercle);

/*Main*/
int main(){
    Cercle* cercle = init_cercle(3);
    print_cercle(cercle);
    int new_rayon;

    printf("Entrez un nouveau rayon");
    scanf("%d", &new_rayon);

    modify_cercle(cercle, new_rayon);
    print_cercle(cercle);

    free(cercle);
    return 0;
}

Cercle* init_cercle(int ray){
    Cercle* cercle = malloc(sizeof(Cercle));
    cercle->rayon = ray;
    cercle->diametre = ray * 2;
    cercle->aire = ray * ray * M_PI;
    cercle->perimetre = 2 * ray * M_PI;
    return cercle;
}

void modify_cercle(Cercle* cercle, int ray){
    cercle->rayon = ray;
    cercle->diametre = ray * 2;
    cercle->aire = ray * ray * M_PI;
    cercle->perimetre = 2 * ray * M_PI;
}

void print_cercle(Cercle* cercle){
    printf("rayon: %d\ndiametre: %d\naire: %d\nperimetre: %d\n", cercle->rayon, cercle->diametre, cercle->aire, cercle->perimetre);
}
