#include <stdio.h>

/* Allumettes BE1 */
/* Structures */
typedef struct Node{
    struct Node* prev;
    int size;
}Node;

/* Prototype */
Node* create_node(Node* prev, int size);
Node* create_nodes(int size);
void print_board(Node* node);
void free_node(Node* node);
Node* play(Node* node, int player);

int main(){
    int nombre;
    printf("Vous voulez jouer avec combien d'allumettes? ");
    scanf(" %d", &nombre);
    Node* node = create_nodes(nombre);
    print_board(node);
    int i = 0;
    while (node != NULL){
        node = play(node, (i % 2) + 1); /* (i%2)+1 donne l'ID du joueur (1 ou 2) */
        print_board(node);
        i++;
    }
    printf("\n\nLe joueur %d a gagne!\n", ((i - 1) % 2) + 1); /* ((i-1)%2)+1 donne l'ID du précédent joueur (1 ou 2) */
    return 0;
}

Node* create_node(Node* prev, int size){
/*
Entrées: adresse du Node précédent, taille de la chaîne à partir de la node créée
Sortie: Adresse de la Node créée
Description: Création d'un maillon
*/
    Node* node = malloc(sizeof(Node)); /* Allocation dynamique de l'espace mémoire de taille Node */
    node->prev = prev;
    node->size = size;
    return node;
}

Node* create_nodes(int size){
/*
Entrées: Taille total de la liste chaînée
Sortie: Tête de la liste
Description: Creation d'un liste chaînée modélisant le nombre total d'allumettes.
*/
    int i = 1;
    Node* head = create_node(NULL, size);
    Node* curr = head;
    while (i < size){
        curr->prev = create_node(NULL, size - i);
        curr = curr->prev;
        i++;
    }
    return head;
}

void print_board(Node* node){
/*
Entrée: Tête de la liste à afficher
Sortie: Rien (affichage)
Description: Affichage des allumette restantes
*/
    Node* curr = node;
    while (curr != NULL){
        printf("|%d", curr->size); /* L'affichage de l'ID de l'allumette est une fonctionnalité de débug. L'idée est de répérer facilement si le nombre d'allumette générées est correct. */
        curr = curr->prev;
    }
}

Node* free_nodes(Node* node, int number){
/*
Entrée: Tête de la liste chaînée, nombre de maillons à supprimer
Sortie: Nouvelle tête de liste
Description: Suppression du nombre d'allumettes choisis par le joueur.
*/
    if (number == 0){ /* Stopping case */
        return node;
    }
    else{
        Node* temp = node;
        node = node->prev;
        free(temp); /* Libération de l'espace mémoire inutile */
        return free_nodes(node, number - 1); /* Appel Récursif */
    }
}

Node* play(Node* node, int player){
/*
Entrée: Tête de chaîne, numéro du joueur
Sortie: Nouvelle tête de chaîne
Description: Fonction d'execution du jeu.
*/
    printf("\n\nCombien d'allumettes voulez vous enlever joueur %d? ", player);
    int choix;
    do{
        scanf(" %d", &choix);
    }while(choix > 4 || choix < 0 || choix > node->size); /* Vérification que les règles du jeux soient respectées, et que le joueur ne puisse pas supprimer plus d'allumettes qu'il n'y en a */

    node = free_nodes(node, choix);
    return node;
}

