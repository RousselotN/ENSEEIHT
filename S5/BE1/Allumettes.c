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
        node = play(node, (i % 2) + 1);
        print_board(node);
        i++;
    }
    printf("\n\nLe joueur %d a gagne!\n", ((i - 1) % 2) + 1);
    return 0;
}

Node* create_node(Node* prev, int size){
    Node* node = malloc(sizeof(Node));
    node->prev = prev;
    node->size = size;
    return node;
}

Node* create_nodes(int size){
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
    Node* curr = node;
    while (curr != NULL){
        printf("|%d", curr->size);
        curr = curr->prev;
    }
}

Node* free_nodes(Node* node, int number){
    if (number == 0){
        return node;

    }
    else{
        Node* temp = node;
        node = node->prev;
        free(temp);
        return free_nodes(node, number - 1);
    }
}

Node* play(Node* node, int player){
    printf("\n\nCombien d'allumettes voulez vous enlever joueur %d?", player);
    int choix;
    do{
        scanf(" %d", &choix);
    }while(choix > 4 || choix < 0 || choix > node->size);

    node = free_nodes(node, choix);
    return node;
}

