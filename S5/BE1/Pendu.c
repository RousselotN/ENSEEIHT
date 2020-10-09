#include <stdio.h>
#include <stdlib.h>

/* BE1 Pendu */
/*Prototypes*/
void print_word(char* word, int* wordtable, int size);
char* new_word(int size);
int* new_tab(int size);
int get_size();
void get_word(char* word, int size);
void play(char* word, int* tab, int size, int round);
int guessed(int* tab, int size);

int main(){
    int size = get_size();
    int* tab = new_tab(size);
    char* word = new_word(size);
    get_word(word, size);
    int round = 1;
    while (!guessed(tab, size)){
        print_word(word, tab, size);
        play(word, tab, size, round);
        round++;
    }
    printf("\nBravo! Vous avez deviné le mot!");
    free(tab);
    free(word);
    return 0;
}

void print_word(char* word, int* wordtable, int size){
    int i = 0;
    while (i < size){
        if (wordtable[i] == 1){
            printf("%c", word[i]);
        }
        else {
            printf("__");
        }
        i++;
    }
}

char* new_word(int size){
    char* word = malloc(size*sizeof(char));
    return word;
}

int* new_tab(int size){
    int* tab = malloc(size*sizeof(int));
    int i = 0;
    while (i < size){
        tab[i] = 0;
        i++;
    }
    return tab;
}

int get_size(){
    printf("\nQuel est la taille du mot a faire deviner?");
    int size;
    do{
        scanf(" %d", &size);
    }while(size <= 0 || size > 25);
    return size;
}

void get_word(char* word, int size){
    printf("\nEntrez le mot de taille %d : ", size);
    scanf(" %s", word);
}

void play(char* word, int* tab, int size, int round){
    printf("\nEssai %d : Entrez une lettre : ", round);
    char choix;
    scanf(" %c", &choix);
    int i = 0;
    while (i < size){
        if (word[i] == choix){
            tab[i] = 1;
        }
        i++;
    }
}

int guessed(int* tab, int size){
    int i = 0;
    while (i < size){
        if (tab[i] == 0){
            i = size;
        }
        i++;
    }
    if (i == size + 1){
        return 0;
    }
    return 1;
}
